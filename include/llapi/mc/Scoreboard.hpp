/**
 * @file  Scoreboard.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Player;
class Objective;
struct PlayerScore;

struct ScoreInfo {
    Objective* mObjective;
    bool mValid;
    int mValue;
	
    Objective* getObjective() {
        return mObjective;
    }
    int getCount() {
        return mValue;
    }
};
#undef BEFORE_EXTRA

/**
 * @brief MC class Scoreboard.
 *
 */
class Scoreboard {

#define AFTER_EXTRA
// Add new members to class
#define ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
public:

    /**
     * @brief Create a new objective.
     * 
     * @param objname The objective name
     * @param displayName The display name of the objective
     * @return The objective
     */
    LIAPI static Objective* newObjective(const std::string& objname, const std::string& displayName);

    //LIAPI static bool setDisplayObjective(const std::string& objname, const std::string& slot, int sort);
    //LIAPI static Objective* clearDisplayObjective(const std::string& slot);
    //LIAPI static Objective* getDisplayObjective(const std::string& slot);
    LIAPI static bool removeFromObjective(const std::string& objname, const std::string& id);

    /**
     * @brief Remove the score of a player from an objective.
     * 
     * @param objname The objective name
     * @param player The player
     * @return True if removed; otherwise false.
     */
    LIAPI static bool removeFromObjective(const std::string& objname, Player* player);

    LIAPI static struct ScoreboardId& getOrCreateScoreboardId(std::string const& id);
    LIAPI static int getScore(const std::string& objname, const std::string& id);
    LIAPI static bool getScore(const std::string& objname, const std::string& id, int& score);
    LIAPI static std::optional<int> setScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> addScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> reduceScore(const std::string& objname, const std::string& id, int score);

    /**
     * @brief Get the score of a player of an objective.
     *
     * @param objname The objective name
     * @param player The player
     * @return The score
     * @exception std::invalid_argument The objective is not found.
     * @exception std::runtime_error Failed to get the score.
     */
    LIAPI static int getScore(const std::string& objname, Player* player);

    LIAPI static int getScore(Player* player, const std::string& objname);
    LIAPI static bool getScore(const std::string& objname, Player* player, int& score);

    /**
     * @brief Set the score of a player of an objective.
     *
     * @param objname The objective name
     * @param player The player
     * @param value The score
     * @return True if set; otherwise false.
     */
    LIAPI static bool setScore(const std::string& objname, Player* player, int value);

    LIAPI static bool setScore(Player* player, const std::string& objname, int value);

    /**
     * @brief Add the score of a player of an objective.
     *
     * @param objname The objective name
     * @param player The player
     * @param value The added score
     * @return True if added; otherwise false.
     */
    LIAPI static bool addScore(const std::string& objname, Player* player, int value);

    LIAPI static bool addScore(Player* player, const std::string& objname, int value);

    /**
     * @brief Reduce the score of a player of an objective.
     *
     * @param objname The objective name
     * @param player The player
     * @param value The reduced score
     * @return True if reduced; otherwise false.
     */
    LIAPI static bool reduceScore(const std::string& objname, Player* player, int value);

    LIAPI static bool reduceScore(Player* player, const std::string& objname, int value);

    LIAPI static bool deleteScore(const std::string& objname, Player* player);
    LIAPI static bool deleteScore(Player* player, const std::string& objname);

