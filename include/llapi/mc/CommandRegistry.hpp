/**
 * @file  CommandRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
#include <memory>
// Include Headers or Declare Types Here
class CommandParameterData;
#include "RelativeFloat.hpp"
#include "CommandFlag.hpp"
#include "CommandPosition.hpp"
#include "CommandPositionFloat.hpp"
#include "CommandMessage.hpp"
#include "CommandSelector.hpp"
#include "CommandOrigin.hpp"
#include "CommandVersion.hpp"
#include "CommandRawText.hpp"
#include "CommandItem.hpp"
#include "CommandIntegerRange.hpp"
#include "CommandBlockName.hpp"
#include "BlockStateCommandParam.hpp"
#include "ActorDamageSource.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandRegistry.
 *
 */
class CommandRegistry {

#define AFTER_EXTRA
    // Add Member There

public:
    struct ParseTable;
    class Symbol {
    public:
        int val;

        MCAPI unsigned __int64 toIndex() const;
        MCAPI int value() const;
        inline bool operator==(Symbol const& right) const {
            return val == right.val;
        }
        [[nodiscard]] inline std::string toString() const {
            return Global<CommandRegistry>->symbolToString(*this);
        }
        [[nodiscard]] inline std::string toDebugString() const {
            return fmt::format("<Symbol {}({})>", toString(), val);
        }
    };

