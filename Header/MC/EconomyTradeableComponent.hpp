// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EconomyTradeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECONOMYTRADEABLECOMPONENT
public:
    class EconomyTradeableComponent& operator=(class EconomyTradeableComponent const &) = delete;
    EconomyTradeableComponent(class EconomyTradeableComponent const &) = delete;
    EconomyTradeableComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ECONOMYTRADEABLECOMPONENT
public:
#endif
    MCAPI EconomyTradeableComponent(class Actor &);
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    MCAPI class UpdateTradePacket createDataPacket(enum ContainerID);
    MCAPI void fixVillagerTierToMatchTradeList(class MerchantRecipeList *);
    MCAPI struct IntRange getCurrentCuredDiscount() const;
    MCAPI int getCurrentNearbyCuredDiscount() const;
    MCAPI unsigned int getCurrentTradeExp() const;
    MCAPI std::string const & getDisplayName() const;
    MCAPI bool getInteraction(class Player &, class ActorInteraction &);
    MCAPI class MerchantRecipeList * getOffers();
    MCAPI int getRiches() const;
    MCAPI unsigned int getTradeTier() const;
    MCAPI bool hasSupplyRemaining() const;
    MCAPI void initFromDefinition();
    MCAPI std::string const & loadDisplayName();
    MCAPI void loadOffersFromTag(class CompoundTag const *);
    MCAPI void matchExpAndTier();
    MCAPI void newServerAiStep();
    MCAPI void notifyTrade(int);
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    MCAPI void reloadComponent();
    MCAPI void resupplyTrades();
    MCAPI void setCurrentTradeExp(int);
    MCAPI void setNearbyCuredDiscount(int);
    MCAPI void setOffers(class MerchantRecipeList &);
    MCAPI void setRiches(int);
    MCAPI bool shouldConvertTrades() const;
    MCAPI bool shouldPersistTrades() const;
    MCAPI bool showTradeScreen();
    MCAPI void tickDiscountDegradationTimer(struct Tick);
    MCAPI void tryIncrementCuredDiscount();
    MCAPI void tryIncrementNearbyCuredDiscount();
    MCAPI void tryToTransferOldOffers(class MerchantRecipeList *);
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

//private:
    MCAPI bool _generateTrades();
    MCAPI struct TradeTable * _getTradeTable();
    MCAPI unsigned int _getTradeTierFromCurrentExp() const;
    MCAPI void _rearrangeTradeList(std::vector<struct Trade> &, unsigned __int64);
    MCAPI void _setMaxTradeTier(int);
    MCAPI void _setTradeTier(int);

private:


};