    LIAPI static bool scoreboardIdIsValid(ScoreboardId* id);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARD
public:
    class Scoreboard& operator=(class Scoreboard const &) = delete;
    Scoreboard(class Scoreboard const &) = delete;
    Scoreboard() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -253976738
     */
    virtual ~Scoreboard();
    /**
     * @vftbl  1
     * @symbol ?setDisplayObjective@Scoreboard@@UEAAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjective@@W4ObjectiveSortOrder@@@Z
     * @hash   362827473
     */
    virtual class DisplayObjective const * setDisplayObjective(std::string const &, class Objective const &, enum class ObjectiveSortOrder);
    /**
     * @vftbl  2
     * @symbol ?clearDisplayObjective@Scoreboard@@UEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -47395632
     */
    virtual class Objective * clearDisplayObjective(std::string const &);
    /**
     * @vftbl  3
     * @hash   656420291
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   657343812
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   658267333
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?onObjectiveAdded@Scoreboard@@UEAAXAEBVObjective@@@Z
     * @hash   -1345349785
     */
    virtual void onObjectiveAdded(class Objective const &);
    /**
     * @vftbl  7
     * @symbol ?onObjectiveRemoved@Scoreboard@@UEAAXAEAVObjective@@@Z
     * @hash   -2032936582
     */
    virtual void onObjectiveRemoved(class Objective &);
    /**
     * @vftbl  8
     * @symbol ?onScoreChanged@Scoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
     * @hash   1195186645
     */
    virtual void onScoreChanged(struct ScoreboardId const &, class Objective const &);
    /**
     * @vftbl  9
     * @hash   -1309203447
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -293103069
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -292179548
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   1683568325
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -290332506
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @hash   1685415367
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol ?isClientSide@Scoreboard@@MEBA_NXZ
     * @hash   1676524665
     */
    virtual bool isClientSide() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
    /**
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVActor@@@Z
     * @hash   -1110681487
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(class Actor const &);
    /**
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2131298743
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(std::string const &);
    /**
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z
     * @hash   627951997
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(class Player const &);
    /**
     * @symbol ?onPlayerIdentityUpdated@Scoreboard@@UEAAXAEBUPlayerScoreboardId@@@Z
     * @hash   988076590
     */
    MCVAPI void onPlayerIdentityUpdated(struct PlayerScoreboardId const &);
    /**
     * @symbol ?onPlayerJoined@Scoreboard@@UEAAXAEBVPlayer@@@Z
     * @hash   858317972
     */
    MCVAPI void onPlayerJoined(class Player const &);
    /**
     * @symbol ?onPlayerScoreRemoved@Scoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
     * @hash   1926735442
     */
    MCVAPI void onPlayerScoreRemoved(struct ScoreboardId const &, class Objective const &);
    /**
     * @symbol ?setPacketSender@Scoreboard@@UEAAXPEAVPacketSender@@@Z
     * @hash   -969029215
     */
    MCVAPI void setPacketSender(class PacketSender *);
    /**
     * @symbol ?tick@Scoreboard@@UEAAXXZ
     * @hash   1011879664
     */
    MCVAPI void tick();
    /**
     * @symbol ?writeToLevelStorage@Scoreboard@@UEAAXXZ
     * @hash   1209602116
     */
    MCVAPI void writeToLevelStorage();
#endif
    /**
     * @symbol ??0Scoreboard@@QEAA@VCommandSoftEnumRegistry@@@Z
     * @hash   1118255703
     */
    MCAPI Scoreboard(class CommandSoftEnumRegistry);
    /**
     * @symbol ?addObjective@Scoreboard@@QEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVObjectiveCriteria@@@Z
     * @hash   -1294256045
     */
    MCAPI class Objective * addObjective(std::string const &, std::string const &, class ObjectiveCriteria const &);
    /**
     * @symbol ?addScoreListener@Scoreboard@@QEAAXAEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1457985919
     */
    MCAPI void addScoreListener(class Player &, std::string const &);
    /**
     * @symbol ?applyPlayerOperation@Scoreboard@@QEAAHAEA_NAEAV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@AEBUScoreboardId@@AEAVObjective@@13W4CommandOperator@@@Z
     * @hash   1849668607
     */
    MCAPI int applyPlayerOperation(bool &, std::vector<struct ScoreboardId> &, struct ScoreboardId const &, class Objective &, std::vector<struct ScoreboardId> &, class Objective &, enum class CommandOperator);
    /**
     * @symbol ?clearScoreboardIdentity@Scoreboard@@QEAA_NAEBUScoreboardId@@@Z
     * @hash   -1963513967
     */
    MCAPI bool clearScoreboardIdentity(struct ScoreboardId const &);
    /**
     * @symbol ?forEachIdentityRef@Scoreboard@@QEAAXV?$function@$$A6AXAEAVScoreboardIdentityRef@@@Z@std@@@Z
     * @hash   -2052351425
     */
    MCAPI void forEachIdentityRef(class std::function<void (class ScoreboardIdentityRef &)>);
    /**
     * @symbol ?forEachObjective@Scoreboard@@QEAAXV?$function@$$A6AXAEAVObjective@@@Z@std@@@Z
     * @hash   610093215
     */
    MCAPI void forEachObjective(class std::function<void (class Objective &)>);
    /**
     * @symbol ?getCriteria@Scoreboard@@QEBAPEAVObjectiveCriteria@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   973611982
     */
    MCAPI class ObjectiveCriteria * getCriteria(std::string const &) const;
    /**
     * @symbol ?getCriteriaNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   692244419
     */
    MCAPI std::vector<std::string> getCriteriaNames() const;
    /**
     * @symbol ?getDisplayInfoFiltered@Scoreboard@@QEBA?AV?$vector@UPlayerScore@@V?$allocator@UPlayerScore@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1400170359
     */
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const &) const;
    /**
     * @symbol ?getDisplayObjective@Scoreboard@@QEBAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -631117756
     */
    MCAPI class DisplayObjective const * getDisplayObjective(std::string const &) const;
    /**
     * @symbol ?getDisplayObjectiveSlotNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   -781765833
     */
    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;
    /**
     * @symbol ?getIdScores@Scoreboard@@QEBA?AV?$vector@UScoreInfo@@V?$allocator@UScoreInfo@@@std@@@std@@AEBUScoreboardId@@@Z
     * @hash   -1162822871
     */
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const &) const;
    /**
     * @symbol ?getObjective@Scoreboard@@QEBAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -591993042
     */
    MCAPI class Objective * getObjective(std::string const &) const;
    /**
     * @symbol ?getObjectiveNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   -1854829943
     */
    MCAPI std::vector<std::string> getObjectiveNames() const;
    /**
     * @symbol ?getObjectives@Scoreboard@@QEBA?AV?$vector@PEBVObjective@@V?$allocator@PEBVObjective@@@std@@@std@@XZ
     * @hash   -1180883326
     */
    MCAPI std::vector<class Objective const *> getObjectives() const;
    /**
     * @symbol ?getScoreboardEventCoordinator@Scoreboard@@QEAAAEAVScoreboardEventCoordinator@@XZ
     * @hash   461614290
     */
    MCAPI class ScoreboardEventCoordinator & getScoreboardEventCoordinator();
    /**
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     * @hash   569964853
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    /**
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1100647423
     */
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    /**
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVActor@@@Z
     * @hash   741913419
     */
    MCAPI struct ScoreboardId const & getScoreboardId(class Actor const &) const;
    /**
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVPlayer@@@Z
     * @hash   1576172405
     */
    MCAPI struct ScoreboardId const & getScoreboardId(class Player const &) const;
    /**
     * @symbol ?getScoreboardIdentityRef@Scoreboard@@QEAAPEAVScoreboardIdentityRef@@AEBUScoreboardId@@@Z
     * @hash   -1117781776
     */
    MCAPI class ScoreboardIdentityRef * getScoreboardIdentityRef(struct ScoreboardId const &);
    /**
     * @symbol ?getScoreboardIdentityRefs@Scoreboard@@QEBA?AV?$vector@VScoreboardIdentityRef@@V?$allocator@VScoreboardIdentityRef@@@std@@@std@@XZ
     * @hash   413021180
     */
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;
    /**
     * @symbol ?getTrackedIds@Scoreboard@@QEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@XZ
     * @hash   1186473746
     */
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;
    /**
     * @symbol ?isObjectiveDisplayed@Scoreboard@@QEBA_NAEBVObjective@@@Z
     * @hash   1046780535
     */
    MCAPI bool isObjectiveDisplayed(class Objective const &) const;
    /**
     * @symbol ?modifyPlayerScore@Scoreboard@@QEAAHAEA_NAEBUScoreboardId@@AEAVObjective@@HW4PlayerScoreSetFunction@@@Z
     * @hash   -1722200106
     */
    MCAPI int modifyPlayerScore(bool &, struct ScoreboardId const &, class Objective &, int, enum class PlayerScoreSetFunction);
    /**
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBUActorUniqueID@@@Z
     * @hash   1615327620
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     * @hash   -1103087812
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1456179984
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, std::string const &);
    /**
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBVCompoundTag@@@Z
     * @hash   202785669
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(class CompoundTag const &);
    /**
     * @symbol ?removeObjective@Scoreboard@@QEAA_NPEAVObjective@@@Z
     * @hash   1834094610
     */
    MCAPI bool removeObjective(class Objective *);
    /**
     * @symbol ?removeScoreListener@Scoreboard@@QEAAXAEBVPlayer@@@Z
     * @hash   -2077579366
     */
    MCAPI void removeScoreListener(class Player const &);
    /**
     * @symbol ?removeScoreListener@Scoreboard@@QEAAXAEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   127888815
     */
    MCAPI void removeScoreListener(class Player const &, std::string const &);
    /**
     * @symbol ?replaceFakePlayer@Scoreboard@@QEAAXAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     * @hash   -1221870323
     */
    MCAPI void replaceFakePlayer(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol ?resetPlayerScore@Scoreboard@@QEAAXAEBUScoreboardId@@@Z
     * @hash   1305467918
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const &);
    /**
     * @symbol ?resetPlayerScore@Scoreboard@@QEAAXAEBUScoreboardId@@AEAVObjective@@@Z
     * @hash   1732550017
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const &, class Objective &);
    /**
     * @symbol ?DEFAULT_CRITERIA@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1803394507
     */
    MCAPI static std::string const DEFAULT_CRITERIA;
    /**
     * @symbol ?DISPLAY_SLOT_BELOWNAME@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1729100619
     */
    MCAPI static std::string const DISPLAY_SLOT_BELOWNAME;
    /**
     * @symbol ?DISPLAY_SLOT_LIST@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1865129791
     */
    MCAPI static std::string const DISPLAY_SLOT_LIST;
    /**
     * @symbol ?DISPLAY_SLOT_SIDEBAR@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1952538837
     */
    MCAPI static std::string const DISPLAY_SLOT_SIDEBAR;
    /**
     * @symbol ?OBJECTIVES_ENUM@Scoreboard@@2PEBDEB
     * @hash   -117922792
     */
    MCAPI static char const * OBJECTIVES_ENUM;
    /**
     * @symbol ?shouldClearScoresOnDeath@Scoreboard@@SA_NAEBVActor@@@Z
     * @hash   1179170315
     */
    MCAPI static bool shouldClearScoresOnDeath(class Actor const &);

