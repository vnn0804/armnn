//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//
#pragma once

#include <armnn/DescriptorsFwd.hpp>
#include <armnn/Optional.hpp>
#include <armnn/Types.hpp>
#include <armnn/Tensor.hpp>

namespace armnn
{

class NeonLayerSupport : public ILayerSupport
{
public:
    bool IsActivationSupported(const TensorInfo& input,
                               const TensorInfo& output,
                               const ActivationDescriptor& descriptor,
                               Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsAdditionSupported(const TensorInfo& input0,
                             const TensorInfo& input1,
                             const TensorInfo& output,
                             Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsBatchNormalizationSupported(const TensorInfo& input,
                                       const TensorInfo& output,
                                       const TensorInfo& mean,
                                       const TensorInfo& var,
                                       const TensorInfo& beta,
                                       const TensorInfo& gamma,
                                       const BatchNormalizationDescriptor& descriptor,
                                       Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsConstantSupported(const TensorInfo& output,
                             Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsConvertFp16ToFp32Supported(const TensorInfo& input,
                                      const TensorInfo& output,
                                      Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsConvertFp32ToFp16Supported(const TensorInfo& input,
                                      const TensorInfo& output,
                                      Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsConvolution2dSupported(const TensorInfo& input,
                                  const TensorInfo& output,
                                  const Convolution2dDescriptor& descriptor,
                                  const TensorInfo& weights,
                                  const Optional<TensorInfo>& biases,
                                  Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsDepthwiseConvolutionSupported(const TensorInfo& input,
                                         const TensorInfo& output,
                                         const DepthwiseConvolution2dDescriptor& descriptor,
                                         const TensorInfo& weights,
                                         const Optional<TensorInfo>& biases,
                                         Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsDivisionSupported(const TensorInfo& input0,
                             const TensorInfo& input1,
                             const TensorInfo& output,
                             Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsFakeQuantizationSupported(const TensorInfo& input,
                                     const FakeQuantizationDescriptor& descriptor,
                                     Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsFloorSupported(const TensorInfo& input,
                          const TensorInfo& output,
                          Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsFullyConnectedSupported(const TensorInfo& input,
                                   const TensorInfo& output,
                                   const TensorInfo& weights,
                                   const TensorInfo& biases,
                                   const FullyConnectedDescriptor& descriptor,
                                   Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsInputSupported(const TensorInfo& input,
                          Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsL2NormalizationSupported(const TensorInfo& input,
                                    const TensorInfo& output,
                                    const L2NormalizationDescriptor& descriptor,
                                    Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsLstmSupported(const TensorInfo& input,
                         const TensorInfo& outputStateIn,
                         const TensorInfo& cellStateIn,
                         const TensorInfo& scratchBuffer,
                         const TensorInfo& outputStateOut,
                         const TensorInfo& cellStateOut,
                         const TensorInfo& output,
                         const LstmDescriptor& descriptor,
                         const TensorInfo& inputToForgetWeights,
                         const TensorInfo& inputToCellWeights,
                         const TensorInfo& inputToOutputWeights,
                         const TensorInfo& recurrentToForgetWeights,
                         const TensorInfo& recurrentToCellWeights,
                         const TensorInfo& recurrentToOutputWeights,
                         const TensorInfo& forgetGateBias,
                         const TensorInfo& cellBias,
                         const TensorInfo& outputGateBias,
                         const TensorInfo* inputToInputWeights,
                         const TensorInfo* recurrentToInputWeights,
                         const TensorInfo* cellToInputWeights,
                         const TensorInfo* inputGateBias,
                         const TensorInfo* projectionWeights,
                         const TensorInfo* projectionBias,
                         const TensorInfo* cellToForgetWeights,
                         const TensorInfo* cellToOutputWeights,
                         Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsMeanSupported(const TensorInfo& input,
                         const TensorInfo& output,
                         const MeanDescriptor& descriptor,
                         Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsMergerSupported(const std::vector<const TensorInfo*> inputs,
                           const OriginsDescriptor& descriptor,
                           Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsMultiplicationSupported(const TensorInfo& input0,
                                   const TensorInfo& input1,
                                   const TensorInfo& output,
                                   Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsNormalizationSupported(const TensorInfo& input,
                                  const TensorInfo& output,
                                  const NormalizationDescriptor& descriptor,
                                  Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsOutputSupported(const TensorInfo& output,
                           Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsPadSupported(const TensorInfo& input,
                        const TensorInfo& output,
                        const PadDescriptor& descriptor,
                        Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsPermuteSupported(const TensorInfo& input,
                            const TensorInfo& output,
                            const PermuteDescriptor& descriptor,
                            Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsPooling2dSupported(const TensorInfo& input,
                              const TensorInfo& output,
                              const Pooling2dDescriptor& descriptor,
                              Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsReshapeSupported(const TensorInfo& input,
                            Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsResizeBilinearSupported(const TensorInfo& input,
                                   Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsSoftmaxSupported(const TensorInfo& input,
                            const TensorInfo& output,
                            const SoftmaxDescriptor& descriptor,
                            Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsSplitterSupported(const TensorInfo& input,
                             const ViewsDescriptor& descriptor,
                             Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;

    bool IsSubtractionSupported(const TensorInfo& input0,
                                const TensorInfo& input1,
                                const TensorInfo& output,
                                Optional<std::string&> reasonIfUnsupported = EmptyOptional()) const override;
};

bool IsNeonDirectConvolutionPreferred(const TensorInfo& weightInfo, const Convolution2dDescriptor& desc);

bool IsNeonNormalizationDescParamsSupported(Optional<std::string&> reasonIfUnsupported,
                                            const NormalizationDescriptor& parameters);

bool IsActivationSupportedNeon(const TensorInfo& input,
                               const TensorInfo& output,
                               const ActivationDescriptor& descriptor,
                               Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsNeonDepthwiseConvolution2dDescParamsSupported(Optional<std::string&> reasonIfUnsupported,
                                                     const DepthwiseConvolution2dDescriptor& parameters,
                                                     const TensorInfo& weights);

bool IsAdditionSupportedNeon(const TensorInfo& input0,
                             const TensorInfo& input1,
                             const TensorInfo& output,
                             Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsBatchNormalizationSupportedNeon(const TensorInfo& input,
                                       const TensorInfo& output,
                                       const TensorInfo& mean,
                                       const TensorInfo& var,
                                       const TensorInfo& beta,
                                       const TensorInfo& gamma,
                                       const BatchNormalizationDescriptor& descriptor,
                                       Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsConstantSupportedNeon(const TensorInfo& output,
                             Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsConvolution2dSupportedNeon(const TensorInfo& input,
                                  const TensorInfo& output,
                                  const Convolution2dDescriptor& descriptor,
                                  const TensorInfo& weights,
                                  const Optional<TensorInfo>& biases,
                                  Optional<std::string&> reasonIfUnsupported = EmptyOptional());


bool IsDepthwiseConvolutionSupportedNeon(const TensorInfo& input,
                                         const TensorInfo& output,
                                         const DepthwiseConvolution2dDescriptor& descriptor,
                                         const TensorInfo& weights,
                                         const Optional<TensorInfo>& biases,
                                         Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsDivisionSupportedNeon(const TensorInfo& input0,
                             const TensorInfo& input1,
                             const TensorInfo& output,
                             Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsSubtractionSupportedNeon(const TensorInfo& input0,
                                const TensorInfo& input1,
                                const TensorInfo& output,
                                Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsFullyConnectedSupportedNeon(const TensorInfo& input,
                                   const TensorInfo& output,
                                   const TensorInfo& weights,
                                   const TensorInfo& biases,
                                   const FullyConnectedDescriptor& descriptor,
                                   Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsInputSupportedNeon(const TensorInfo& input,
                          Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsL2NormalizationSupportedNeon(const TensorInfo& input,
                                    const TensorInfo& output,
                                    const L2NormalizationDescriptor& descriptor,
                                    Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsMergerSupportedNeon(const std::vector<const TensorInfo*> inputs,
                           const OriginsDescriptor& descriptor,
                           Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsMultiplicationSupportedNeon(const TensorInfo& input0,
                                   const TensorInfo& input1,
                                   const TensorInfo& output,
                                   Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsNormalizationSupportedNeon(const TensorInfo& input,
                                  const TensorInfo& output,
                                  const NormalizationDescriptor& descriptor,
                                  Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsOutputSupportedNeon(const TensorInfo& output,
                           Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsPermuteSupportedNeon(const TensorInfo& input,
                            const TensorInfo& output,
                            const PermuteDescriptor& descriptor,
                            Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsPooling2dSupportedNeon(const TensorInfo& input,
                              const TensorInfo& output,
                              const Pooling2dDescriptor& descriptor,
                              Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsResizeBilinearSupportedNeon(const TensorInfo& input,
                                   Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsSoftmaxSupportedNeon(const TensorInfo& input,
                            const TensorInfo& output,
                            const SoftmaxDescriptor& descriptor,
                            Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsSplitterSupportedNeon(const TensorInfo& input,
                             const ViewsDescriptor& descriptor,
                             Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsFakeQuantizationSupportedNeon(const TensorInfo& input,
                                     const FakeQuantizationDescriptor& descriptor,
                                     Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsReshapeSupportedNeon(const TensorInfo& input,
                            Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsFloorSupportedNeon(const TensorInfo& input,
                          const TensorInfo& output,
                          Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsLstmSupportedNeon(const TensorInfo& input,
                         const TensorInfo& outputStateIn,
                         const TensorInfo& cellStateIn,
                         const TensorInfo& scratchBuffer,
                         const TensorInfo& outputStateOut,
                         const TensorInfo& cellStateOut,
                         const TensorInfo& output,
                         const LstmDescriptor& descriptor,
                         const TensorInfo& inputToForgetWeights,
                         const TensorInfo& inputToCellWeights,
                         const TensorInfo& inputToOutputWeights,
                         const TensorInfo& recurrentToForgetWeights,
                         const TensorInfo& recurrentToCellWeights,
                         const TensorInfo& recurrentToOutputWeights,
                         const TensorInfo& forgetGateBias,
                         const TensorInfo& cellBias,
                         const TensorInfo& outputGateBias,
                         const TensorInfo* inputToInputWeights,
                         const TensorInfo* recurrentToInputWeights,
                         const TensorInfo* cellToInputWeights,
                         const TensorInfo* inputGateBias,
                         const TensorInfo* projectionWeights,
                         const TensorInfo* projectionBias,
                         const TensorInfo* cellToForgetWeights,
                         const TensorInfo* cellToOutputWeights,
                         Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsConvertFp16ToFp32SupportedNeon(const TensorInfo& input,
                                      const TensorInfo& output,
                                      Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsConvertFp32ToFp16SupportedNeon(const TensorInfo& input,
                                      const TensorInfo& output,
                                      Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsMeanSupportedNeon(const TensorInfo& input,
                         const TensorInfo& output,
                         const MeanDescriptor& descriptor,
                         Optional<std::string&> reasonIfUnsupported = EmptyOptional());

bool IsPadSupportedNeon(const TensorInfo& input,
                        const TensorInfo& output,
                        const PadDescriptor& descriptor,
                        Optional<std::string&> reasonIfUnsupported = EmptyOptional());

} // namespace armnn