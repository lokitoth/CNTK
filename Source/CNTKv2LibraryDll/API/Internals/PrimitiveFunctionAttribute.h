//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//

#pragma once

#include <string>

namespace CNTK
{
    class PrimitiveFunctionAttribute {
    public:
        static const std::wstring InternalSumReductionOpName;
        static const std::wstring InternalLogSumReductionOpName;
        static const std::wstring InternalMeanReductionOpName;
        static const std::wstring InternalMaxReductionOpName;
        static const std::wstring InternalMinReductionOpName;
        static const std::wstring InternalProdReductionOpName;
        static const std::wstring InternalAllReductionOpName;
        static const std::wstring InternalAnyReductionOpName;
        static const std::wstring InternalArgmaxReductionOpName;
        static const std::wstring InternalArgminReductionOpName;

        static const std::wstring AttributeNameAxis;
        static const std::wstring AttributeNameAxisVec;
        static const std::wstring AttributeNameAxis1;
        static const std::wstring AttributeNameAxis2;
        static const std::wstring AttributeNameAllowDuplicates;
        static const std::wstring AttributeNameNumSamples;
        static const std::wstring AttributeNameDropoutRate;
        static const std::wstring AttributeNameNewShape;
        static const std::wstring AttributeNameBeginAxis;
        static const std::wstring AttributeNameEndAxis;
        static const std::wstring AttributeNameOutputRank;
        static const std::wstring AttributeNameInferInputRankToMap;
        static const std::wstring AttributeNameOffset;
        static const std::wstring AttributeNameStrides;
        static const std::wstring AttributeNameDilation;
        static const std::wstring AttributeNameSharing;
        static const std::wstring AttributeNameAutoPadding;
        static const std::wstring AttributeNameSequential;
        static const std::wstring AttributeNameLowerPad;
        static const std::wstring AttributeNameUpperPad;
        static const std::wstring AttributeNameCeilOutDim;
        static const std::wstring AttributeNameIncludePad;
        static const std::wstring AttributeNameTranspose;
        static const std::wstring AttributeNameOutputShape;
        static const std::wstring AttributeNameMaxTempMemSizeInSamples;
        static const std::wstring AttributeNameROIOutputShape;
        static const std::wstring AttributeNamePoolingType;
        static const std::wstring AttributeNamePoolingWindowShape;
        static const std::wstring AttributeNameSpatial;
        static const std::wstring AttributeNameNormalizationTimeConstant;
        static const std::wstring AttributeNameBlendTimeConstant;
        static const std::wstring AttributeNameEpsilon;
        static const std::wstring AttributeNameUseCuDNNEngine;
        static const std::wstring AttributeNameDisableRegularization;
        static const std::wstring AttributeNameNewDataType;
        static const std::wstring AttributeNameNewDynamicAxes;
        static const std::wstring AttributeNameNewSequenceAxisLengthScalingFactor;
        static const std::wstring AttributeNameNewSequenceAxisLengthAdditiveFactor;
        static const std::wstring AttributeNameBeginIndex;
        static const std::wstring AttributeNameBeginIndexVec;
        static const std::wstring AttributeNameEndIndex;
        static const std::wstring AttributeNameEndIndexVec;
        static const std::wstring AttributeNameReductionOpName;
        static const std::wstring AttributeNameReductionKeepDimensions;
        static const std::wstring AttributeNameRngSeed;
        static const std::wstring AttributeNameRngOffset;
        static const std::wstring AttributeNameBidirectional;
        static const std::wstring AttributeNameNumLayers;
        static const std::wstring AttributeNameHiddenSize;
        static const std::wstring AttributeNameRecurrentOp;
        static const std::wstring AttributeNameUnpoolingWindowShape;
        static const std::wstring AttributeNameSubstitutionPenalty;
        static const std::wstring AttributeNameDeletionPenalty;
        static const std::wstring AttributeNameInsertionPenalty;
        static const std::wstring AttributeNameSquashInputs;
        static const std::wstring AttributeNameTokensToIgnore;
        static const std::wstring AttributeNameDelayConstraint;
        static const std::wstring AttributeNameBlankTokenId;
        static const std::wstring AttributeNamePhonePath;
        static const std::wstring AttributeNameSymListPath;
        static const std::wstring AttributeNameStateListPath;
        static const std::wstring AttributeNameTransProbPath;
        static const std::wstring AttributeNameLatticeConfigPath;
        static const std::wstring AttributeNameHSmoothingWeight;
        static const std::wstring AttributeNameFrameDropThresh;
        static const std::wstring AttributeNameDoReferenceAlign;
        static const std::wstring AttributeNameSeqGammarUsesMBR;
        static const std::wstring AttributeNameSeqGammarAMF;
        static const std::wstring AttributeNameSeqGammarLMF;
        static const std::wstring AttributeNameSeqGammarBMMIFactor;
        static const std::wstring AttributeNameSeqGammarWordPen;
        static const std::wstring AttributeNameNumClass;
        static const std::wstring AttributeNameOneHotOutputSparse;
        static const std::wstring AttributeNameOutputSparse;
        static const std::wstring AttributeNameOneHotAxis;
        static const std::wstring AttributeNameSequenceAxisNamePrefix;
        static const std::wstring AttributeNameSequenceUnpackPaddingValue;
        static const std::wstring AttributeNameSequenceUnpackSuppressMaskOutput;
        static const std::wstring AttributeNameRandomDistributionType;
        static const std::wstring AttributeNameRandomDistributionArgs;
        static const std::wstring AttributeNameSpatialScale;
        static const std::wstring AttributeNameSliceStrides;
        static const std::wstring AttributeNameSliceStridesVec;
        static const std::wstring AttributeNamePaddingHead;
        static const std::wstring AttributeNamePaddingFoot;
        static const std::wstring AttributeNamePaddingMode;
        static const std::wstring AttributeNamePaddingConstantValue;
        static const std::wstring AttributeNameAlpha;
        static const std::wstring AttributeNameBeta;
        static const std::wstring AttributeNameGamma;
        static const std::wstring AttributeNameKernelShape;
        static const std::wstring AttributeNameBias;
        static const std::wstring AttributeNameDepthRadius;
        static const std::wstring AttributeNameBlockSize;
        static const std::wstring AttributeNameCustomAttributes;
        static const std::wstring AttributeNameNumItems;
        static const std::wstring AttributeNameFillValue;
        static const std::wstring AttributeNameUseStatsAcrossChannels;
        static const std::wstring AttributeNameDoVarianceScaling;
        static const std::wstring AttributeNameGroups;
        static const std::wstring AttributeNameCustomOp;
        static const std::wstring AttributeNameTransposeLeftOperand;
        static const std::wstring AttributeNameTransposeRightOperand;
    };
}
