﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{
  enum class MetricType
  {
    NOT_SET,
    DynamoDBReadCapacityUtilization,
    DynamoDBWriteCapacityUtilization,
    ALBRequestCountPerTarget,
    RDSReaderAverageCPUUtilization,
    RDSReaderAverageDatabaseConnections,
    EC2SpotFleetRequestAverageCPUUtilization,
    EC2SpotFleetRequestAverageNetworkIn,
    EC2SpotFleetRequestAverageNetworkOut,
    SageMakerVariantInvocationsPerInstance,
    ECSServiceAverageCPUUtilization,
    ECSServiceAverageMemoryUtilization
  };

namespace MetricTypeMapper
{
AWS_APPLICATIONAUTOSCALING_API MetricType GetMetricTypeForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForMetricType(MetricType value);
} // namespace MetricTypeMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
