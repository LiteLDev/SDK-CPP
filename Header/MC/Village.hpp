// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Village {

#define AFTER_EXTRA
// Add Member There
public:
struct DwellerData {
    DwellerData() = delete;
    DwellerData(DwellerData const&) = delete;
    DwellerData(DwellerData const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGE
public:
    class Village& operator=(class Village const&) = delete;
    Village(class Village const&) = delete;
    Village() = delete;
#endif

public:
    MCAPI Village(class Dimension&, class mce::UUID, class BlockPos const&);
    MCAPI void addActorToVillage(enum DwellerRole, struct ActorUniqueID const&);
    MCAPI void addAggressor(class Mob const&);
    MCAPI bool addPOI(class std::weak_ptr<class POIInstance>);
    MCAPI void addVillager(struct ActorUniqueID const&);
    MCAPI bool checkNeedMoreVillagers() const;
    MCAPI void debugDraw();
    MCAPI class std::weak_ptr<class POIInstance> fetchOwnedPOI(struct ActorUniqueID const&, enum POIType);
    MCAPI void fireSoundTheAlarm();
    MCAPI float getApproximateRadius() const;
    MCAPI unsigned __int64 getBedPOICount() const;
    MCAPI class AABB const& getBounds() const;
    MCAPI class Vec3 getCenter() const;
    MCAPI class Actor* getClosestAggressor(class Actor*);
    MCAPI class Player* getClosestBadStandingPlayer(class Actor&);
    MCAPI class std::weak_ptr<class POIInstance> getClosestPOI(enum POIType, class BlockPos const&);
    MCAPI class Raid const* getRaid() const;
    MCAPI class AABB const& getRaidBounds() const;
    MCAPI class Raid* getRaidMutable();
    MCAPI int getStanding(struct ActorUniqueID const&);
    MCAPI class mce::UUID getUniqueID() const;
    MCAPI bool hasInvalidRole(struct ActorUniqueID const&, enum DwellerRole const&);
    MCAPI bool hasRaid() const;
    MCAPI bool hasSpecificDweller(enum DwellerRole, struct ActorUniqueID const&) const;
    MCAPI void loadDataByKey(std::string const&, class CompoundTag const&);
    MCAPI int modifyStanding(struct ActorUniqueID const&, int);
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<struct ActorUniqueID const, struct Village::DwellerData> > > > removeActorFromVillage(enum DwellerRole, struct ActorUniqueID const&);
    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const&);
    MCAPI void removeVillageSavedData();
    MCAPI void resetDwellerTimer(enum DwellerRole, struct ActorUniqueID const&);
    MCAPI void resetNoBreedTimer();
    MCAPI void rewardAllPlayers(int);
    MCAPI void setSavedDwellerPosition(enum DwellerRole, struct ActorUniqueID const&, class BlockPos);
    MCAPI void tick(struct Tick, class BlockSource&);
    MCAPI void triggerRaid();
    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const&);
    MCAPI void unlinkMismatchedJobsites(class Actor const&);
    MCAPI bool villagerLivesHere(struct ActorUniqueID const&) const;
    MCAPI bool withinVillageBounds(class Vec3 const&, float) const;
    MCAPI static bool DEBUG_DRAWING;
    MCAPI static float const DWELLER_REMOVAL_TOLERANCE;
    MCAPI static int const MAX_VILLAGE_STANDING;
    MCAPI static int const MIN_VILLAGE_STANDING;
    MCAPI static std::string const STORAGE_KEY_PREFIX;
    MCAPI static int const VILLAGE_START_XZ_BOUNDS;
    MCAPI static bool isVillagePOI(class VillageManager const&, class Block const&);

protected:

