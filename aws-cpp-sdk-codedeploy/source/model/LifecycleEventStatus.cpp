/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/codedeploy/model/LifecycleEventStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");
static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Skipped_HASH = HashingUtils::HashString("Skipped");
static const int Unknown_HASH = HashingUtils::HashString("Unknown");

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
namespace LifecycleEventStatusMapper
{
LifecycleEventStatus GetLifecycleEventStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Pending_HASH)
  {
    return LifecycleEventStatus::Pending;
  }
  else if (hashCode == InProgress_HASH)
  {
    return LifecycleEventStatus::InProgress;
  }
  else if (hashCode == Succeeded_HASH)
  {
    return LifecycleEventStatus::Succeeded;
  }
  else if (hashCode == Failed_HASH)
  {
    return LifecycleEventStatus::Failed;
  }
  else if (hashCode == Skipped_HASH)
  {
    return LifecycleEventStatus::Skipped;
  }
  else if (hashCode == Unknown_HASH)
  {
    return LifecycleEventStatus::Unknown;
  }

  return LifecycleEventStatus::Pending;
}

Aws::String GetNameForLifecycleEventStatus(LifecycleEventStatus value)
{
  switch(value)
  {
  case LifecycleEventStatus::Pending:
    return "Pending";
  case LifecycleEventStatus::InProgress:
    return "InProgress";
  case LifecycleEventStatus::Succeeded:
    return "Succeeded";
  case LifecycleEventStatus::Failed:
    return "Failed";
  case LifecycleEventStatus::Skipped:
    return "Skipped";
  case LifecycleEventStatus::Unknown:
    return "Unknown";
  default:
    return "Pending";
  }
}

} // namespace LifecycleEventStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