    struct ParseToken {
        std::unique_ptr<CommandRegistry::ParseToken> child;
        std::unique_ptr<CommandRegistry::ParseToken> next;
        CommandRegistry::ParseToken* parent;
        const char* text; // 24
        uint32_t length;  // 32
        Symbol type;      // 36
        MCAPI std::string toString() const;
        //{
        //    if (text)
        //        return std::string(text, length);
        //    auto v6 = child.get();
        //    auto v8 = child.get();
        //    while (v8->child)
        //    {
        //        v8 = v8->child.get();
        //    }
        //    while (v6->child || v6->next)
        //    {
        //        v6 = v6->next ? v6->next.get() : v6->child.get();
        //    }
        //    auto v10 = v6->text + v6->length;
        //    auto v11 = v8->text;
        //    return std::string(v11, v10 - v11);
        //};
        [[nodiscard]] inline std::string toDebugString() const {
            return fmt::format("<ParseToken {}>", toString());
        }
    };
    static_assert(sizeof(ParseToken) == 40);
    using ParseFn = bool (CommandRegistry::*)(
        void*, ParseToken const&, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const;

    struct Overload {
        using FactoryFn = std::unique_ptr<class Command> (*)();

        CommandVersion version;                   // 0
        FactoryFn factory;                        // 8
        std::vector<CommandParameterData> params; // 16
        int versionOffset;                        // 40
        std::vector<Symbol> syms = {};            // 48

        LIAPI Overload(CommandVersion version,
                       FactoryFn factory,
                       std::vector<CommandParameterData>&& args);

        LIAPI ~Overload();

        inline std::string toDebugString() {
            return fmt::format("<Overload>");
        }
    };

    struct Signature {
        std::string name;                // 0
        std::string desc;                // 32
        std::vector<Overload> overloads; // 64
        std::vector<void*> unk88;        // 88
        CommandPermissionLevel perm;     // 112
        Symbol main_symbol;              // 116
        Symbol alt_symbol;               // 120
        CommandFlag flag;                // 124
        int firstRule;                   // 128
        int firstFactorization;          // 132
        int firstOptional;               // 136
        bool runnable;                   // 140
        size_t ruleCounter;              // 144

        inline Signature(std::string_view name,
                         std::string_view desc,
                         CommandPermissionLevel perm,
                         Symbol symbol,
                         CommandFlag flag)
        : name(name), desc(desc), perm(perm), main_symbol(symbol), flag(flag) {
        }

        inline std::string toDebugString() const {
            return fmt::format("<Signature {}>", name);
        }
    };

    struct SoftEnum {
        std::string name;              // 0
        std::vector<std::string> list; // 32
    };

    struct Enum {
        std::string name;                                                                           // 0
        Bedrock::typeid_t<CommandRegistry> type;                                                    // 32
        ParseFn parse;                                                                              // 40
        std::vector<std::tuple<unsigned long, unsigned long, unsigned long, unsigned long>> values; // 48

        inline std::string toDebugString() const {
            return fmt::format("<Enum {}>", name);
        }
    };

    LIAPI static std::vector<std::string> getEnumNames();
    LIAPI static std::vector<std::string> getSoftEnumNames();
    LIAPI static std::vector<std::string> getEnumValues(std::string const& name);
    LIAPI static std::vector<std::string> getSoftEnumValues(std::string const& name);
    LIAPI static std::string getCommandFullName(std::string const& name);
    // Experiment
    LIAPI bool unregisterCommand(std::string const& name);

    template <typename Type>
    struct DefaultIdConverter {
        template <typename Target, typename Source>
        static Target convert(Source source) {
            return (Target)source;
        }
        uint64_t operator()(Type value) const {
            return convert<uint64_t, Type>(value);
        }
        Type operator()(uint64_t value) const {
            return convert<Type, uint64_t>(value);
        }
    };

#ifdef COMMAND_REGISTRY_EXTRA
    inline static std::string toString(std::vector<Symbol> const& syms) {
        std::ostringstream oss;
        bool first = true;
        for (auto& sym : syms) {
            if (!first)
                oss << ", ";
            oss << sym.toString();
            first = false;
        }
        return oss.str();
    }
    struct ParseRule {
        Symbol sym;
        std::function<ParseToken*(ParseToken&, Symbol)> func;
        std::vector<Symbol> syms;
        CommandVersion version;
        inline std::string toDebugString() const {

            return fmt::format("<ParseRule {} - [{}]>", sym.toDebugString(), toString(syms));
        }
    };
    struct ParseTable {
        std::map<Symbol, std::vector<Symbol>> first;
        std::map<Symbol, std::vector<Symbol>> follow;
        std::map<std::pair<Symbol, Symbol>, int> predict;
        inline std::string toDebugString() const {
            std::ostringstream oss;
            bool f = true;
            for (auto& [k, v] : first) {
                if (!f)
                    oss << ", ";
                oss << k.toString() << ":[" << toString(v) << "]";
                f = false;
            }
            oss << "\n";
            for (auto& [k, v] : follow) {
                if (!f)
                    oss << ", ";
                oss << k.toString() << ":[" << toString(v) << "]";
                f = false;
            }
            return fmt::format("<ParseTable>[{}]", oss.str());
        }
    };
    struct OptionalParameterChain {
        int parameterCount;
        int followingRuleIndex;
        Symbol paramSymbol;
        inline std::string toDebugString() const {
            return fmt::format("<OptionalParameterChain {},{},{}>", parameterCount, followingRuleIndex, paramSymbol.toDebugString());
        }
    };
    struct Factorization {
        Symbol sym;
        inline std::string toDebugString() const {
            return fmt::format("<Factorization {}>", sym.toDebugString());
        }
    };
    struct RegistryState {
        int signatureCount;
        int enumValueCount;
        int postfixCount;
        int enumCount;
        int factorizationCount;
        int optionalCount;
        int ruleCount;
        int softEnumCount;
        int constraintCount;
        std::vector<unsigned int> constrainedValueCount;
        std::vector<unsigned int> softEnumValuesCount;
    };
    struct ConstrainedValue {
        Symbol mValue;
        Symbol mEnum;
        std::vector<unsigned char> mConstraints;
        inline std::string toDebugString() const {
            std::ostringstream oss;
            bool first = true;
            for (auto& i : mConstraints) {
                if (!first)
                    oss << ", ";
                oss << (int)i;
                first = false;
            }
            return fmt::format("<ConstrainedValue {} - {} - [{}]>", mValue.toDebugString(), mEnum.toDebugString(), oss.str());
        }
    };

    using CommandOverrideFunctor = std::function<void __cdecl(struct CommandFlag&, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&)>;
    using ParamSymbols = std::array<Symbol, 23>;

    std::function<void(const class Packet&)> mGetScoreForObjective;//0
    std::function<void(const class Packet&)> mNetworkUpdateCallback;//64
    std::vector<ParseRule> mRules;//128
    std::map<unsigned int, ParseTable> mParseTableMap;//152
    std::vector<OptionalParameterChain> mOptionals; //168
    std::vector<std::string> mEnumValues;//192
    std::vector<CommandRegistry::Enum> mEnums;//216
    char filler48[48];
    std::vector<CommandRegistry::Factorization> mFactorizations;//288
    std::vector<std::string> mPostfixes;//312
    std::map<std::string,unsigned int> mEnumLookup;//336
    std::map<std::string,unsigned long> mEnumValueLookup;//352
    std::vector<CommandRegistry::Symbol> mCommandSymbols;//368
    char filler32[32];
    std::map<std::string,CommandRegistry::Signature> mSignatures;//424
    std::map<Bedrock::typeid_t<CommandRegistry>,int> mTypeLookup;//440
    std::map<std::string,std::string> mAliases;//456
    std::vector<SemanticConstraint> mSemanticConstraints;//472
    std::map<SemanticConstraint, unsigned char> mSemanticConstraintLookup;//496
    std::vector<ConstrainedValue> mConstrainedValues;//512
    std::map<std::pair<unsigned long, unsigned int>, unsigned int> mConstrainedValueLookup;//536
    std::vector<CommandRegistry::SoftEnum> mSoftEnums;//552
    std::map<std::string,unsigned int> mSoftEnumLookup;//576
    std::vector<RegistryState> mStateStack; //592
    ParamSymbols mArgs;//616
    char filler[64];
    CommandOverrideFunctor mCommandOverrideFunctor;//712
    //840



    inline void printAll() const;
    inline void printSize() const;

    void test() {
        constexpr auto size = sizeof(CommandRegistry);

        static_assert(size == 840);
        static_assert(sizeof(Enum) == 72);
        static_assert(offsetof(CommandRegistry, mEnumValues) == 192);
        static_assert(offsetof(CommandRegistry, mEnums) == 216);
        static_assert(offsetof(CommandRegistry, mCommandSymbols) == 368);
        static_assert(offsetof(CommandRegistry, mSignatures) == 424);
        static_assert(offsetof(CommandRegistry, mSoftEnumLookup) == 576);
    }
#endif // COMMAND_REGISTRY_EXTRA

    template <typename T>
    inline static std::unique_ptr<class Command> allocateCommand() {
        return std::make_unique<T>();
    }

    LIAPI void registerOverload(std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args);

    template <typename T, typename... Params>
    inline void registerOverload(std::string const& name, Params... params) {
        registerOverload(name, &allocateCommand<T>, {params...});
    }

    template <typename Type>
    bool
        fakeParse(void*, ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&) const {
        return false;
    }

    inline static std::unordered_map<string, void*> parse_ptr = {
        {typeid(CommandMessage).name(),
         dlsym_real("??$parse@VCommandMessage@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@"
                    "@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                    "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
                    "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(std::string).name(),
         dlsym_real("??$parse@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@"
                    "CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_"
                    "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
                    "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(bool).name(),
         dlsym_real("??$parse@_N@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_"
                    "traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(float).name(),
         dlsym_real("??$parse@M@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                    "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(int).name(),
         dlsym_real("??$parse@H@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                    "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandSelector<Actor>).name(),
         dlsym_real("??$parse@V?$CommandSelector@VActor@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
                    "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
                    "AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
                    "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandSelector<Player>).name(),
         dlsym_real("??$parse@V?$CommandSelector@VPlayer@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
                    "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
                    "AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
                    "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandPosition).name(),
         dlsym_real("??$parse@VCommandPosition@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
                    "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@"
                    "std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandPositionFloat).name(),
         dlsym_real("??$parse@VCommandPositionFloat@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
                    "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@"
                    "V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(Json::Value).name(),
         dlsym_real("??$parse@VValue@Json@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
                    "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
                    "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(std::unique_ptr<class Command>).name(),
         dlsym_real("??$parse@V?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@@CommandRegistry@@AEBA_"
                    "NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@"
                    "D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
                    "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(RelativeFloat).name(),
         dlsym_real("??$parse@VRelativeFloat@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_"
                    "traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$"
                    "allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandRawText).name(),
         dlsym_real("??$parse@VCommandRawText@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_"
                    "traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$"
                    "allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(class MobEffect const*).name(),
         dlsym_real("??$parse@PEBVMobEffect@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_"
                    "traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$"
                    "allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandItem).name(),
         dlsym_real("??$parse@VCommandItem@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_"
                    "traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$"
                    "allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(WildcardCommandSelector<Actor>).name(),
         dlsym_real("??$parse@V?$WildcardCommandSelector@VActor@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
                    "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@"
                    "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
                    "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(ActorDefinitionIdentifier const*).name(),
         dlsym_real("??$parse@PEBUActorDefinitionIdentifier@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
                    "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@"
                    "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
                    "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandBlockName).name(),
         dlsym_real("??$parse@VCommandBlockName@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?"
                    "$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_"
                    "traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$"
                    "allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(std::vector<BlockStateCommandParam>).name(),
         dlsym_real(
             "??$parse@V?$vector@VBlockStateCommandParam@@V?$allocator@VBlockStateCommandParam@@@std@@@std@@@"
             "CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@"
             "@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$"
             "allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    };

private:
    template <typename T>
    bool parse(void*, ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&) const {

    };

public:
    template <typename T>
    inline static ParseFn getParseFn() {
        if constexpr (!std::is_same_v<enum class CommandOperator, T> && std::is_enum_v<T>)
            return &fakeParse<T>;
        // else
        //     return &parse<T>;
        bool (CommandRegistry::*ptr)(void*, CommandRegistry::ParseToken const&,
                                     CommandOrigin const&, int, std::string&,
                                     std::vector<std::string>&) const;
        *(void**)&ptr = parse_ptr[typeid(T).name()];
        if (!ptr) {
            printf("Cant parse cmd data %s\n", typeid(T).name());
            std::this_thread::sleep_for(std::chrono::seconds(10));
            exit(1);
        }
        return ptr;
    }
    bool parseEnumInt(void* target,
                      CommandRegistry::ParseToken const& token,
                      CommandOrigin const&,
                      int,
                      std::string&,
                      std::vector<std::string>&) const {
        auto data = getEnumData(token);
        *(int*)target = (int)data;
        return true;
    }
    bool parseEnumString(void* target,
                         CommandRegistry::ParseToken const& token,
                         CommandOrigin const&,
                         int,
                         std::string&,
                         std::vector<std::string>&) const {
        auto data = token.toString();
        *(std::string*)target = data;
        return true;
    }
    bool parseEnumStringAndInt(void* target,
                               CommandRegistry::ParseToken const& token,
                               CommandOrigin const&,
                               int,
                               std::string&,
                               std::vector<std::string>&) const {
        auto str = token.toString();
        auto data = getEnumData(token);
        *(std::pair<std::string, int>*)target = {str, (int)data};
        return true;
    }

    template <typename Type, typename IDConverter = CommandRegistry::DefaultIdConverter<Type>>
    bool parseEnum(
        void* target, CommandRegistry::ParseToken const& token, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const {
        // fmt::print(token.toString() + '\n');
        auto data = getEnumData(token);
        *(Type*)target = IDConverter{}(data);
        return true;
    }

    template <typename Type, typename IDConverter = CommandRegistry::DefaultIdConverter<Type>>
    unsigned addEnumValues(std::string const& name, Bedrock::typeid_t<CommandRegistry> tid,
        std::vector<std::pair<std::string, Type>> const& values) {
        std::vector<std::pair<std::string, uint64_t>> converted;
        IDConverter converter;
        for (auto& value : values)
            converted.emplace_back(value.first, converter(value.second));
        return _addEnumValuesInternal(name, converted, tid, &CommandRegistry::parseEnum<Type, IDConverter>).val;
    }
    unsigned addEnumValues(std::string const& name, Bedrock::typeid_t<CommandRegistry> tid,
                           std::initializer_list<std::string> const& values) {
        std::vector<std::pair<std::string, uint64_t>> converted;
        uint64_t idx = 0;
        for (auto& value : values)
            converted.emplace_back(value, ++idx);
        return _addEnumValuesInternal(name, converted, tid, &CommandRegistry::parseEnumInt).val;
    }

    // inline static typeid_t<CommandRegistry> getNextTypeId() {
    //     return typeid_t<CommandRegistry>::count++;
    // }

    template <typename T>
    CommandRegistry* addEnum(char const* name, std::vector<std::pair<std::string, T>> const& values) {
        this->addEnumValues<T>(name, Bedrock::type_id<CommandRegistry, T>(), values);
        return this;
    }

    friend class DynamicCommand;
    friend class DynamicCommandInstance;


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDREGISTRY
public:
    class CommandRegistry& operator=(class CommandRegistry const &) = delete;
    CommandRegistry(class CommandRegistry const &) = delete;
#endif

public:
    /**
     * @symbol ??0CommandRegistry\@\@QEAA\@XZ
     */
    MCAPI CommandRegistry();
    /**
     * @symbol ?addEnumValueConstraints\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@W4SemanticConstraint\@\@\@Z
     */
    MCAPI void addEnumValueConstraints(std::string const &, std::vector<std::string> const &, enum class SemanticConstraint);
    /**
     * @symbol ?addEnumValues\@CommandRegistry\@\@QEAAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI int addEnumValues(std::string const &, std::vector<std::string> const &);
    /**
     * @symbol ?addSoftEnum\@CommandRegistry\@\@QEAAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI int addSoftEnum(std::string const &, std::vector<std::string>);
    /**
     * @symbol ?addSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void addSoftEnumValues(std::string const &, std::vector<std::string>);
    /**
     * @symbol ?buildSelector\@CommandRegistry\@\@QEBA_NAEBUActorSelectorArgs\@\@PEAVCommandSelectorBase\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool buildSelector(struct ActorSelectorArgs const &, class CommandSelectorBase *, std::string &) const;
    /**
     * @symbol ?finalizeChainedSubcommandOverloadRules\@CommandRegistry\@\@QEAAXPEBD\@Z
     */
    MCAPI void finalizeChainedSubcommandOverloadRules(char const *);
    /**
     * @symbol ?fireCommandParseTableTelemetry\@CommandRegistry\@\@QEBAXAEBVIMinecraftEventing\@\@_N\@Z
     */
    MCAPI void fireCommandParseTableTelemetry(class IMinecraftEventing const &, bool) const;
    /**
     * @symbol ?generateDocumentationMetadata\@CommandRegistry\@\@QEBA?AVValue\@Json\@\@_N\@Z
     */
    MCAPI class Json::Value generateDocumentationMetadata(bool) const;
    /**
     * @symbol ?getAliases\@CommandRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::string> getAliases(std::string const &) const;
    /**
     * @symbol ?getAlphabeticalLookup\@CommandRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const &) const;
    /**
     * @symbol ?getCommandName\@CommandRegistry\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string getCommandName(std::string const &) const;
    /**
     * @symbol ?getCommandOverloadSyntaxInformation\@CommandRegistry\@\@QEBA?AUCommandSyntaxInformation\@\@AEBVCommandOrigin\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandSyntaxInformation getCommandOverloadSyntaxInformation(class CommandOrigin const &, std::string const &) const;
    /**
     * @symbol ?getCommandStatus\@CommandRegistry\@\@QEBA?AW4CommandStatus\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class CommandStatus getCommandStatus(std::string const &) const;
    /**
     * @symbol ?isCommandOfType\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CommandTypeFlag\@\@\@Z
     */
    MCAPI bool isCommandOfType(std::string const &, enum class CommandTypeFlag) const;
    /**
     * @symbol ?isValidCommand\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isValidCommand(std::string const &) const;
    /**
     * @symbol ?registerAlias\@CommandRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void registerAlias(std::string, std::string);
    /**
     * @symbol ?registerCommand\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBDW4CommandPermissionLevel\@\@UCommandFlag\@\@3\@Z
     */
    MCAPI void registerCommand(std::string const &, char const *, enum class CommandPermissionLevel, struct CommandFlag, struct CommandFlag);
    /**
     * @symbol ?removeSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void removeSoftEnumValues(std::string const &, std::vector<std::string>);
    /**
     * @symbol ?requiresCheatsEnabled\@CommandRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool requiresCheatsEnabled(std::string const &) const;
    /**
     * @symbol ?serializeAvailableCommands\@CommandRegistry\@\@QEBA?AVAvailableCommandsPacket\@\@XZ
     */
    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;
    /**
     * @symbol ?setCommandRegistrationOverride\@CommandRegistry\@\@QEAAXV?$function\@$$A6AXAEAUCommandFlag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setCommandRegistrationOverride(class std::function<void (struct CommandFlag &, std::string const &)>);
    /**
     * @symbol ?setNetworkUpdateCallback\@CommandRegistry\@\@QEAAXV?$function\@$$A6AXAEBVPacket\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setNetworkUpdateCallback(class std::function<void (class Packet const &)>);
    /**
     * @symbol ?setScoreCallback\@CommandRegistry\@\@QEAAXV?$function\@$$A6AHAEA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setScoreCallback(class std::function<int (bool &, std::string const &, class Actor const &)>);
    /**
     * @symbol ?setSoftEnumValues\@CommandRegistry\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void setSoftEnumValues(std::string const &, std::vector<std::string>);
    /**
     * @symbol ??1CommandRegistry\@\@QEAA\@XZ
     */
    MCAPI ~CommandRegistry();
    /**
     * @symbol ?COMMAND_NAME_ENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * COMMAND_NAME_ENUM_NAME;
    /**
     * @symbol ?FUNCTION_NAME_SOFTENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * FUNCTION_NAME_SOFTENUM_NAME;
    /**
     * @symbol ?HASITEM_PARAM_DATA\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_DATA;
    /**
     * @symbol ?HASITEM_PARAM_ITEM\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_ITEM;
    /**
     * @symbol ?HASITEM_PARAM_LOCATION\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_LOCATION;
    /**
     * @symbol ?HASITEM_PARAM_QUANTITY\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_QUANTITY;
    /**
     * @symbol ?HASITEM_PARAM_SLOT\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASITEM_PARAM_SLOT;
    /**
     * @symbol ?HASPERMISSIONCATEGORY_ENUM_CAMERA\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASPERMISSIONCATEGORY_ENUM_CAMERA;
    /**
     * @symbol ?HASPERMISSIONCATEGORY_ENUM_MOVEMENT\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASPERMISSIONCATEGORY_ENUM_MOVEMENT;
    /**
     * @symbol ?HASPERMISSIONSTATE_ENUM_DISABLED\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASPERMISSIONSTATE_ENUM_DISABLED;
    /**
     * @symbol ?HASPERMISSIONSTATE_ENUM_ENABLED\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * HASPERMISSIONSTATE_ENUM_ENABLED;
    /**
     * @symbol ?TAG_VALUES_SOFTENUM_NAME\@CommandRegistry\@\@2PEBDEB
     */
    MCAPI static char const * TAG_VALUES_SOFTENUM_NAME;

//private:
    /**
     * @symbol ?_addChainedSubcommandValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@ZPEAUSignature\@1\@\@Z
     */
    MCAPI class CommandRegistry::Symbol _addChainedSubcommandValuesInternal(std::string const &, std::vector<struct std::pair<std::string, unsigned int>> const &, class Bedrock::typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const, struct CommandRegistry::Signature *);
    /**
     * @symbol ?_addChainedSubcommandValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@_KI\@std\@\@V?$allocator\@U?$pair\@_KI\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@ZPEAUSignature\@1\@\@Z
     */
    MCAPI class CommandRegistry::Symbol _addChainedSubcommandValuesInternal(std::string const &, std::vector<struct std::pair<unsigned __int64, unsigned int>> const &, class Bedrock::typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const, struct CommandRegistry::Signature *);
    /**
     * @symbol ?_addEnumValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@_K_K\@std\@\@V?$allocator\@U?$pair\@_K_K\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z\@Z
     */
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(std::string const &, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const &, class Bedrock::typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const);
    /**
     * @symbol ?_addEnumValuesInternal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@std\@\@\@2\@\@4\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P81\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV34\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z\@Z
     */
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(std::string const &, std::vector<struct std::pair<std::string, unsigned __int64>> const &, class Bedrock::typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const);
    /**
     * @symbol ?_addFunctionSoftEnum\@CommandRegistry\@\@AEAA?AVSymbol\@1\@XZ
     */
    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum();
    /**
     * @symbol ?_getConstrainedParamEnumSymbol\@CommandRegistry\@\@AEBA?AVSymbol\@1\@V21\@\@Z
     */
    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol) const;
    /**
     * @symbol ?_isCommandElementValid\@CommandRegistry\@\@AEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _isCommandElementValid(std::string const &) const;
    /**
     * @symbol ?_matchesEnumConstraintsSet\@CommandRegistry\@\@AEBA_NAEBVSymbol\@1\@AEBVCommandOrigin\@\@0W4SemanticConstraint\@\@\@Z
     */
    MCAPI bool _matchesEnumConstraintsSet(class CommandRegistry::Symbol const &, class CommandOrigin const &, class CommandRegistry::Symbol const &, enum class SemanticConstraint) const;
    /**
     * @symbol ?addChainedSubcommandValuesToExisting\@CommandRegistry\@\@AEAAXIAEBV?$vector\@U?$pair\@_KI\@std\@\@V?$allocator\@U?$pair\@_KI\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void addChainedSubcommandValuesToExisting(unsigned int, std::vector<struct std::pair<unsigned __int64, unsigned int>> const &);
    /**
     * @symbol ?addEnumValuesToExisting\@CommandRegistry\@\@AEAAXIAEBV?$vector\@U?$pair\@_K_K\@std\@\@V?$allocator\@U?$pair\@_K_K\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void addEnumValuesToExisting(unsigned int, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const &);
    /**
     * @symbol ?addPostfix\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol addPostfix(std::string const &);
    /**
     * @symbol ?addRule\@CommandRegistry\@\@AEAAXVSymbol\@1\@V?$vector\@VSymbol\@CommandRegistry\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@std\@\@\@std\@\@V?$function\@$$A6APEAUParseToken\@CommandRegistry\@\@AEAU12\@VSymbol\@2\@\@Z\@4\@VCommandVersion\@\@\@Z
     */
    MCAPI void addRule(class CommandRegistry::Symbol, std::vector<class CommandRegistry::Symbol>, class std::function<struct CommandRegistry::ParseToken * (struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol)>, class CommandVersion);
    /**
     * @symbol ?addSemanticConstraint\@CommandRegistry\@\@AEAAXW4SemanticConstraint\@\@\@Z
     */
    MCAPI void addSemanticConstraint(enum class SemanticConstraint);
    /**
     * @symbol ?addSoftTerminal\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const &);
    /**
     * @symbol ?buildFirstSet\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@VSymbol\@1\@I\@Z
     */
    MCAPI void buildFirstSet(struct CommandRegistry::ParseTable &, class CommandRegistry::Symbol, unsigned int) const;
    /**
     * @symbol ?buildFollowSet\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@VSymbol\@1\@IAEAV?$set\@VSymbol\@CommandRegistry\@\@U?$less\@VSymbol\@CommandRegistry\@\@\@std\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@4\@\@std\@\@\@Z
     */
    MCAPI void buildFollowSet(struct CommandRegistry::ParseTable &, class CommandRegistry::Symbol, unsigned int, class std::set<class CommandRegistry::Symbol, struct std::less<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol>> &) const;
    /**
     * @symbol ?buildOptionalRuleChain\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBUSignature\@1\@AEBV?$vector\@VCommandParameterData\@\@V?$allocator\@VCommandParameterData\@\@\@std\@\@\@std\@\@AEBV?$vector\@VSymbol\@CommandRegistry\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(struct CommandRegistry::Signature const &, std::vector<class CommandParameterData> const &, std::vector<class CommandRegistry::Symbol> const &);
    /**
     * @symbol ?buildOptionalRuleChain\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEBUSignature\@1\@AEBV?$vector\@VCommandParameterData\@\@V?$allocator\@VCommandParameterData\@\@\@std\@\@\@std\@\@PEBVCommandParameterData\@\@_K\@Z
     */
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(struct CommandRegistry::Signature const &, std::vector<class CommandParameterData> const &, class CommandParameterData const *, unsigned __int64);
    /**
     * @symbol ?buildParseTable\@CommandRegistry\@\@AEBAXI\@Z
     */
    MCAPI void buildParseTable(unsigned int) const;
    /**
     * @symbol ?buildPredictTable\@CommandRegistry\@\@AEBAXAEAUParseTable\@1\@I\@Z
     */
    MCAPI void buildPredictTable(struct CommandRegistry::ParseTable &, unsigned int) const;
    /**
     * @symbol ?buildRules\@CommandRegistry\@\@AEAA?AVSymbol\@1\@AEAUSignature\@1\@AEBV?$vector\@V?$not_null\@PEAUOverload\@CommandRegistry\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAUOverload\@CommandRegistry\@\@\@gsl\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI class CommandRegistry::Symbol buildRules(struct CommandRegistry::Signature &, std::vector<class gsl::not_null<struct CommandRegistry::Overload *>> const &, unsigned __int64);
    /**
     * @symbol ?checkOriginCommandFlags\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@UCommandFlag\@\@W4CommandPermissionLevel\@\@\@Z
     */
    MCAPI bool checkOriginCommandFlags(class CommandOrigin const &, struct CommandFlag, enum class CommandPermissionLevel) const;
    /**
     * @symbol ?createCommand\@CommandRegistry\@\@AEBA?AV?$unique_ptr\@VCommand\@\@U?$default_delete\@VCommand\@\@\@std\@\@\@std\@\@AEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class Command> createCommand(struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const;
    /**
     * @symbol ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSymbol\@1\@\@Z
     */
    MCAPI std::string describe(class CommandRegistry::Symbol) const;
    /**
     * @symbol ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCommandParameterData\@\@\@Z
     */
    MCAPI std::string describe(class CommandParameterData const &) const;
    /**
     * @symbol ?describe\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUSignature\@1\@AEBV23\@AEBUOverload\@1\@IPEAI3\@Z
     */
    MCAPI std::string describe(struct CommandRegistry::Signature const &, std::string const &, struct CommandRegistry::Overload const &, unsigned int, unsigned int *, unsigned int *) const;
    /**
     * @symbol ?findCommand\@CommandRegistry\@\@AEAAPEAUSignature\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandRegistry::Signature * findCommand(std::string const &);
    /**
     * @symbol ?findCommand\@CommandRegistry\@\@AEBAPEBUSignature\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct CommandRegistry::Signature const * findCommand(std::string const &) const;
    /**
     * @symbol ?findEnumValue\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const &) const;
    /**
     * @symbol ?findIdentifierInfo\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const &) const;
    /**
     * @symbol ?findPostfix\@CommandRegistry\@\@AEBA?AVSymbol\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class CommandRegistry::Symbol findPostfix(std::string const &) const;
    /**
     * @symbol ?forEachNonTerminal\@CommandRegistry\@\@AEBAXV?$function\@$$A6AXVSymbol\@CommandRegistry\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachNonTerminal(class std::function<void (class CommandRegistry::Symbol)>) const;
    /**
     * @symbol ?getEnumData\@CommandRegistry\@\@AEBA_KAEBUParseToken\@1\@\@Z
     */
    MCAPI unsigned __int64 getEnumData(struct CommandRegistry::ParseToken const &) const;
    /**
     * @symbol ?getInvertableFilter\@CommandRegistry\@\@AEBA?AU?$InvertableFilter\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@AEBUParseToken\@1\@\@Z
     */
    MCAPI struct InvertableFilter<std::string> getInvertableFilter(struct CommandRegistry::ParseToken const &) const;
    /**
     * @symbol ?isValid\@CommandRegistry\@\@AEBA_NVSymbol\@1\@\@Z
     */
    MCAPI bool isValid(class CommandRegistry::Symbol) const;
    /**
     * @symbol ?originCanRun\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@AEBUOverload\@1\@\@Z
     */
    MCAPI bool originCanRun(class CommandOrigin const &, struct CommandRegistry::Overload const &) const;
    /**
     * @symbol ?originCanRun\@CommandRegistry\@\@AEBA_NAEBVCommandOrigin\@\@AEBUSignature\@1\@\@Z
     */
    MCAPI bool originCanRun(class CommandOrigin const &, struct CommandRegistry::Signature const &) const;
    /**
     * @symbol ?parseSelector\@CommandRegistry\@\@AEBA_NPEAVCommandSelectorBase\@\@AEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@_N\@Z
     */
    MCAPI bool parseSelector(class CommandSelectorBase *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &, bool) const;
    /**
     * @symbol ?parseSelector\@CommandRegistry\@\@AEBA_NAEAUActorSelectorArgs\@\@AEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@\@Z
     */
    MCAPI bool parseSelector(struct ActorSelectorArgs &, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const;
    /**
     * @symbol ?registerOverloadInternal\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@AEAUOverload\@1\@\@Z
     */
    MCAPI void registerOverloadInternal(struct CommandRegistry::Signature &, struct CommandRegistry::Overload &);
    /**
     * @symbol ?setupChainedSubcommandOverloadRules\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@\@Z
     */
    MCAPI void setupChainedSubcommandOverloadRules(struct CommandRegistry::Signature &);
    /**
     * @symbol ?setupOverloadRules\@CommandRegistry\@\@AEAAXAEAUSignature\@1\@\@Z
     */
    MCAPI void setupOverloadRules(struct CommandRegistry::Signature &);
    /**
     * @symbol ?symbolToString\@CommandRegistry\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSymbol\@1\@\@Z
     */
    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const;
    /**
     * @symbol ?_removeStringQuotes\@CommandRegistry\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string _removeStringQuotes(std::string const &);
    /**
     * @symbol ?addNonEpsilonSymbols\@CommandRegistry\@\@CAXAEAV?$dense_set\@VSymbol\@CommandRegistry\@\@USymbolHasher\@2\@U?$equal_to\@VSymbol\@CommandRegistry\@\@\@std\@\@V?$allocator\@VSymbol\@CommandRegistry\@\@\@5\@\@entt\@\@AEBV23\@\@Z
     */
    MCAPI static void addNonEpsilonSymbols(class entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher, struct std::equal_to<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol>> &, class entt::dense_set<class CommandRegistry::Symbol, struct CommandRegistry::SymbolHasher, struct std::equal_to<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol>> const &);
    /**
     * @symbol ?buildOverload\@CommandRegistry\@\@CAXAEAUOverload\@1\@\@Z
     */
    MCAPI static void buildOverload(struct CommandRegistry::Overload &);
    /**
     * @symbol ?collapse\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * collapse(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol);
    /**
     * @symbol ?collapseOn\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * collapseOn(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @symbol ?expand\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * expand(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol);
    /**
     * @symbol ?expandExcept\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * expandExcept(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @symbol ?fold\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@1\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * fold(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    /**
     * @symbol ?kill\@CommandRegistry\@\@CAPEAUParseToken\@1\@AEAU21\@VSymbol\@1\@\@Z
     */
    MCAPI static struct CommandRegistry::ParseToken * kill(struct CommandRegistry::ParseToken &, class CommandRegistry::Symbol);
    /**
     * @symbol ?readFloat\@CommandRegistry\@\@CA_NAEAMAEBUParseToken\@1\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool readFloat(float &, struct CommandRegistry::ParseToken const &, std::string &, std::vector<std::string> &);
    /**
     * @symbol ?readInt\@CommandRegistry\@\@CA_NAEAHAEBUParseToken\@1\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool readInt(int &, struct CommandRegistry::ParseToken const &, std::string &, std::vector<std::string> &);
    /**
     * @symbol ?readRelativeCoordinate\@CommandRegistry\@\@CA_NAEA_NAEAMAEBUParseToken\@1\@_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static bool readRelativeCoordinate(bool &, float &, struct CommandRegistry::ParseToken const &, bool, std::string &, std::vector<std::string> &);

private:
    /**
     * @symbol ?ParseRuleSymbols\@CommandRegistry\@\@0QBU?$pair\@P8CommandRegistry\@\@EBA_NPEAXAEBUParseToken\@1\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@ZVSymbol\@1\@\@std\@\@B
     */
    MCAPI static struct std::pair<bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const, class CommandRegistry::Symbol> const ParseRuleSymbols[];

};
