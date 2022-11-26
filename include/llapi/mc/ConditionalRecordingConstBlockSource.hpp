/**
 * @file  ConditionalRecordingConstBlockSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ConditionalRecordingConstBlockSource.
 *
 */
class ConditionalRecordingConstBlockSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONDITIONALRECORDINGCONSTBLOCKSOURCE
public:
    class ConditionalRecordingConstBlockSource& operator=(class ConditionalRecordingConstBlockSource const &) = delete;
    ConditionalRecordingConstBlockSource(class ConditionalRecordingConstBlockSource const &) = delete;
    ConditionalRecordingConstBlockSource() = delete;
#endif

public:
    /**
     * @symbol ??0ConditionalRecordingConstBlockSource@@QEAA@V?$variant@PEBVIConstBlockSource@@VAccessRecordingConstBlockSource@@@std@@@Z
     * @hash   -2069545804
     */
    MCAPI ConditionalRecordingConstBlockSource(class std::variant<class IConstBlockSource const *, class AccessRecordingConstBlockSource>);
    /**
     * @symbol ?get@ConditionalRecordingConstBlockSource@@QEAA?AV?$not_null@PEBVIConstBlockSource@@@gsl@@XZ
     * @hash   1201997711
     */
    MCAPI class gsl::not_null<class IConstBlockSource const *> get();
    /**
     * @symbol ?takeAccessedBlocks@ConditionalRecordingConstBlockSource@@QEHAA?AUAccessedBlockSourceBlocks@@XZ
     * @hash   1348086510
     */
    MCAPI struct AccessedBlockSourceBlocks takeAccessedBlocks();
    /**
     * @symbol ??1ConditionalRecordingConstBlockSource@@QEAA@XZ
     * @hash   23538874
     */
    MCAPI ~ConditionalRecordingConstBlockSource();

};