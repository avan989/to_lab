/************************************************************************
 * NASA Docket No. GSC-18,719-1, and identified as “core Flight System: Bootes”
 *
 * Copyright (c) 2020 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *  The TO Lab Application header file containing version information
 */
#ifndef TO_LAB_VERSION_H
#define TO_LAB_VERSION_H

/* Development Build Macro Definitions */
#define TO_LAB_BUILD_NUMBER 71 /*!< Development Build: Number of commits since baseline */
#define TO_LAB_BUILD_BASELINE \
    "v2.5.0-rc4" /*!< Development Build: git tag that is the base for the current development */

/*
 * Version Macros, see \ref cfsversions for definitions.
 */
#define TO_LAB_MAJOR_VERSION 2  /*!< @brief Major version number */
#define TO_LAB_MINOR_VERSION 3  /*!< @brief Minor version number */
#define TO_LAB_REVISION      99 /*!< @brief Revision version number. Value of 99 indicates a development version.*/

/*!
 * @brief Mission revision.
 *
 * Reserved for mission use to denote patches/customizations as needed.
 * Values 1-254 are reserved for mission use to denote patches/customizations as needed. NOTE: Reserving 0 and 0xFF for
 * cFS open-source development use (pending resolution of nasa/cFS#440)
 */
#define TO_LAB_MISSION_REV 0xFF

#define TO_LAB_STR_HELPER(x) #x /*!< @brief Helper function to concatenate strings from integer macros */
#define TO_LAB_STR(x)        TO_LAB_STR_HELPER(x) /*!< @brief Helper function to concatenate strings from integer macros */

/*! @brief Development Build Version Number.
 * @details Baseline git tag + Number of commits since baseline. @n
 * See @ref cfsversions for format differences between development and release versions.
 */
#define TO_LAB_VERSION TO_LAB_BUILD_BASELINE "+dev" TO_LAB_STR(TO_LAB_BUILD_NUMBER)

/*! @brief Development Build Version String.
 * @details Reports the current development build's baseline, number, and name. Also includes a note about the latest
 * official version. @n See @ref cfsversions for format differences between development and release versions.
 */
#define TO_LAB_VERSION_STRING                   \
    " TO Lab DEVELOPMENT BUILD " TO_LAB_VERSION \
    ", Last Official Release: v2.3.0" /* For full support please use this version */

#endif