//protected:
    /**
     * @symbol ?_addLoadedCriteria@Scoreboard@@IEAAXV?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@std@@@Z
     * @hash   -1036881010
     */
    MCAPI void _addLoadedCriteria(std::unique_ptr<class ObjectiveCriteria>);
    /**
     * @symbol ?_addLoadedObjective@Scoreboard@@IEAAXV?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@std@@@Z
     * @hash   -1448074416
     */
    MCAPI void _addLoadedObjective(std::unique_ptr<class Objective>);
    /**
     * @symbol ?_getCriteriaMap@Scoreboard@@IEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@2@@std@@@2@@std@@XZ
     * @hash   -2123351816
     */
    MCAPI class std::unordered_map<std::string, std::unique_ptr<class ObjectiveCriteria>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ObjectiveCriteria>>>> const & _getCriteriaMap() const;
    /**
     * @symbol ?_getObjectiveMap@Scoreboard@@IEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@2@@std@@@2@@std@@XZ
     * @hash   646614588
     */
    MCAPI class std::unordered_map<std::string, std::unique_ptr<class Objective>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class Objective>>>> const & _getObjectiveMap() const;

//private:
    /**
     * @symbol ?_init@Scoreboard@@AEAAXXZ
     * @hash   -1866953641
     */
    MCAPI void _init();

protected:

private:

};