private:
    MCAPI void _addPoiToVillage(struct ActorUniqueID const&, class std::weak_ptr<class POIInstance>);
    MCAPI void _calcPOIDist();
    MCAPI void _claimUnclaimedPOIs();
    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const&);
    MCAPI void _createRaid();
    MCAPI bool _findAvailablePOI(unsigned __int64, class Level&, class Random&, struct ActorUniqueID);
    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3&, bool) const;
    MCAPI void _findPreferredPOI(std::vector<class std::weak_ptr<class POIInstance>>&, class HashedString const&, struct ActorUniqueID);
    MCAPI bool _findSpawnPointForRaid(class Vec3&, float, float, bool, bool) const;
    MCAPI class BlockSource* _findSpawnableRegion(class Vec3, int, bool&) const;
    MCAPI void _findWeightedPOI(std::vector<class std::weak_ptr<class POIInstance>>&, class Random&, struct ActorUniqueID);
    MCAPI void _helpLocateRaiders(class Raid const&);
    MCAPI void _loadVillageData(class CompoundTag const&);
    MCAPI void _loadVillageDwellers(class CompoundTag const&);
    MCAPI void _loadVillagePOIs(class CompoundTag const&);
    MCAPI void _playSoundFrom(class Vec3 const&, enum LevelSoundEvent);
    MCAPI void _readyRaidGroup(class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID> >&);
    MCAPI void _ringBells(class BlockSource&, class Random&) const;
    MCAPI void _saveVillageData() const;
    MCAPI void _saveVillageDwellers() const;
    MCAPI void _saveVillagePOIs() const;
    MCAPI void _saveVillagePlayerStanding() const;
    MCAPI void _saveVillageRaid() const;
    MCAPI void _spawnPassiveDwellers(class BlockSource&, int);
    MCAPI bool _spawnRaidGroup(class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID> >&) const;
    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick&, unsigned __int64, bool);
    MCAPI void _trySpawnDefenderDwellers(class BlockSource&, unsigned __int64);
    MCAPI void _updateClaimedPOIs(class BlockSource&);
    MCAPI void _updateDwellerTimers(unsigned __int64, float);
    MCAPI void _updateUnclaimedPOIs(class BlockSource&);
    MCAPI static float const ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE;
    MCAPI static std::string const CELEBRATION_EVENT;
    MCAPI static class Vec3 const RAID_BOUNDS_PADDING;
    MCAPI static std::string const RAID_EXPIRY_EVENT;
    MCAPI static int const RAID_FINISHED_DELAY_IN_TICKS;
    MCAPI static int const RAID_GROUP_COMPLETE_DELAY_IN_TICKS;
    MCAPI static int const RAID_LOCATION_HELP_DELAY_IN_TICKS;
    MCAPI static unsigned char const RAID_MAX_SPAWN_FAILURES;
    MCAPI static int const RAID_PREP_TIME_IN_TICKS;
    MCAPI static struct Tick const RAID_TIMEOUT_IN_TICKS;
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_BAD;
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_GOOD;
    MCAPI static std::string const STORAGE_KEY_DWELLERS;
    MCAPI static std::string const STORAGE_KEY_PLAYERS;
    MCAPI static std::string const STORAGE_KEY_POI;
    MCAPI static std::string const STORAGE_KEY_RAID;
    MCAPI static std::string const STORAGE_KEY_VILLAGE;
    MCAPI static int const UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS;
    MCAPI static __int64 const VILLAGER_EXPECTED_WORK_INTERVAL;
    MCAPI static int const VILLAGE_HERO_BESTOW_TIME;
    MCAPI static unsigned __int64 const VILLAGE_POI_PURGE_TIME;
    MCAPI static float const VILLAGE_RADIUS_APPROX_SCALAR;
    MCAPI static unsigned __int64 const VILLAGE_SAVE_TICK_DELAY;
    MCAPI static int const VILLAGE_START_HEIGHT;
    MCAPI static int const VILLAGE_UNCLAIMED_POI_CAP;
    MCAPI static unsigned __int64 const VILLAGE_UPDATE_TICK_DELAY;
    MCAPI static unsigned char const VILLAGE_VERSION_CURRENT;

};