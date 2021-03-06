/* Copyright (c) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLCivicInfoElection.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Civic Information API (civicinfo/v2)
// Description:
//   An API for accessing civic information.
// Documentation:
//   https://developers.google.com/civic-information
// Classes:
//   GTLCivicInfoElection (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoElection
//

// Information about the election that was queried.

@interface GTLCivicInfoElection : GTLObject

// Day of the election in YYYY-MM-DD format.
@property (nonatomic, copy) NSString *electionDay;

// The unique ID of this election.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, retain) NSNumber *identifier;  // longLongValue

// A displayable name for the election.
@property (nonatomic, copy) NSString *name;

// The political division of the election. Represented as an OCD Division ID.
// Voters within these political jurisdictions are covered by this election.
// This is typically a state such as ocd-division/country:us/state:ca or for the
// midterms or general election the entire US (i.e. ocd-division/country:us).
@property (nonatomic, copy) NSString *ocdDivisionId;

@end
