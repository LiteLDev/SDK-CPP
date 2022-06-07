// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FoodItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOODITEMCOMPONENT
public:
    FoodItemComponent(class FoodItemComponent const &) = delete;
    FoodItemComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOODITEMCOMPONENT
public:
    MCVAPI std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    MCVAPI bool canAlwaysEat() const;
    MCVAPI class Item const * eatItem(class ItemStack &, class Actor &, class Level &);
    MCVAPI int getNutrition() const;
    MCVAPI float getSaturationModifier() const;
    MCVAPI void initializeFromNetwork(class CompoundTag const &);
    MCVAPI bool isNetworkComponent() const;
    MCVAPI bool use(class ItemStack &, class Player &);
    MCVAPI class Item const * useTimeDepleted(class ItemStack &, class Player &, class Level &);
#endif
    MCAPI FoodItemComponent(class ComponentItem *);
    MCAPI class ItemDescriptor getUsingConvertsToItemDescriptor() const;
    MCAPI class FoodItemComponent & operator=(class FoodItemComponent const &);
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();


};