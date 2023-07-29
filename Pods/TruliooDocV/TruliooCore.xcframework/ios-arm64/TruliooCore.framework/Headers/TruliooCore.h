#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TruliooCoreCOMPLETE, TruliooCoreFAIL, TruliooCoreIFeature<__contravariant Input, Result>, TruliooCoreFeatureResult<Data>, TruliooCoreRETRY, TruliooCoreSUCCESS, TruliooCoreAPIContractStepType, TruliooCoreTruliooSuccess, TruliooCoreTruliooError, TruliooCoreEither<Data, Fail>, TruliooCoreKotlinArray<T>, TruliooCoreKotlinThrowable, TruliooCoreWorkflow, TruliooCoreAPIContractStepStatus, TruliooCoreLocale, TruliooCoreCore, TruliooCoreKotlinEnumCompanion, TruliooCoreKotlinEnum<E>, TruliooCoreSequence, TruliooCoreWorkflowAuthCompanion, TruliooCoreWorkflowAuth, TruliooCoreWorkflowSequence, TruliooCoreWorkflowTheme, TruliooCoreTruliooSuccessComplete, TruliooCoreTruliooSuccessCreate, TruliooCoreTruliooSuccessDecision, TruliooCoreTruliooSuccessUpdate, TruliooCoreInternalError, TruliooCoreIosError, TruliooCoreIosErrorCoreMLSwiftBridge, TruliooCoreIosErrorDataContentsOfFileIsNull, TruliooCoreIosErrorGraphicsContextUIImageIsNull, TruliooCoreIosErrorPathForBundleResourceIsNull, TruliooCoreIosErrorSDKBundleIsNull, TruliooCoreIosErrorUIImagePNGDataIsNull, TruliooCoreWebError, TruliooCoreWebErrorCurrentDeviceNotInitialized, TruliooCoreAuthorizationError, TruliooCoreAuthorizationErrorShortCodeIsEmpty, TruliooCoreAuthorizationErrorShortCodeIsInvalid, TruliooCoreAuthorizationErrorUnauthenticatedSession, TruliooCoreConfigurationError, TruliooCoreConfigurationErrorDocumentConfigurationFetchError, TruliooCoreConfigurationErrorFeatureConfigurationFetchError, TruliooCoreDocumentError, TruliooCoreDocumentErrorImageCouldNotBeUploaded, TruliooCoreHandoverError, TruliooCoreHandoverErrorInvalidQrCode, TruliooCoreHandoverErrorInvalidRedirectUrl, TruliooCoreHandoverErrorMobileStepsError, TruliooCoreHandoverErrorVerificationError, TruliooCoreITruliooErrorError, TruliooCoreITruliooErrorException, TruliooCoreSessionError, TruliooCoreSessionErrorSessionCreationError, TruliooCoreSessionErrorSessionSubmissionError, TruliooCoreTruliooErrorCreate, TruliooCoreTruliooErrorUpdate, TruliooCoreDocumentCaptureTypeV2_1, TruliooCoreAPIContractCustomerConfigDocumentTypesResponse, TruliooCoreDocumentCaptureTypeCompanion, TruliooCoreDocumentCaptureType, TruliooCoreDocumentType, TruliooCoreDocumentCaptureTypeV2_1Companion, TruliooCoreDocumentTypeCompanion, TruliooCoreAPIContractFeatureConfigResponse, TruliooCoreSessionImageType, TruliooCoreStep, TruliooCoreAPIContractTransactionStatus, TruliooCoreVerifiedStatus, TruliooCoreIssuingCountries, TruliooCoreSessionCompanion, TruliooCoreStepCompanion, TruliooCoreKotlinException, TruliooCoreLog, TruliooCoreInstance, TruliooCoreInstanceRegistry, TruliooCoreEnvironments, TruliooCoreEnvironmentsCompanion, TruliooCoreEnvironmentsENVIRONMENT, TruliooCoreEnvironmentsBeta, TruliooCoreEnvironmentsInternal, TruliooCoreEnvironmentsRelease, TruliooCoreLogCompanion, TruliooCoreILocaleCompanion, TruliooCoreKotlinRegex, TruliooCoreLocalized, TruliooCoreLcid, TruliooCoreLcidCompanion, TruliooCoreLocaleCompanion, TruliooCoreLocaleChineseCompanion, TruliooCoreLocaleChinese, TruliooCoreLocaleChineseChina, TruliooCoreLocaleChineseTaiwan, TruliooCoreLocaleDutchCompanion, TruliooCoreLocaleDutch, TruliooCoreLocaleDutchBelgium, TruliooCoreLocaleDutchNetherlands, TruliooCoreLocaleEnglishCompanion, TruliooCoreLocaleEnglish, TruliooCoreLocaleEnglishCanada, TruliooCoreLocaleEnglishUnitedKingdom, TruliooCoreLocaleEnglishUnitedStates, TruliooCoreLocaleFrenchCompanion, TruliooCoreLocaleFrench, TruliooCoreLocaleFrenchFrance, TruliooCoreLocaleGermanCompanion, TruliooCoreLocaleGerman, TruliooCoreLocaleGermanGermany, TruliooCoreLocaleItalianCompanion, TruliooCoreLocaleItalian, TruliooCoreLocaleItalianItaly, TruliooCoreLocaleJapaneseCompanion, TruliooCoreLocaleJapanese, TruliooCoreLocaleJapaneseJapan, TruliooCoreLocaleKoreanCompanion, TruliooCoreLocaleKorean, TruliooCoreLocaleKoreanSouthKorea, TruliooCoreLocalePolishCompanion, TruliooCoreLocalePolish, TruliooCoreLocalePolishPoland, TruliooCoreLocaleRussianCompanion, TruliooCoreLocaleRussian, TruliooCoreLocaleRussianRussia, TruliooCoreLocaleSpanishCompanion, TruliooCoreLocaleSpanish, TruliooCoreLocaleSpanishMexico, TruliooCoreLocaleSpanishSpain, TruliooCoreLocaleTurkishCompanion, TruliooCoreLocaleTurkish, TruliooCoreLocaleTurkishTurkey, TruliooCoreLocaleUkrainianCompanion, TruliooCoreLocaleUkrainian, TruliooCoreLocaleUkrainianUkraine, TruliooCoreLocalizedStringsCompanion, TruliooCoreSingleton<T>, TruliooCoreLocalizedStrings, TruliooCoreKotlinByteArray, TruliooCoreIPKCECompanion, TruliooCoreAPIContract, TruliooCoreAPIContractAudit, TruliooCoreAPIContractAuditConsent, TruliooCoreAPIContractAuditConsentRequestCompanion, TruliooCoreAPIContractAuditConsentRequest, TruliooCoreAPIContractAuth, TruliooCoreAPIContractAuthChallenge, TruliooCoreAPIContractAuthChallengeMethod, TruliooCoreAPIContractAuthChallengeRequestCompanion, TruliooCoreAPIContractAuthChallengeRequest, TruliooCoreAPIContractAuthChallengeResponseCompanion, TruliooCoreAPIContractAuthChallengeResponse, TruliooCoreAPIContractAuthChallengeMethodCompanion, TruliooCoreAPIContractAuthGRANTCompanion, TruliooCoreAPIContractAuthGRANT, TruliooCoreAPIContractAuthRefresh, TruliooCoreAPIContractAuthRefreshRequestCompanion, TruliooCoreAPIContractAuthRefreshRequest, TruliooCoreAPIContractAuthRefreshResponseCompanion, TruliooCoreAPIContractAuthRefreshResponse, TruliooCoreAPIContractAuthRequestCompanion, TruliooCoreAPIContractAuthRequest, TruliooCoreAPIContractAuthResponseCompanion, TruliooCoreAPIContractAuthResponse, TruliooCoreAPIContractAuthVerify, TruliooCoreAPIContractDevicePlatform, TruliooCoreAPIContractAuthVerifyRequestCompanion, TruliooCoreAPIContractAuthVerifyRequest, TruliooCoreAPIContractCustomerConfig, TruliooCoreAPIContractCustomerConfigDocumentTypes, TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentTypeCompanion, TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentType, TruliooCoreAPIContractCustomerConfigDocumentTypesResponseCompanion, TruliooCoreAPIContractDevice, TruliooCoreAPIContractDevicePlatformCompanion, TruliooCoreAPIContractFeatureConfig, TruliooCoreAPIContractFeatureConfigDeviceDataCompanion, TruliooCoreAPIContractFeatureConfigDeviceData, TruliooCoreAPIContractFeatureConfigDocumentCaptureCompanion, TruliooCoreAPIContractFeatureConfigDocumentCapture, TruliooCoreAPIContractFeatureConfigIConfiguredFeatureCompanion, TruliooCoreAPIContractFeatureConfigPassportCaptureCompanion, TruliooCoreAPIContractFeatureConfigPassportCapture, TruliooCoreAPIContractFeatureConfigRequestCompanion, TruliooCoreAPIContractFeatureConfigRequest, TruliooCoreAPIContractFeatureConfigResponseCompanion, TruliooCoreAPIContractFeatureConfigSelfieCaptureCompanion, TruliooCoreAPIContractFeatureConfigSelfieCapture, TruliooCoreAPIContractHandover, TruliooCoreAPIContractHandoverQrCode, TruliooCoreAPIContractHandoverQrCodeRequestCompanion, TruliooCoreAPIContractHandoverQrCodeRequest, TruliooCoreAPIContractHandoverQrCodeResponseCompanion, TruliooCoreAPIContractHandoverQrCodeResponse, TruliooCoreAPIContractHandoverStatus, TruliooCoreAPIContractHandoverStatusStepAttribute, TruliooCoreAPIContractHandoverStatusResponseCompanion, TruliooCoreAPIContractHandoverStatusResponse, TruliooCoreAPIContractHandoverStatusStepAttributeCompanion, TruliooCoreAPIContractStep, TruliooCoreAPIContractStepMetadata, TruliooCoreAPIContractStepMetadataRequestCompanion, TruliooCoreAPIContractStepMetadataRequest, TruliooCoreAPIContractStepRequestCompanion, TruliooCoreAPIContractStepRequest, TruliooCoreAPIContractStepResponseCompanion, TruliooCoreAPIContractStepResponse, TruliooCoreAPIContractStepStatusCompanion, TruliooCoreAPIContractStepTypeCompanion, TruliooCoreAPIContractStepUpdate, TruliooCoreAPIContractStepUpdateRequestCompanion, TruliooCoreAPIContractStepUpdateRequest, TruliooCoreAPIContractTransaction, TruliooCoreAPIContractTransactionDecision, TruliooCoreAPIContractTransactionDecisionResponseCompanion, TruliooCoreAPIContractTransactionDecisionResponse, TruliooCoreAPIContractTransactionRequestCompanion, TruliooCoreAPIContractTransactionRequest, TruliooCoreAPIContractTransactionStatusCompanion, TruliooCoreAPIContractTransactionSubmit, TruliooCoreAPIContractTransactionSubmitResponseCompanion, TruliooCoreAPIContractTransactionSubmitResponse, TruliooCoreBaseAPICompanion, TruliooCoreKtor_client_coreHttpClient, TruliooCoreBaseAPI, TruliooCoreKotlinUnit, TruliooCoreKotlinError, TruliooCoreAuditAPICompanion, TruliooCoreCustomerConfigAPICompanion, TruliooCoreFeatureConfigAPICompanion, TruliooCoreHttpClientCompanion, TruliooCoreKotlinx_serialization_jsonJson, TruliooCoreTruliooJwtHeader, TruliooCoreTruliooJwtPayload, TruliooCoreSessionAPICompanion, TruliooCoreStepAPICompanion, TruliooCoreTruliooJwtHeaderCompanion, TruliooCoreTruliooJwtPayloadCompanion, TruliooCoreMetaDataTypes, TruliooCoreMetaDataTypesCameraPermissionScreen, TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction, TruliooCoreMLModelDocumentType, TruliooCoreKotlinFloatArray, TruliooCoreDetectionItem, TruliooCoreRecognitionStatus, TruliooCoreDocumentRecognizerCompanion, MLMultiArray, TruliooCoreCoreMLResult, TruliooCoreFaceRecognizerImpl, VNRequest, NSError, TruliooCoreDocument, TruliooCoreFace, TruliooCorePercentageOffsetBox, TruliooCoreMediaPipeLandmark, TruliooCoreImageRecognizerTypeDOCUMENT, TruliooCoreImageRecognizerTypePASSPORT, TruliooCoreImageRecognizerTypeSELFIE, TruliooCoreImageRect, TruliooCoreIosFaceDetectionCompanion, TruliooCoreMLModelDocumentTypeCompanion, TruliooCoreMediaPipeFacialReferenceCompanion, TruliooCoreCoreMLRecognizer, TruliooCoreInputProcessor, TruliooCoreInputProcessorMultiArray, TruliooCoreInputProcessorPixels, UIImage, TruliooCorePixelChannel, TruliooCoreMLDataConfigCompanion, TruliooCoreMLDataConfig, TruliooCoreOutputProcessor, TruliooCoreAnalysisStatus, TruliooCoreAnalysisCompanion, TruliooCoreAnalysis, TruliooCoreBarcodeType, TruliooCoreKotlinx_datetimeDatePeriod, TruliooCoreBarcodeStatus, TruliooCoreBarcodeCompanion, TruliooCoreBarcode, TruliooCoreBoundingBoxCompanion, TruliooCoreBoundingBox, TruliooCoreMrz, TruliooCoreDocumentCompanion, TruliooCoreFaceCompanion, TruliooCoreMRTDTYPE, TruliooCoreMRZSTATUS, TruliooCoreMrzCompanion, TruliooCorePercentageOffsetBoxCompanion, TruliooCoreDuration, TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher, TruliooCoreExponentialBackoffCompanion, TruliooCoreSeconds, TruliooCoreImagePollableCompanion, TruliooCoreMilliseconds, TruliooCoreMinutes, TruliooCoreImagePollableUploadCompleteStatus, TruliooCoreImageValidation, TruliooCoreImageRecognizer<M, T>, TruliooCoreImageValidationCompanion, TruliooCoreXcodeProject, TruliooCoreXcodeProjectSDKBundle, NSData, TruliooCoreCenterPoint, TruliooCoreSize2D, TruliooCoreIImageParcelCompanion, TruliooCoreIResizableImageCompanion, TruliooCoreIdRatios, TruliooCoreImageCropping, TruliooCoreImageResolution, TruliooCoreImageFormat, TruliooCoreJPEG, TruliooCoreYUV, TruliooCorePngData, TruliooCoreIDATCompanion, TruliooCoreIENDCompanion, TruliooCoreIHDRCompanion, TruliooCoreIPngChunkCompanion, TruliooCoreKotlinPair<__covariant A, __covariant B>, TruliooCorePLTECompanion, TruliooCorePNGCompanion, TruliooCorePngDataCompanion, TruliooCorePngDataSectionsCompanion, TruliooCoreIDAT, TruliooCoreIEND, TruliooCoreIHDR, TruliooCorePngDataSections, TruliooCorePngDataSectionsBuilder, TruliooCoreMetadataPayload, TruliooCoreStepUpdatePayload, TruliooCoreAsyncQueueCompanion, TruliooCoreObservable<T>, TruliooCoreInjection, TruliooCoreInjectionExternalCompanion, TruliooCoreInstanceSTORAGE, TruliooCoreCameraResolution, TruliooCoreIDocumentMetadataFactoryCompanion, TruliooCoreIJurisdictionMetadataFactoryCompanion, TruliooCoreILoggingMetadataFactoryCompanion, TruliooCoreIMLMetadataFactoryCompanion, TruliooCoreIPermissionsMetadataFactoryCompanion, TruliooCoreISelfieMetadataFactoryCompanion, TruliooCoreISubmissionMetadataFactoryCompanion, TruliooCoreMetadataFactory, TruliooCoreFailure<Data, Fail>, TruliooCoreSuccess<Data, Fail>, TruliooCoreEdgeFlowCompanion, TruliooCoreEdgeFlow, TruliooCoreEdgeFlowCompanionEmptyFeature, TruliooCoreEdgeRegistryCompanion, TruliooCoreIEdgeCompanion, TruliooCoreSequenceFacadeCompanion, TruliooCoreDurationCompanion, TruliooCoreHours, TruliooCoreITimerCompanion, TruliooCoreKotlinCValue<T>, TruliooCoreKotlinRuntimeException, TruliooCoreKotlinIllegalStateException, TruliooCoreKotlinMatchResultDestructured, TruliooCoreKotlinIntRange, TruliooCoreKotlinRegexOption, TruliooCoreKotlinRegexCompanion, TruliooCoreKotlinByteIterator, TruliooCoreKtor_client_coreHttpClientEngineConfig, TruliooCoreKtor_client_coreHttpClientConfig<T>, TruliooCoreKtor_eventsEvents, TruliooCoreKtor_client_coreHttpReceivePipeline, TruliooCoreKtor_client_coreHttpRequestPipeline, TruliooCoreKtor_client_coreHttpResponsePipeline, TruliooCoreKtor_client_coreHttpSendPipeline, TruliooCoreKtor_client_coreHttpRequestData, TruliooCoreKtor_client_coreHttpResponseData, TruliooCoreKotlinx_serialization_coreSerializersModule, TruliooCoreKotlinx_serialization_jsonJsonDefault, TruliooCoreKotlinx_serialization_jsonJsonElement, TruliooCoreKotlinx_serialization_jsonJsonConfiguration, TruliooCoreKotlinFloatIterator, TruliooCoreKotlinx_datetimeDateTimePeriodCompanion, TruliooCoreKotlinx_datetimeDateTimePeriod, TruliooCoreKotlinx_datetimeDatePeriodCompanion, TruliooCoreKotlinAbstractCoroutineContextElement, TruliooCoreKotlinx_coroutines_coreCoroutineDispatcherKey, TruliooCoreKotlinCancellationException, TruliooCoreKotlinAutofreeScope, TruliooCoreKotlinCValuesRef<T>, TruliooCoreKotlinCValues<T>, TruliooCoreKotlinx_serialization_coreSerialKind, TruliooCoreKotlinNothing, TruliooCoreKotlinMatchGroup, TruliooCoreKotlinIntProgressionCompanion, TruliooCoreKotlinIntIterator, TruliooCoreKotlinIntProgression, TruliooCoreKotlinIntRangeCompanion, TruliooCoreKtor_client_coreProxyConfig, TruliooCoreKtor_utilsAttributeKey<T>, TruliooCoreKtor_eventsEventDefinition<T>, TruliooCoreKtor_utilsPipelinePhase, TruliooCoreKtor_utilsPipeline<TSubject, TContext>, TruliooCoreKtor_client_coreHttpReceivePipelinePhases, TruliooCoreKtor_client_coreHttpResponse, TruliooCoreKtor_client_coreHttpRequestPipelinePhases, TruliooCoreKtor_client_coreHttpRequestBuilder, TruliooCoreKtor_client_coreHttpResponsePipelinePhases, TruliooCoreKtor_client_coreHttpResponseContainer, TruliooCoreKtor_client_coreHttpClientCall, TruliooCoreKtor_client_coreHttpSendPipelinePhases, TruliooCoreKtor_httpUrl, TruliooCoreKtor_httpHttpMethod, TruliooCoreKtor_httpOutgoingContent, TruliooCoreKtor_httpHttpStatusCode, TruliooCoreKtor_utilsGMTDate, TruliooCoreKtor_httpHttpProtocolVersion, TruliooCoreKotlinx_serialization_jsonJsonElementCompanion, TruliooCoreKotlinAbstractCoroutineContextKey<B, E>, TruliooCoreKotlinKTypeProjection, TruliooCoreKotlinDeferScope, TruliooCoreKtor_httpHeadersBuilder, TruliooCoreKtor_client_coreHttpRequestBuilderCompanion, TruliooCoreKtor_httpURLBuilder, TruliooCoreKtor_utilsTypeInfo, TruliooCoreKtor_client_coreHttpClientCallCompanion, TruliooCoreKtor_httpUrlCompanion, TruliooCoreKtor_httpURLProtocol, TruliooCoreKtor_httpHttpMethodCompanion, TruliooCoreKtor_httpContentType, TruliooCoreKtor_httpHttpStatusCodeCompanion, TruliooCoreKtor_utilsGMTDateCompanion, TruliooCoreKtor_utilsWeekDay, TruliooCoreKtor_utilsMonth, TruliooCoreKtor_httpHttpProtocolVersionCompanion, TruliooCoreKotlinx_coroutines_coreAtomicDesc, TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, TruliooCoreKotlinKVariance, TruliooCoreKotlinKTypeProjectionCompanion, TruliooCoreKtor_ioMemory, TruliooCoreKtor_ioChunkBuffer, TruliooCoreKtor_ioBuffer, TruliooCoreKtor_ioByteReadPacket, TruliooCoreKtor_utilsStringValuesBuilderImpl, TruliooCoreKtor_httpURLBuilderCompanion, TruliooCoreKtor_httpURLProtocolCompanion, TruliooCoreKtor_httpHeaderValueParam, TruliooCoreKtor_httpHeaderValueWithParametersCompanion, TruliooCoreKtor_httpHeaderValueWithParameters, TruliooCoreKtor_httpContentTypeCompanion, TruliooCoreKtor_utilsWeekDayCompanion, TruliooCoreKtor_utilsMonthCompanion, TruliooCoreKotlinx_coroutines_coreAtomicOp<__contravariant T>, TruliooCoreKotlinx_coroutines_coreOpDescriptor, TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode, TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, TruliooCoreKtor_ioMemoryCompanion, TruliooCoreKtor_ioBufferCompanion, TruliooCoreKtor_ioChunkBufferCompanion, TruliooCoreKtor_ioInputCompanion, TruliooCoreKtor_ioInput, TruliooCoreKtor_ioByteReadPacketCompanion, TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol TruliooCoreIEvent, TruliooCoreKotlinx_coroutines_coreMutableStateFlow, TruliooCoreIImageParcel, TruliooCoreIMetadata, TruliooCoreSequenceFacade, TruliooCoreLocalizationFacade, TruliooCoreICore, TruliooCoreICustomerConfig, TruliooCoreIFeatureConfig, TruliooCoreILogger, TruliooCoreISession, TruliooCoreISwiftBridge, TruliooCoreITimer, TruliooCoreKotlinComparable, TruliooCoreITruliooError, TruliooCoreKotlinx_serialization_coreKSerializer, TruliooCoreIImageManager, TruliooCoreKotlinKClass, TruliooCoreIRegistry, TruliooCoreIEnvironmentConfig, TruliooCoreKotlinMatchResult, TruliooCoreILocale, TruliooCoreILocalized, TruliooCoreILocalizedStrings, TruliooCoreIPKCE, TruliooCoreAPIContractFeatureConfigIConfiguredFeature, TruliooCoreAPIContractFeatureConfigICaptureFeature, TruliooCoreIAuditAPI, TruliooCoreIAuthAPI, TruliooCoreICustomerConfigAPI, TruliooCoreIFeatureConfigAPI, TruliooCoreIHandoverAPI, TruliooCoreKtor_client_coreHttpClientEngine, TruliooCoreISessionAPI, TruliooCoreIStepAPI, TruliooCoreIRecognizer, TruliooCoreIModelManager, TruliooCoreIDocumentRecognizer, TruliooCoreIFaceRecognizer, TruliooCoreIDetectionDelegate, TruliooCoreImageRecognizerType, TruliooCoreIMediaPipeFacialReference, TruliooCoreIModelInitializer, TruliooCoreICapturedImage, TruliooCoreIRecognitionModel, TruliooCoreKotlinx_coroutines_coreFlow, TruliooCoreIDataSource, TruliooCoreIPollable, TruliooCoreIDocumentDelegateImpl, TruliooCoreDocumentBackDelegate, TruliooCoreDocumentFrontDelegate, TruliooCoreKotlinx_coroutines_coreCoroutineScope, TruliooCoreIIMageValidation, TruliooCoreIImageFeed, TruliooCorePassportDelegate, TruliooCoreISelfieDelegateImpl, TruliooCoreSelfieDelegate, TruliooCoreIResolution, TruliooCoreIResizableImage, TruliooCoreIImage, TruliooCoreIPngChunk, TruliooCoreIAsyncQueue, TruliooCoreKotlinCoroutineContext, TruliooCoreKotlinx_coroutines_coreJob, TruliooCoreKotlinKProperty, TruliooCoreKotlinReadOnlyProperty, TruliooCoreKotlinLazy, TruliooCoreIMetadataFactory, TruliooCoreKotlinSuspendFunction1, TruliooCoreIEdgeRegistry, TruliooCoreIEdgeFlow, TruliooCoreIEdge, TruliooCoreIMetered, TruliooCoreIDocumentMetadataFactory, TruliooCoreIJurisdictionMetadataFactory, TruliooCoreILoggingMetadataFactory, TruliooCoreIMLMetadataFactory, TruliooCoreIPermissionsMetadataFactory, TruliooCoreISelfieMetadataFactory, TruliooCoreKotlinx_coroutines_coreFlowCollector, TruliooCoreKotlinx_coroutines_coreSharedFlow, TruliooCoreKotlinx_coroutines_coreStateFlow, TruliooCoreKotlinx_coroutines_coreMutableSharedFlow, TruliooCoreKotlinIterator, TruliooCoreKotlinx_serialization_coreEncoder, TruliooCoreKotlinx_serialization_coreSerialDescriptor, TruliooCoreKotlinx_serialization_coreSerializationStrategy, TruliooCoreKotlinx_serialization_coreDecoder, TruliooCoreKotlinx_serialization_coreDeserializationStrategy, TruliooCoreKotlinKDeclarationContainer, TruliooCoreKotlinKAnnotatedElement, TruliooCoreKotlinKClassifier, TruliooCoreKotlinMatchGroupCollection, TruliooCoreKotlinSequence, TruliooCoreKtor_ioCloseable, TruliooCoreKtor_client_coreHttpClientEngineCapability, TruliooCoreKtor_utilsAttributes, TruliooCoreKotlinx_serialization_coreSerialFormat, TruliooCoreKotlinx_serialization_coreStringFormat, TruliooCoreKotlinCoroutineContextKey, TruliooCoreKotlinCoroutineContextElement, TruliooCoreKotlinContinuation, TruliooCoreKotlinContinuationInterceptor, TruliooCoreKotlinx_coroutines_coreRunnable, TruliooCoreKotlinx_coroutines_coreChildHandle, TruliooCoreKotlinx_coroutines_coreChildJob, TruliooCoreKotlinx_coroutines_coreDisposableHandle, TruliooCoreKotlinx_coroutines_coreSelectClause0, TruliooCoreKotlinKType, TruliooCoreKotlinKCallable, TruliooCoreKotlinFunction, TruliooCoreKotlinx_serialization_coreCompositeEncoder, TruliooCoreKotlinAnnotation, TruliooCoreKotlinx_serialization_coreCompositeDecoder, TruliooCoreKotlinIterable, TruliooCoreKotlinCollection, TruliooCoreKotlinClosedRange, TruliooCoreKotlinOpenEndRange, TruliooCoreKtor_client_coreHttpClientPlugin, TruliooCoreKotlinSuspendFunction2, TruliooCoreKtor_httpHeaders, TruliooCoreKotlinx_serialization_coreSerializersModuleCollector, TruliooCoreKotlinx_coroutines_coreParentJob, TruliooCoreKotlinx_coroutines_coreSelectInstance, TruliooCoreKotlinSuspendFunction0, TruliooCoreKotlinNativePlacement, TruliooCoreKtor_httpHttpMessage, TruliooCoreKtor_ioByteReadChannel, TruliooCoreKtor_httpHttpMessageBuilder, TruliooCoreKtor_client_coreHttpRequest, TruliooCoreKtor_httpParameters, TruliooCoreKotlinMapEntry, TruliooCoreKtor_utilsStringValues, TruliooCoreKtor_ioReadSession, TruliooCoreKotlinAppendable, TruliooCoreKtor_utilsStringValuesBuilder, TruliooCoreKtor_httpParametersBuilder, TruliooCoreKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface TruliooCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface TruliooCoreBase (TruliooCoreBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface TruliooCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface TruliooCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorTruliooCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface TruliooCoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface TruliooCoreByte : TruliooCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface TruliooCoreUByte : TruliooCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface TruliooCoreShort : TruliooCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface TruliooCoreUShort : TruliooCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface TruliooCoreInt : TruliooCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface TruliooCoreUInt : TruliooCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface TruliooCoreLong : TruliooCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface TruliooCoreULong : TruliooCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface TruliooCoreFloat : TruliooCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface TruliooCoreDouble : TruliooCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface TruliooCoreBoolean : TruliooCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("IEvent")))
@protocol TruliooCoreIEvent
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("COMPLETE")))
@interface TruliooCoreCOMPLETE : TruliooCoreBase <TruliooCoreIEvent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cOMPLETE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreCOMPLETE *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FAIL")))
@interface TruliooCoreFAIL : TruliooCoreBase <TruliooCoreIEvent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fAIL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreFAIL *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureResult")))
@interface TruliooCoreFeatureResult<Data> : TruliooCoreBase
- (instancetype)initWithFeature:(TruliooCoreIFeature<id, id> *)feature data:(Data _Nullable)data event:(id<TruliooCoreIEvent>)event __attribute__((swift_name("init(feature:data:event:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreFeatureResult<Data> *)doCopyFeature:(TruliooCoreIFeature<id, id> *)feature data:(Data _Nullable)data event:(id<TruliooCoreIEvent>)event __attribute__((swift_name("doCopy(feature:data:event:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Data _Nullable data __attribute__((swift_name("data")));
@property (readonly) id<TruliooCoreIEvent> event __attribute__((swift_name("event")));
@property (readonly) TruliooCoreIFeature<id, id> *feature __attribute__((swift_name("feature")));
@end

__attribute__((swift_name("IFeature")))
@interface TruliooCoreIFeature<__contravariant Input, Result> : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)processData:(Input _Nullable)data completionHandler:(void (^)(TruliooCoreFeatureResult<Result> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(data:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startResultFlow:(id<TruliooCoreKotlinx_coroutines_coreMutableStateFlow>)resultFlow completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("start(resultFlow:completionHandler:)")));
- (TruliooCoreFeatureResult<id> *)successfully:(TruliooCoreIFeature<id, id> *)receiver data:(id _Nullable)data __attribute__((swift_name("successfully(_:data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RETRY")))
@interface TruliooCoreRETRY : TruliooCoreBase <TruliooCoreIEvent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rETRY __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreRETRY *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SUCCESS")))
@interface TruliooCoreSUCCESS : TruliooCoreBase <TruliooCoreIEvent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sUCCESS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreSUCCESS *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("SequenceFacade")))
@protocol TruliooCoreSequenceFacade
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addStepImageType:(TruliooCoreAPIContractStepType *)type image:(id<TruliooCoreIImageParcel>)image completionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addStepImage(type:image:completionHandler:)")));
- (TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> *)addStepMetadataType:(TruliooCoreAPIContractStepType *)type metadata:(TruliooCoreKotlinArray<id<TruliooCoreIMetadata>> *)metadata __attribute__((swift_name("addStepMetadata(type:metadata:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadDocumentConfigurationWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadDocumentConfiguration(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadFeatureConfigurationWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadFeatureConfiguration(completionHandler:)")));
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onInitialized __attribute__((swift_name("onInitialized()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recordConsentWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreKotlinThrowable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("recordConsent(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sessionDecisionWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sessionDecision(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)shortCodeVerifyWorkflow:(TruliooCoreWorkflow *)workflow completionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("shortCodeVerify(workflow:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startSessionWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startSession(completionHandler:)")));
- (TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> *)startStepType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("startStep(type:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)submitSessionWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("submitSession(completionHandler:)")));
- (TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> *)updateStepType:(TruliooCoreAPIContractStepType *)type status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("updateStep(type:status:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadLogsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("uploadLogs(completionHandler:)")));
@end

__attribute__((swift_name("LocalizationFacade")))
@protocol TruliooCoreLocalizationFacade
@required
- (NSString *)localizeTag:(NSString *)tag __attribute__((swift_name("localize(tag:)")));
- (void)setLocaleLocale:(TruliooCoreLocale *)locale __attribute__((swift_name("setLocale(locale:)")));
@end

__attribute__((swift_name("ICore")))
@protocol TruliooCoreICore <TruliooCoreSequenceFacade, TruliooCoreLocalizationFacade>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Core")))
@interface TruliooCoreCore : TruliooCoreBase <TruliooCoreICore>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)core __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreCore *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authorizeClientWorkflow:(TruliooCoreWorkflow *)workflow completionHandler:(void (^)(TruliooCoreEither<TruliooCoreTruliooSuccess *, TruliooCoreTruliooError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authorizeClient(workflow:completionHandler:)")));
- (id<TruliooCoreICustomerConfig>)customerConfig __attribute__((swift_name("customerConfig()")));
- (id<TruliooCoreIFeatureConfig>)featureConfig __attribute__((swift_name("featureConfig()")));
- (id<TruliooCoreILogger>)logger __attribute__((swift_name("logger()")));
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onInitialized __attribute__((swift_name("onInitialized()")));
- (id<TruliooCoreISession>)session __attribute__((swift_name("session()")));
- (void)setEnvironmentEnv:(NSString *)env __attribute__((swift_name("setEnvironment(env:)")));
- (void)setupCoreBridgeDelegate:(id<TruliooCoreISwiftBridge>)delegate __attribute__((swift_name("setupCoreBridge(delegate:)")));
- (id<TruliooCoreITimer>)timer __attribute__((swift_name("timer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol TruliooCoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface TruliooCoreKotlinEnum<E> : TruliooCoreBase <TruliooCoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sequence")))
@interface TruliooCoreSequence : TruliooCoreKotlinEnum<TruliooCoreSequence *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreSequence *welcome __attribute__((swift_name("welcome")));
@property (class, readonly) TruliooCoreSequence *userConsent __attribute__((swift_name("userConsent")));
@property (class, readonly) TruliooCoreSequence *captureDocument __attribute__((swift_name("captureDocument")));
@property (class, readonly) TruliooCoreSequence *captureFace __attribute__((swift_name("captureFace")));
@property (class, readonly) TruliooCoreSequence *complete __attribute__((swift_name("complete")));
+ (TruliooCoreKotlinArray<TruliooCoreSequence *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Workflow")))
@interface TruliooCoreWorkflow : TruliooCoreBase
- (instancetype)initWithShortCode:(NSString *)shortCode __attribute__((swift_name("init(shortCode:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreWorkflow *)doCopyShortCode:(NSString *)shortCode __attribute__((swift_name("doCopy(shortCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *shortCode __attribute__((swift_name("shortCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowAuth")))
@interface TruliooCoreWorkflowAuth : TruliooCoreBase
- (instancetype)initWithDomain:(NSString * _Nullable)domain certs:(NSArray<NSString *> * _Nullable)certs __attribute__((swift_name("init(domain:certs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreWorkflowAuthCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreWorkflowAuth *)doCopyDomain:(NSString * _Nullable)domain certs:(NSArray<NSString *> * _Nullable)certs __attribute__((swift_name("doCopy(domain:certs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable certs __attribute__((swift_name("certs")));
@property (readonly) NSString * _Nullable domain __attribute__((swift_name("domain")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowAuth.Companion")))
@interface TruliooCoreWorkflowAuthCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreWorkflowAuthCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CERT_AWS_ROOT_CA_1 __attribute__((swift_name("CERT_AWS_ROOT_CA_1")));
@property (readonly) NSString *CERT_AWS_ROOT_CA_2 __attribute__((swift_name("CERT_AWS_ROOT_CA_2")));
@property (readonly) NSString *CERT_AWS_ROOT_CA_3 __attribute__((swift_name("CERT_AWS_ROOT_CA_3")));
@property (readonly) NSString *CERT_AWS_ROOT_CA_4 __attribute__((swift_name("CERT_AWS_ROOT_CA_4")));
@property (readonly) NSString *CERT_STARFIELD_ROOT __attribute__((swift_name("CERT_STARFIELD_ROOT")));
@property (readonly) NSArray<NSString *> *DEFAULT_CERTS __attribute__((swift_name("DEFAULT_CERTS")));
@property (readonly) NSString *DEFAULT_DOMAIN __attribute__((swift_name("DEFAULT_DOMAIN")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowSequence")))
@interface TruliooCoreWorkflowSequence : TruliooCoreBase
- (instancetype)initWithSequence:(NSArray<TruliooCoreSequence *> *)sequence __attribute__((swift_name("init(sequence:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreWorkflowSequence *)doCopySequence:(NSArray<TruliooCoreSequence *> *)sequence __attribute__((swift_name("doCopy(sequence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TruliooCoreSequence *> *sequence __attribute__((swift_name("sequence")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowTheme")))
@interface TruliooCoreWorkflowTheme : TruliooCoreBase
- (instancetype)initWithColor:(int32_t)color backgroundColor:(int32_t)backgroundColor primaryTextColor:(int32_t)primaryTextColor secondaryTextColor:(int32_t)secondaryTextColor __attribute__((swift_name("init(color:backgroundColor:primaryTextColor:secondaryTextColor:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreWorkflowTheme *)doCopyColor:(int32_t)color backgroundColor:(int32_t)backgroundColor primaryTextColor:(int32_t)primaryTextColor secondaryTextColor:(int32_t)secondaryTextColor __attribute__((swift_name("doCopy(color:backgroundColor:primaryTextColor:secondaryTextColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) int32_t color __attribute__((swift_name("color")));
@property (readonly) int32_t primaryTextColor __attribute__((swift_name("primaryTextColor")));
@property (readonly) int32_t secondaryTextColor __attribute__((swift_name("secondaryTextColor")));
@end

__attribute__((swift_name("TruliooSuccess")))
@interface TruliooCoreTruliooSuccess : TruliooCoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooSuccess.Complete")))
@interface TruliooCoreTruliooSuccessComplete : TruliooCoreTruliooSuccess
- (instancetype)initWithTransactionId:(NSString *)transactionId __attribute__((swift_name("init(transactionId:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreTruliooSuccessComplete *)doCopyTransactionId:(NSString *)transactionId __attribute__((swift_name("doCopy(transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooSuccess.Create")))
@interface TruliooCoreTruliooSuccessCreate : TruliooCoreTruliooSuccess
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)create __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreTruliooSuccessCreate *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooSuccess.Decision")))
@interface TruliooCoreTruliooSuccessDecision : TruliooCoreTruliooSuccess
- (instancetype)initWithDecision:(NSString *)decision __attribute__((swift_name("init(decision:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreTruliooSuccessDecision *)doCopyDecision:(NSString *)decision __attribute__((swift_name("doCopy(decision:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *decision __attribute__((swift_name("decision")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooSuccess.Update")))
@interface TruliooCoreTruliooSuccessUpdate : TruliooCoreTruliooSuccess
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)update __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreTruliooSuccessUpdate *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface TruliooCoreKotlinThrowable : TruliooCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("ITruliooError")))
@protocol TruliooCoreITruliooError
@required
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((swift_name("TruliooError")))
@interface TruliooCoreTruliooError : TruliooCoreKotlinThrowable <TruliooCoreITruliooError>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((swift_name("InternalError")))
@interface TruliooCoreInternalError : TruliooCoreTruliooError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((swift_name("IosError")))
@interface TruliooCoreIosError : TruliooCoreInternalError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosError.CoreMLSwiftBridge")))
@interface TruliooCoreIosErrorCoreMLSwiftBridge : TruliooCoreIosError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)coreMLSwiftBridge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIosErrorCoreMLSwiftBridge *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosError.DataContentsOfFileIsNull")))
@interface TruliooCoreIosErrorDataContentsOfFileIsNull : TruliooCoreIosError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)dataContentsOfFileIsNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIosErrorDataContentsOfFileIsNull *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosError.GraphicsContextUIImageIsNull")))
@interface TruliooCoreIosErrorGraphicsContextUIImageIsNull : TruliooCoreIosError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)graphicsContextUIImageIsNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIosErrorGraphicsContextUIImageIsNull *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosError.PathForBundleResourceIsNull")))
@interface TruliooCoreIosErrorPathForBundleResourceIsNull : TruliooCoreIosError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)pathForBundleResourceIsNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIosErrorPathForBundleResourceIsNull *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosError.SDKBundleIsNull")))
@interface TruliooCoreIosErrorSDKBundleIsNull : TruliooCoreIosError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)sDKBundleIsNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIosErrorSDKBundleIsNull *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosError.UIImagePNGDataIsNull")))
@interface TruliooCoreIosErrorUIImagePNGDataIsNull : TruliooCoreIosError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)uIImagePNGDataIsNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIosErrorUIImagePNGDataIsNull *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("WebError")))
@interface TruliooCoreWebError : TruliooCoreInternalError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebError.CurrentDeviceNotInitialized")))
@interface TruliooCoreWebErrorCurrentDeviceNotInitialized : TruliooCoreWebError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)currentDeviceNotInitialized __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreWebErrorCurrentDeviceNotInitialized *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebError.WebWorkerException")))
@interface TruliooCoreWebErrorWebWorkerException : TruliooCoreWebError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("AuthorizationError")))
@interface TruliooCoreAuthorizationError : TruliooCoreTruliooError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorizationError.ShortCodeIsEmpty")))
@interface TruliooCoreAuthorizationErrorShortCodeIsEmpty : TruliooCoreAuthorizationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)shortCodeIsEmpty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAuthorizationErrorShortCodeIsEmpty *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorizationError.ShortCodeIsInvalid")))
@interface TruliooCoreAuthorizationErrorShortCodeIsInvalid : TruliooCoreAuthorizationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)shortCodeIsInvalid __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAuthorizationErrorShortCodeIsInvalid *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorizationError.UnauthenticatedSession")))
@interface TruliooCoreAuthorizationErrorUnauthenticatedSession : TruliooCoreAuthorizationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unauthenticatedSession __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAuthorizationErrorUnauthenticatedSession *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("ConfigurationError")))
@interface TruliooCoreConfigurationError : TruliooCoreTruliooError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationError.DocumentConfigurationFetchError")))
@interface TruliooCoreConfigurationErrorDocumentConfigurationFetchError : TruliooCoreConfigurationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)documentConfigurationFetchError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreConfigurationErrorDocumentConfigurationFetchError *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationError.FeatureConfigurationFetchError")))
@interface TruliooCoreConfigurationErrorFeatureConfigurationFetchError : TruliooCoreConfigurationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)featureConfigurationFetchError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreConfigurationErrorFeatureConfigurationFetchError *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("DocumentError")))
@interface TruliooCoreDocumentError : TruliooCoreTruliooError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentError.ImageCouldNotBeUploaded")))
@interface TruliooCoreDocumentErrorImageCouldNotBeUploaded : TruliooCoreDocumentError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)imageCouldNotBeUploaded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreDocumentErrorImageCouldNotBeUploaded *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("HandoverError")))
@interface TruliooCoreHandoverError : TruliooCoreTruliooError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandoverError.InvalidQrCode")))
@interface TruliooCoreHandoverErrorInvalidQrCode : TruliooCoreHandoverError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)invalidQrCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreHandoverErrorInvalidQrCode *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandoverError.InvalidRedirectUrl")))
@interface TruliooCoreHandoverErrorInvalidRedirectUrl : TruliooCoreHandoverError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)invalidRedirectUrl __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreHandoverErrorInvalidRedirectUrl *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandoverError.MobileStepsError")))
@interface TruliooCoreHandoverErrorMobileStepsError : TruliooCoreHandoverError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mobileStepsError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreHandoverErrorMobileStepsError *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandoverError.VerificationError")))
@interface TruliooCoreHandoverErrorVerificationError : TruliooCoreHandoverError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)verificationError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreHandoverErrorVerificationError *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ITruliooErrorError")))
@interface TruliooCoreITruliooErrorError : TruliooCoreTruliooError
- (instancetype)initWithCode:(int32_t)code message:(NSString * _Nullable)message transactionId:(NSString *)transactionId __attribute__((swift_name("init(code:message:transactionId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (TruliooCoreITruliooErrorError *)doCopyCode:(int32_t)code message:(NSString * _Nullable)message transactionId:(NSString *)transactionId __attribute__((swift_name("doCopy(code:message:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ITruliooErrorException")))
@interface TruliooCoreITruliooErrorException : TruliooCoreTruliooError
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (TruliooCoreITruliooErrorException *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("SessionError")))
@interface TruliooCoreSessionError : TruliooCoreTruliooError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionError.SessionCreationError")))
@interface TruliooCoreSessionErrorSessionCreationError : TruliooCoreSessionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sessionCreationError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreSessionErrorSessionCreationError *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionError.SessionStateIsInvalid")))
@interface TruliooCoreSessionErrorSessionStateIsInvalid : TruliooCoreSessionError
- (instancetype)initWithType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionError.SessionSubmissionError")))
@interface TruliooCoreSessionErrorSessionSubmissionError : TruliooCoreSessionError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sessionSubmissionError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreSessionErrorSessionSubmissionError *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooError.Create")))
@interface TruliooCoreTruliooErrorCreate : TruliooCoreTruliooError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)create __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreTruliooErrorCreate *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooError.Update")))
@interface TruliooCoreTruliooErrorUpdate : TruliooCoreTruliooError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)update __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreTruliooErrorUpdate *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("ICustomerConfig")))
@protocol TruliooCoreICustomerConfig
@required
- (NSArray<TruliooCoreDocumentCaptureTypeV2_1 *> *)acceptedDocumentTypes __attribute__((swift_name("acceptedDocumentTypes()")));
- (void)updateDocumentTypeConfigResponse:(TruliooCoreAPIContractCustomerConfigDocumentTypesResponse *)response __attribute__((swift_name("updateDocumentTypeConfig(response:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerConfig")))
@interface TruliooCoreCustomerConfig : TruliooCoreBase <TruliooCoreICustomerConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<TruliooCoreDocumentCaptureTypeV2_1 *> *)acceptedDocumentTypes __attribute__((swift_name("acceptedDocumentTypes()")));
- (void)updateDocumentTypeConfigResponse:(TruliooCoreAPIContractCustomerConfigDocumentTypesResponse *)response __attribute__((swift_name("updateDocumentTypeConfig(response:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentCaptureType")))
@interface TruliooCoreDocumentCaptureType : TruliooCoreKotlinEnum<TruliooCoreDocumentCaptureType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreDocumentCaptureTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreDocumentCaptureType *driversLicense __attribute__((swift_name("driversLicense")));
@property (class, readonly) TruliooCoreDocumentCaptureType *passport __attribute__((swift_name("passport")));
@property (class, readonly) TruliooCoreDocumentCaptureType *idCard __attribute__((swift_name("idCard")));
@property (class, readonly) TruliooCoreDocumentCaptureType *residencePermit __attribute__((swift_name("residencePermit")));
@property (class, readonly) TruliooCoreDocumentCaptureType *none __attribute__((swift_name("none")));
@property (class, readonly) TruliooCoreDocumentCaptureType *error __attribute__((swift_name("error")));
+ (TruliooCoreKotlinArray<TruliooCoreDocumentCaptureType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentCaptureType.Companion")))
@interface TruliooCoreDocumentCaptureTypeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreDocumentCaptureTypeCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreDocumentCaptureType *)getCaptureTypeDocumentType:(TruliooCoreDocumentType *)documentType __attribute__((swift_name("getCaptureType(documentType:)")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentCaptureTypeV2_1")))
@interface TruliooCoreDocumentCaptureTypeV2_1 : TruliooCoreKotlinEnum<TruliooCoreDocumentCaptureTypeV2_1 *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreDocumentCaptureTypeV2_1Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreDocumentCaptureTypeV2_1 *driversLicense __attribute__((swift_name("driversLicense")));
@property (class, readonly) TruliooCoreDocumentCaptureTypeV2_1 *passport __attribute__((swift_name("passport")));
@property (class, readonly) TruliooCoreDocumentCaptureTypeV2_1 *idCard __attribute__((swift_name("idCard")));
+ (TruliooCoreKotlinArray<TruliooCoreDocumentCaptureTypeV2_1 *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentCaptureTypeV2_1.Companion")))
@interface TruliooCoreDocumentCaptureTypeV2_1Companion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreDocumentCaptureTypeV2_1Companion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentType")))
@interface TruliooCoreDocumentType : TruliooCoreKotlinEnum<TruliooCoreDocumentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreDocumentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreDocumentType *driversLicense __attribute__((swift_name("driversLicense")));
@property (class, readonly) TruliooCoreDocumentType *passport __attribute__((swift_name("passport")));
@property (class, readonly) TruliooCoreDocumentType *governmentId __attribute__((swift_name("governmentId")));
+ (TruliooCoreKotlinArray<TruliooCoreDocumentType *> *)values __attribute__((swift_name("values()")));
- (NSString *)displayName __attribute__((swift_name("displayName()")));
@property (readonly) TruliooCoreDocumentCaptureType *captureType __attribute__((swift_name("captureType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentType.Companion")))
@interface TruliooCoreDocumentTypeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreDocumentTypeCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreDocumentType *)getDocumentTypeCaptureType:(TruliooCoreDocumentCaptureType *)captureType __attribute__((swift_name("getDocumentType(captureType:)")));
- (TruliooCoreDocumentType *)getDocumentTypeV2_1CaptureType:(TruliooCoreDocumentCaptureTypeV2_1 *)captureType __attribute__((swift_name("getDocumentTypeV2_1(captureType:)")));
@end

__attribute__((swift_name("IFeatureConfig")))
@protocol TruliooCoreIFeatureConfig
@required
- (BOOL)isDocAutoCaptureEnabled __attribute__((swift_name("isDocAutoCaptureEnabled()")));
- (BOOL)isPassportAutoCaptureEnabled __attribute__((swift_name("isPassportAutoCaptureEnabled()")));
- (BOOL)isSelfieAutoCaptureEnabled __attribute__((swift_name("isSelfieAutoCaptureEnabled()")));
- (void)updateFeatureConfigResponse:(TruliooCoreAPIContractFeatureConfigResponse *)response __attribute__((swift_name("updateFeatureConfig(response:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureConfig")))
@interface TruliooCoreFeatureConfig : TruliooCoreBase <TruliooCoreIFeatureConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isDocAutoCaptureEnabled __attribute__((swift_name("isDocAutoCaptureEnabled()")));
- (BOOL)isPassportAutoCaptureEnabled __attribute__((swift_name("isPassportAutoCaptureEnabled()")));
- (BOOL)isSelfieAutoCaptureEnabled __attribute__((swift_name("isSelfieAutoCaptureEnabled()")));
- (void)updateFeatureConfigResponse:(TruliooCoreAPIContractFeatureConfigResponse *)response __attribute__((swift_name("updateFeatureConfig(response:)")));
@end

__attribute__((swift_name("IImageManager")))
@protocol TruliooCoreIImageManager
@required
- (void)addUploadedImageTypeType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("addUploadedImageType(type:)")));
- (BOOL)isUploadComplete __attribute__((swift_name("isUploadComplete()")));
@end

__attribute__((swift_name("ISession")))
@protocol TruliooCoreISession
@required
- (NSString * _Nullable)accessOrNull __attribute__((swift_name("accessOrNull()")));
- (id<TruliooCoreISession>)authorizeRefreshToken:(NSString *)refreshToken accessToken:(NSString *)accessToken workflow:(TruliooCoreWorkflow *)workflow __attribute__((swift_name("authorize(refreshToken:accessToken:workflow:)")));
- (id<TruliooCoreISession>)captureType:(TruliooCoreSessionImageType *)type images:(TruliooCoreKotlinArray<id<TruliooCoreIImageParcel>> *)images __attribute__((swift_name("capture(type:images:)")));
- (NSArray<id<TruliooCoreIImageParcel>> *)capturedType:(TruliooCoreSessionImageType *)type __attribute__((swift_name("captured(type:)")));
- (TruliooCoreStep * _Nullable)currentStepOrNull __attribute__((swift_name("currentStepOrNull()")));
- (NSString * _Nullable)idForStepStepType:(TruliooCoreAPIContractStepType *)stepType __attribute__((swift_name("idForStep(stepType:)")));
- (BOOL)isAuthenticated __attribute__((swift_name("isAuthenticated()")));
- (NSString * _Nullable)refreshOrNull __attribute__((swift_name("refreshOrNull()")));
- (id<TruliooCoreISession>)reset __attribute__((swift_name("reset()")));
- (id<TruliooCoreISession>)resetForNewQrCode __attribute__((swift_name("resetForNewQrCode()")));
- (id<TruliooCoreISession>)startStepStep:(TruliooCoreStep *)step __attribute__((swift_name("startStep(step:)")));
- (NSString * _Nullable)transactionIdOrNull __attribute__((swift_name("transactionIdOrNull()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVerifiedStatusStatus:(TruliooCoreAPIContractTransactionStatus *)status completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateVerifiedStatus(status:completionHandler:)")));
- (id<TruliooCoreISession>)useCaptureTypeCaptureType:(TruliooCoreDocumentCaptureType *)captureType __attribute__((swift_name("useCaptureType(captureType:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifiedStatusWithCompletionHandler:(void (^)(TruliooCoreVerifiedStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifiedStatus(completionHandler:)")));
- (TruliooCoreWorkflow * _Nullable)workflowOrNull __attribute__((swift_name("workflowOrNull()")));
@property (readonly) TruliooCoreDocumentCaptureType * _Nullable captureType __attribute__((swift_name("captureType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageManager")))
@interface TruliooCoreImageManager : TruliooCoreBase <TruliooCoreIImageManager>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addUploadedImageTypeType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("addUploadedImageType(type:)")));
- (BOOL)isUploadComplete __attribute__((swift_name("isUploadComplete()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IssuingCountries")))
@interface TruliooCoreIssuingCountries : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuingCountries __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIssuingCountries *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<NSString *> *COUNTRIES __attribute__((swift_name("COUNTRIES")));
@property (readonly) NSArray<NSString *> *USA_STATES __attribute__((swift_name("USA_STATES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session")))
@interface TruliooCoreSession : TruliooCoreBase <TruliooCoreISession>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreSessionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)accessOrNull __attribute__((swift_name("accessOrNull()")));
- (id<TruliooCoreISession>)authorizeRefreshToken:(NSString *)refreshToken accessToken:(NSString *)accessToken workflow:(TruliooCoreWorkflow *)workflow __attribute__((swift_name("authorize(refreshToken:accessToken:workflow:)")));
- (id<TruliooCoreISession>)captureType:(TruliooCoreSessionImageType *)type images:(TruliooCoreKotlinArray<id<TruliooCoreIImageParcel>> *)images __attribute__((swift_name("capture(type:images:)")));
- (NSArray<id<TruliooCoreIImageParcel>> *)capturedType:(TruliooCoreSessionImageType *)type __attribute__((swift_name("captured(type:)")));
- (TruliooCoreStep * _Nullable)currentStepOrNull __attribute__((swift_name("currentStepOrNull()")));
- (NSString * _Nullable)idForStepStepType:(TruliooCoreAPIContractStepType *)stepType __attribute__((swift_name("idForStep(stepType:)")));
- (BOOL)isAuthenticated __attribute__((swift_name("isAuthenticated()")));
- (NSString * _Nullable)refreshOrNull __attribute__((swift_name("refreshOrNull()")));
- (id<TruliooCoreISession>)reset __attribute__((swift_name("reset()")));
- (id<TruliooCoreISession>)resetForNewQrCode __attribute__((swift_name("resetForNewQrCode()")));
- (id<TruliooCoreISession>)startStepStep:(TruliooCoreStep *)step __attribute__((swift_name("startStep(step:)")));
- (NSString * _Nullable)transactionIdOrNull __attribute__((swift_name("transactionIdOrNull()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVerifiedStatusStatus:(TruliooCoreAPIContractTransactionStatus *)status completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateVerifiedStatus(status:completionHandler:)")));
- (id<TruliooCoreISession>)useCaptureTypeCaptureType:(TruliooCoreDocumentCaptureType *)captureType __attribute__((swift_name("useCaptureType(captureType:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifiedStatusWithCompletionHandler:(void (^)(TruliooCoreVerifiedStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifiedStatus(completionHandler:)")));
- (TruliooCoreWorkflow * _Nullable)workflowOrNull __attribute__((swift_name("workflowOrNull()")));
@property TruliooCoreDocumentCaptureType * _Nullable captureType __attribute__((swift_name("captureType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session.Companion")))
@interface TruliooCoreSessionCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreSessionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionImageType")))
@interface TruliooCoreSessionImageType : TruliooCoreKotlinEnum<TruliooCoreSessionImageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreSessionImageType *documentFront __attribute__((swift_name("documentFront")));
@property (class, readonly) TruliooCoreSessionImageType *documentBack __attribute__((swift_name("documentBack")));
@property (class, readonly) TruliooCoreSessionImageType *selfie __attribute__((swift_name("selfie")));
+ (TruliooCoreKotlinArray<TruliooCoreSessionImageType *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step")))
@interface TruliooCoreStep : TruliooCoreBase
- (instancetype)initWithId:(NSString *)id type:(TruliooCoreAPIContractStepType *)type status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("init(id:type:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreStepCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreStep *)doCopyId:(NSString *)id type:(TruliooCoreAPIContractStepType *)type status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("doCopy(id:type:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property TruliooCoreAPIContractStepStatus *status __attribute__((swift_name("status")));
@property (readonly) TruliooCoreAPIContractStepType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step.Companion")))
@interface TruliooCoreStepCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreStepCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifiedStatus")))
@interface TruliooCoreVerifiedStatus : TruliooCoreKotlinEnum<TruliooCoreVerifiedStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreVerifiedStatus *accepted __attribute__((swift_name("accepted")));
@property (class, readonly) TruliooCoreVerifiedStatus *declined __attribute__((swift_name("declined")));
@property (class, readonly) TruliooCoreVerifiedStatus *review __attribute__((swift_name("review")));
@property (class, readonly) TruliooCoreVerifiedStatus *error __attribute__((swift_name("error")));
+ (TruliooCoreKotlinArray<TruliooCoreVerifiedStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("ILogger")))
@protocol TruliooCoreILogger
@required
- (void)debugMessage:(NSString *(^)(void))message __attribute__((swift_name("debug(message:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)errorException:(TruliooCoreKotlinException * _Nullable)exception error:(NSError * _Nullable * _Nullable)error message:(NSString *(^)(void))message __attribute__((swift_name("error(exception:message:)")));
- (void)infoMessage:(NSString *(^)(void))message __attribute__((swift_name("info(message:)")));
- (NSArray<TruliooCoreLog *> *)remote __attribute__((swift_name("remote()")));
- (void)warningMessage:(NSString *(^)(void))message __attribute__((swift_name("warning(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLogger")))
@interface TruliooCoreCoreLogger : TruliooCoreBase <TruliooCoreILogger>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)debugMessage:(NSString *(^)(void))message __attribute__((swift_name("debug(message:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)errorException:(TruliooCoreKotlinException * _Nullable)exception error:(NSError * _Nullable * _Nullable)error message:(NSString *(^)(void))message __attribute__((swift_name("error(exception:message:)")));
- (void)infoMessage:(NSString *(^)(void))message __attribute__((swift_name("info(message:)")));
- (NSArray<TruliooCoreLog *> *)remote __attribute__((swift_name("remote()")));
- (void)warningMessage:(NSString *(^)(void))message __attribute__((swift_name("warning(message:)")));
@end

__attribute__((swift_name("IRegistry")))
@protocol TruliooCoreIRegistry
@required
- (BOOL)containsClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("contains(clazz:)")));
- (id)generateClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("generate(clazz:)")));
- (id _Nullable)generateOrNullClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("generateOrNull(clazz:)")));
- (TruliooCoreInstance * _Nullable)instanceOrNullClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("instanceOrNull(clazz:)")));
- (NSArray<TruliooCoreInstance *> *)list __attribute__((swift_name("list()")));
- (void)validate __attribute__((swift_name("validate()")));
@end

__attribute__((swift_name("InstanceRegistry")))
@interface TruliooCoreInstanceRegistry : TruliooCoreBase <TruliooCoreIRegistry>
- (instancetype)initWithInstance:(TruliooCoreKotlinArray<TruliooCoreInstance *> *)instance __attribute__((swift_name("init(instance:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("contains(clazz:)")));
- (id)generateClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("generate(clazz:)")));
- (TruliooCoreInstance * _Nullable)instanceOrNullClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("instanceOrNull(clazz:)")));
- (NSArray<TruliooCoreInstance *> *)list __attribute__((swift_name("list()")));
- (void)validate __attribute__((swift_name("validate()")));
@end

__attribute__((swift_name("CoreRegistry")))
@interface TruliooCoreCoreRegistry : TruliooCoreInstanceRegistry
- (instancetype)initWithInstance:(TruliooCoreKotlinArray<TruliooCoreInstance *> *)instance __attribute__((swift_name("init(instance:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)generateOrNullClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("generateOrNull(clazz:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device")))
@interface TruliooCoreDevice : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)clientId __attribute__((swift_name("clientId()")));
- (NSString *)manufacture __attribute__((swift_name("manufacture()")));
- (NSString *)model __attribute__((swift_name("model()")));
- (NSString *)platform __attribute__((swift_name("platform()")));
- (NSString *)software __attribute__((swift_name("software()")));
- (NSString *)source __attribute__((swift_name("source()")));
@end

__attribute__((swift_name("IEnvironmentConfig")))
@protocol TruliooCoreIEnvironmentConfig
@required
- (void)setTargetTarget:(TruliooCoreEnvironments *)target __attribute__((swift_name("setTarget(target:)")));
- (TruliooCoreEnvironments *)target __attribute__((swift_name("target()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnvironmentConfig")))
@interface TruliooCoreEnvironmentConfig : TruliooCoreBase <TruliooCoreIEnvironmentConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setTargetTarget:(TruliooCoreEnvironments *)target __attribute__((swift_name("setTarget(target:)")));
- (TruliooCoreEnvironments *)target __attribute__((swift_name("target()")));
@end

__attribute__((swift_name("Environments")))
@interface TruliooCoreEnvironments : TruliooCoreBase
@property (class, readonly, getter=companion) TruliooCoreEnvironmentsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) TruliooCoreEnvironmentsENVIRONMENT *name __attribute__((swift_name("name")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environments.Beta")))
@interface TruliooCoreEnvironmentsBeta : TruliooCoreEnvironments
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)beta __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreEnvironmentsBeta *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environments.Companion")))
@interface TruliooCoreEnvironmentsCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreEnvironmentsCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreEnvironments *)findEnvArg:(NSString *)envArg __attribute__((swift_name("find(envArg:)")));
- (NSString *)hostEnvArg:(TruliooCoreEnvironmentsENVIRONMENT *)envArg __attribute__((swift_name("host(envArg:)")));
@property (readonly) NSString *CURRENT_VERSION __attribute__((swift_name("CURRENT_VERSION")));
@property (readonly) NSString *HOST_NAME __attribute__((swift_name("HOST_NAME")));
@property (readonly) NSString *INTERNAL_DOMAIN __attribute__((swift_name("INTERNAL_DOMAIN")));
@property (readonly) NSString *PROD_DOMAIN __attribute__((swift_name("PROD_DOMAIN")));
@property (readonly) NSString *PROTOCOL __attribute__((swift_name("PROTOCOL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environments.ENVIRONMENT")))
@interface TruliooCoreEnvironmentsENVIRONMENT : TruliooCoreKotlinEnum<TruliooCoreEnvironmentsENVIRONMENT *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreEnvironmentsENVIRONMENT *internal __attribute__((swift_name("internal")));
@property (class, readonly) TruliooCoreEnvironmentsENVIRONMENT *beta __attribute__((swift_name("beta")));
@property (class, readonly) TruliooCoreEnvironmentsENVIRONMENT *release_ __attribute__((swift_name("release_")));
+ (TruliooCoreKotlinArray<TruliooCoreEnvironmentsENVIRONMENT *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environments.Internal")))
@interface TruliooCoreEnvironmentsInternal : TruliooCoreEnvironments
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)internal __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreEnvironmentsInternal *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environments.Release")))
@interface TruliooCoreEnvironmentsRelease : TruliooCoreEnvironments
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)release_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreEnvironmentsRelease *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log")))
@interface TruliooCoreLog : TruliooCoreBase
- (instancetype)initWithType:(NSString *)type log:(NSString *)log __attribute__((swift_name("init(type:log:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreLogCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreLog *)doCopyType:(NSString *)type log:(NSString *)log __attribute__((swift_name("doCopy(type:log:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *log __attribute__((swift_name("log")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log.Companion")))
@interface TruliooCoreLogCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLogCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("ILocale")))
@protocol TruliooCoreILocale
@required
- (NSString *)formatCountryCountry:(NSString *)country __attribute__((swift_name("formatCountry(country:)")));
- (NSString *)formatLanguageLanguage:(NSString *)language __attribute__((swift_name("formatLanguage(language:)")));
- (NSArray<NSString *> *)formatLcidStringResult:(id<TruliooCoreKotlinMatchResult>)result __attribute__((swift_name("formatLcidString(result:)")));
- (NSString *)formatScriptScript:(NSString *)script __attribute__((swift_name("formatScript(script:)")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *script __attribute__((swift_name("script")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ILocaleCompanion")))
@interface TruliooCoreILocaleCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreILocaleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKotlinRegex *LANGUAGE_REGEX __attribute__((swift_name("LANGUAGE_REGEX")));
@property (readonly) TruliooCoreKotlinRegex *REGION_REGEX __attribute__((swift_name("REGION_REGEX")));
@property (readonly) TruliooCoreKotlinRegex *RFC5646_REGEX __attribute__((swift_name("RFC5646_REGEX")));
@property (readonly) TruliooCoreKotlinRegex *SCRIPT_REGEX __attribute__((swift_name("SCRIPT_REGEX")));
@end

__attribute__((swift_name("ILocalized")))
@protocol TruliooCoreILocalized
@required
- (NSString *)getId:(NSString *)id __attribute__((swift_name("get(id:)")));
@property (readonly) TruliooCoreLocale *locale __attribute__((swift_name("locale")));
@end

__attribute__((swift_name("ILocalizedStrings")))
@protocol TruliooCoreILocalizedStrings
@required
- (TruliooCoreLocalized *)getLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("get(lcid:)")));
- (TruliooCoreLocalized *)getLocale:(TruliooCoreLocale *)locale __attribute__((swift_name("get(locale:)")));
- (TruliooCoreLocalized *)getString:(NSString *)string __attribute__((swift_name("get(string:)")));
- (NSString *)withLocaleLocaleString:(NSString *)localeString id:(NSString *)id __attribute__((swift_name("withLocale(localeString:id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Lcid")))
@interface TruliooCoreLcid : TruliooCoreBase <TruliooCoreILocale>
- (instancetype)initWithLanguage:(NSString *)language script:(NSString * _Nullable)script country:(NSString * _Nullable)country __attribute__((swift_name("init(language:script:country:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (instancetype _Nullable)initWithLcid:(NSString *)lcid error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("init(lcid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreLcidCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *lcid __attribute__((swift_name("lcid")));
@property (readonly) NSString *script __attribute__((swift_name("script")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Lcid.Companion")))
@interface TruliooCoreLcidCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLcidCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Locale")))
@interface TruliooCoreLocale : TruliooCoreBase <TruliooCoreILocale>
@property (class, readonly, getter=companion) TruliooCoreLocaleCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreLcid *)toLcid __attribute__((swift_name("toLcid()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *script __attribute__((swift_name("script")));
@end

__attribute__((swift_name("Locale.Chinese")))
@interface TruliooCoreLocaleChinese : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleChineseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.ChineseChina")))
@interface TruliooCoreLocaleChineseChina : TruliooCoreLocaleChinese
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)china __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleChineseChina *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.ChineseCompanion")))
@interface TruliooCoreLocaleChineseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleChineseCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleChinese *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.ChineseTaiwan")))
@interface TruliooCoreLocaleChineseTaiwan : TruliooCoreLocaleChinese
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)taiwan __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleChineseTaiwan *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.Companion")))
@interface TruliooCoreLocaleCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocale *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
- (TruliooCoreLocale *)byLcidLcid_:(NSString *)lcid __attribute__((swift_name("byLcid(lcid_:)")));
@end

__attribute__((swift_name("Locale.Dutch")))
@interface TruliooCoreLocaleDutch : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleDutchCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.DutchBelgium")))
@interface TruliooCoreLocaleDutchBelgium : TruliooCoreLocaleDutch
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)belgium __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleDutchBelgium *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.DutchCompanion")))
@interface TruliooCoreLocaleDutchCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleDutchCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleDutch *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.DutchNetherlands")))
@interface TruliooCoreLocaleDutchNetherlands : TruliooCoreLocaleDutch
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)netherlands __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleDutchNetherlands *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.English")))
@interface TruliooCoreLocaleEnglish : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleEnglishCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.EnglishCanada")))
@interface TruliooCoreLocaleEnglishCanada : TruliooCoreLocaleEnglish
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canada __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleEnglishCanada *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.EnglishCompanion")))
@interface TruliooCoreLocaleEnglishCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleEnglishCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleEnglish *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.EnglishUnitedKingdom")))
@interface TruliooCoreLocaleEnglishUnitedKingdom : TruliooCoreLocaleEnglish
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unitedKingdom __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleEnglishUnitedKingdom *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.EnglishUnitedStates")))
@interface TruliooCoreLocaleEnglishUnitedStates : TruliooCoreLocaleEnglish
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unitedStates __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleEnglishUnitedStates *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.French")))
@interface TruliooCoreLocaleFrench : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleFrenchCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.FrenchCompanion")))
@interface TruliooCoreLocaleFrenchCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleFrenchCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleFrench *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.FrenchFrance")))
@interface TruliooCoreLocaleFrenchFrance : TruliooCoreLocaleFrench
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)france __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleFrenchFrance *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.German")))
@interface TruliooCoreLocaleGerman : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleGermanCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.GermanCompanion")))
@interface TruliooCoreLocaleGermanCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleGermanCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleGerman *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.GermanGermany")))
@interface TruliooCoreLocaleGermanGermany : TruliooCoreLocaleGerman
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)germany __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleGermanGermany *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.Italian")))
@interface TruliooCoreLocaleItalian : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleItalianCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.ItalianCompanion")))
@interface TruliooCoreLocaleItalianCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleItalianCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleItalian *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.ItalianItaly")))
@interface TruliooCoreLocaleItalianItaly : TruliooCoreLocaleItalian
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)italy __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleItalianItaly *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.Japanese")))
@interface TruliooCoreLocaleJapanese : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleJapaneseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.JapaneseCompanion")))
@interface TruliooCoreLocaleJapaneseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleJapaneseCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleJapanese *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.JapaneseJapan")))
@interface TruliooCoreLocaleJapaneseJapan : TruliooCoreLocaleJapanese
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)japan __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleJapaneseJapan *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.Korean")))
@interface TruliooCoreLocaleKorean : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleKoreanCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.KoreanCompanion")))
@interface TruliooCoreLocaleKoreanCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleKoreanCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleKorean *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.KoreanSouthKorea")))
@interface TruliooCoreLocaleKoreanSouthKorea : TruliooCoreLocaleKorean
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)southKorea __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleKoreanSouthKorea *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.Polish")))
@interface TruliooCoreLocalePolish : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocalePolishCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.PolishCompanion")))
@interface TruliooCoreLocalePolishCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocalePolishCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocalePolish *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.PolishPoland")))
@interface TruliooCoreLocalePolishPoland : TruliooCoreLocalePolish
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)poland __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocalePolishPoland *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.Russian")))
@interface TruliooCoreLocaleRussian : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleRussianCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.RussianCompanion")))
@interface TruliooCoreLocaleRussianCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleRussianCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleRussian *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.RussianRussia")))
@interface TruliooCoreLocaleRussianRussia : TruliooCoreLocaleRussian
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)russia __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleRussianRussia *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.Spanish")))
@interface TruliooCoreLocaleSpanish : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleSpanishCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.SpanishCompanion")))
@interface TruliooCoreLocaleSpanishCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleSpanishCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleSpanish *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.SpanishMexico")))
@interface TruliooCoreLocaleSpanishMexico : TruliooCoreLocaleSpanish
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mexico __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleSpanishMexico *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.SpanishSpain")))
@interface TruliooCoreLocaleSpanishSpain : TruliooCoreLocaleSpanish
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)spain __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleSpanishSpain *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.Turkish")))
@interface TruliooCoreLocaleTurkish : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleTurkishCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.TurkishCompanion")))
@interface TruliooCoreLocaleTurkishCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleTurkishCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleTurkish *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.TurkishTurkey")))
@interface TruliooCoreLocaleTurkishTurkey : TruliooCoreLocaleTurkish
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)turkey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleTurkishTurkey *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((swift_name("Locale.Ukrainian")))
@interface TruliooCoreLocaleUkrainian : TruliooCoreLocale
@property (class, readonly, getter=companion) TruliooCoreLocaleUkrainianCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.UkrainianCompanion")))
@interface TruliooCoreLocaleUkrainianCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleUkrainianCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreLocaleUkrainian *)byLcidLcid:(TruliooCoreLcid *)lcid __attribute__((swift_name("byLcid(lcid:)")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.UkrainianUkraine")))
@interface TruliooCoreLocaleUkrainianUkraine : TruliooCoreLocaleUkrainian
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ukraine __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocaleUkrainianUkraine *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Localized")))
@interface TruliooCoreLocalized : TruliooCoreBase <TruliooCoreILocalized>
- (instancetype)initWithLocale:(TruliooCoreLocale *)locale __attribute__((swift_name("init(locale:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getId:(NSString *)id __attribute__((swift_name("get(id:)")));
@property (readonly) TruliooCoreLocale *locale __attribute__((swift_name("locale")));
@end

__attribute__((swift_name("LocalizedStrings")))
@interface TruliooCoreLocalizedStrings : TruliooCoreBase <TruliooCoreILocalizedStrings>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreLocalizedStringsCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreLocalized *)getLocale:(TruliooCoreLocale *)locale __attribute__((swift_name("get(locale:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TruliooCoreMutableDictionary<TruliooCoreLocale *, TruliooCoreLocalized *> *locales __attribute__((swift_name("locales")));
@end

__attribute__((swift_name("Singleton")))
@interface TruliooCoreSingleton<T> : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (T _Nullable)generate __attribute__((swift_name("generate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)resetInstance __attribute__((swift_name("resetInstance()")));
@property (readonly) T _Nullable instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedStrings.Companion")))
@interface TruliooCoreLocalizedStringsCompanion : TruliooCoreSingleton<id<TruliooCoreILocalizedStrings>>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreLocalizedStringsCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (TruliooCoreLocalizedStrings *)generate __attribute__((swift_name("generate()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)reset __attribute__((swift_name("reset()")));
@end

__attribute__((swift_name("IPKCE")))
@protocol TruliooCoreIPKCE
@required
- (TruliooCoreKotlinByteArray *)asciiInput:(NSString *)input __attribute__((swift_name("ascii(input:)")));
- (NSString *)base64UrlEncodeInput:(TruliooCoreKotlinByteArray *)input __attribute__((swift_name("base64UrlEncode(input:)")));
- (NSString *)generateVerifier __attribute__((swift_name("generateVerifier()")));
- (NSString *)getChallengeOwner:(id)owner __attribute__((swift_name("getChallenge(owner:)")));
- (NSString *)getVerifierOwner:(id)owner __attribute__((swift_name("getVerifier(owner:)")));
- (void)releaseOwner:(id)owner __attribute__((swift_name("release(owner:)")));
- (TruliooCoreKotlinByteArray *)sha256Input:(TruliooCoreKotlinByteArray *)input __attribute__((swift_name("sha256(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPKCECompanion")))
@interface TruliooCoreIPKCECompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIPKCECompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t CODE_SIZE __attribute__((swift_name("CODE_SIZE")));
@property (readonly) NSString *SHA_256 __attribute__((swift_name("SHA_256")));
@property (readonly) NSArray<id> *UNRESERVED_CHARS __attribute__((swift_name("UNRESERVED_CHARS")));
@property (readonly) NSArray<id> *URI_SAFE_CHARS __attribute__((swift_name("URI_SAFE_CHARS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PKCE")))
@interface TruliooCorePKCE : TruliooCoreBase <TruliooCoreIPKCE>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TruliooCoreKotlinByteArray *)asciiInput:(NSString *)input __attribute__((swift_name("ascii(input:)")));
- (NSString *)base64UrlEncodeInput:(TruliooCoreKotlinByteArray *)input __attribute__((swift_name("base64UrlEncode(input:)")));
- (NSString *)generateVerifier __attribute__((swift_name("generateVerifier()")));
- (NSString *)getChallengeOwner:(id)owner __attribute__((swift_name("getChallenge(owner:)")));
- (NSString *)getVerifierOwner:(id)owner __attribute__((swift_name("getVerifier(owner:)")));
- (void)releaseOwner:(id)owner __attribute__((swift_name("release(owner:)")));
- (TruliooCoreKotlinByteArray *)sha256Input:(TruliooCoreKotlinByteArray *)input __attribute__((swift_name("sha256(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract")))
@interface TruliooCoreAPIContract : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aPIContract __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContract *shared __attribute__((swift_name("shared")));
- (NSString *)replaceUncommonStringData:(NSString *)data __attribute__((swift_name("replaceUncommonString(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.Audit")))
@interface TruliooCoreAPIContractAudit : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)audit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAudit *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuditConsent")))
@interface TruliooCoreAPIContractAuditConsent : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)consent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuditConsent *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuditConsentRequest")))
@interface TruliooCoreAPIContractAuditConsentRequest : TruliooCoreBase
- (instancetype)initWithConsent:(BOOL)consent __attribute__((swift_name("init(consent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuditConsentRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractAuditConsentRequest *)doCopyConsent:(BOOL)consent __attribute__((swift_name("doCopy(consent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL consent __attribute__((swift_name("consent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuditConsentRequestCompanion")))
@interface TruliooCoreAPIContractAuditConsentRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuditConsentRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.Auth")))
@interface TruliooCoreAPIContractAuth : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)auth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuth *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthChallenge")))
@interface TruliooCoreAPIContractAuthChallenge : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)challenge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthChallenge *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthChallengeRequest")))
@interface TruliooCoreAPIContractAuthChallengeRequest : TruliooCoreBase
- (instancetype)initWithShortcode:(NSString *)shortcode codeChallenge:(NSString *)codeChallenge codeChallengeMethod:(TruliooCoreAPIContractAuthChallengeMethod *)codeChallengeMethod __attribute__((swift_name("init(shortcode:codeChallenge:codeChallengeMethod:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthChallengeRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractAuthChallengeRequest *)doCopyShortcode:(NSString *)shortcode codeChallenge:(NSString *)codeChallenge codeChallengeMethod:(TruliooCoreAPIContractAuthChallengeMethod *)codeChallengeMethod __attribute__((swift_name("doCopy(shortcode:codeChallenge:codeChallengeMethod:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *codeChallenge __attribute__((swift_name("codeChallenge")));
@property (readonly) TruliooCoreAPIContractAuthChallengeMethod *codeChallengeMethod __attribute__((swift_name("codeChallengeMethod")));
@property (readonly) NSString *shortcode __attribute__((swift_name("shortcode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthChallengeRequestCompanion")))
@interface TruliooCoreAPIContractAuthChallengeRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthChallengeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthChallengeResponse")))
@interface TruliooCoreAPIContractAuthChallengeResponse : TruliooCoreBase
- (instancetype)initWithAuthorizationCode:(NSString *)authorizationCode __attribute__((swift_name("init(authorizationCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthChallengeResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractAuthChallengeResponse *)doCopyAuthorizationCode:(NSString *)authorizationCode __attribute__((swift_name("doCopy(authorizationCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authorizationCode __attribute__((swift_name("authorizationCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthChallengeResponseCompanion")))
@interface TruliooCoreAPIContractAuthChallengeResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthChallengeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthChallengeMethod")))
@interface TruliooCoreAPIContractAuthChallengeMethod : TruliooCoreKotlinEnum<TruliooCoreAPIContractAuthChallengeMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthChallengeMethodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreAPIContractAuthChallengeMethod *s256 __attribute__((swift_name("s256")));
+ (TruliooCoreKotlinArray<TruliooCoreAPIContractAuthChallengeMethod *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthChallengeMethodCompanion")))
@interface TruliooCoreAPIContractAuthChallengeMethodCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthChallengeMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthGRANT")))
@interface TruliooCoreAPIContractAuthGRANT : TruliooCoreKotlinEnum<TruliooCoreAPIContractAuthGRANT *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthGRANTCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreAPIContractAuthGRANT *bearer __attribute__((swift_name("bearer")));
+ (TruliooCoreKotlinArray<TruliooCoreAPIContractAuthGRANT *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *format __attribute__((swift_name("format")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthGRANTCompanion")))
@interface TruliooCoreAPIContractAuthGRANTCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthGRANTCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthRefresh")))
@interface TruliooCoreAPIContractAuthRefresh : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)refresh __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthRefresh *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthRefreshRequest")))
@interface TruliooCoreAPIContractAuthRefreshRequest : TruliooCoreBase
- (instancetype)initWithClientId:(NSString *)clientId grantType:(NSString *)grantType __attribute__((swift_name("init(clientId:grantType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthRefreshRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractAuthRefreshRequest *)doCopyClientId:(NSString *)clientId grantType:(NSString *)grantType __attribute__((swift_name("doCopy(clientId:grantType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString *grantType __attribute__((swift_name("grantType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthRefreshRequestCompanion")))
@interface TruliooCoreAPIContractAuthRefreshRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthRefreshRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthRefreshResponse")))
@interface TruliooCoreAPIContractAuthRefreshResponse : TruliooCoreBase
- (instancetype)initWithAccessToken:(NSString *)accessToken tokenType:(NSString *)tokenType expiresIn:(int32_t)expiresIn __attribute__((swift_name("init(accessToken:tokenType:expiresIn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthRefreshResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractAuthRefreshResponse *)doCopyAccessToken:(NSString *)accessToken tokenType:(NSString *)tokenType expiresIn:(int32_t)expiresIn __attribute__((swift_name("doCopy(accessToken:tokenType:expiresIn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) int32_t expiresIn __attribute__((swift_name("expiresIn")));
@property (readonly) NSString *tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthRefreshResponseCompanion")))
@interface TruliooCoreAPIContractAuthRefreshResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthRefreshResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthRequest")))
@interface TruliooCoreAPIContractAuthRequest : TruliooCoreBase
- (instancetype)initWithClientId:(NSString *)clientId clientVersion:(NSString *)clientVersion grantType:(NSString *)grantType __attribute__((swift_name("init(clientId:clientVersion:grantType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractAuthRequest *)doCopyClientId:(NSString *)clientId clientVersion:(NSString *)clientVersion grantType:(NSString *)grantType __attribute__((swift_name("doCopy(clientId:clientVersion:grantType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString *clientVersion __attribute__((swift_name("clientVersion")));
@property (readonly) NSString *grantType __attribute__((swift_name("grantType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthRequestCompanion")))
@interface TruliooCoreAPIContractAuthRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthResponse")))
@interface TruliooCoreAPIContractAuthResponse : TruliooCoreBase
- (instancetype)initWithAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken tokenType:(NSString *)tokenType expiresIn:(int32_t)expiresIn __attribute__((swift_name("init(accessToken:refreshToken:tokenType:expiresIn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractAuthResponse *)doCopyAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken tokenType:(NSString *)tokenType expiresIn:(int32_t)expiresIn __attribute__((swift_name("doCopy(accessToken:refreshToken:tokenType:expiresIn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) int32_t expiresIn __attribute__((swift_name("expiresIn")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@property (readonly) NSString *tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthResponseCompanion")))
@interface TruliooCoreAPIContractAuthResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthVerify")))
@interface TruliooCoreAPIContractAuthVerify : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)verify __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthVerify *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthVerifyRequest")))
@interface TruliooCoreAPIContractAuthVerifyRequest : TruliooCoreBase
- (instancetype)initWithCodeVerifier:(NSString *)codeVerifier platform:(TruliooCoreAPIContractDevicePlatform *)platform deviceModel:(NSString *)deviceModel deviceManufacturer:(NSString *)deviceManufacturer deviceSoftware:(NSString *)deviceSoftware deviceLocale:(NSString *)deviceLocale __attribute__((swift_name("init(codeVerifier:platform:deviceModel:deviceManufacturer:deviceSoftware:deviceLocale:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractAuthVerifyRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractAuthVerifyRequest *)doCopyCodeVerifier:(NSString *)codeVerifier platform:(TruliooCoreAPIContractDevicePlatform *)platform deviceModel:(NSString *)deviceModel deviceManufacturer:(NSString *)deviceManufacturer deviceSoftware:(NSString *)deviceSoftware deviceLocale:(NSString *)deviceLocale __attribute__((swift_name("doCopy(codeVerifier:platform:deviceModel:deviceManufacturer:deviceSoftware:deviceLocale:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *codeVerifier __attribute__((swift_name("codeVerifier")));
@property (readonly) NSString *deviceLocale __attribute__((swift_name("deviceLocale")));
@property (readonly) NSString *deviceManufacturer __attribute__((swift_name("deviceManufacturer")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) NSString *deviceSoftware __attribute__((swift_name("deviceSoftware")));
@property (readonly) TruliooCoreAPIContractDevicePlatform *platform __attribute__((swift_name("platform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.AuthVerifyRequestCompanion")))
@interface TruliooCoreAPIContractAuthVerifyRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractAuthVerifyRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.CustomerConfig")))
@interface TruliooCoreAPIContractCustomerConfig : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)customerConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractCustomerConfig *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.CustomerConfigDocumentTypes")))
@interface TruliooCoreAPIContractCustomerConfigDocumentTypes : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)documentTypes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractCustomerConfigDocumentTypes *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.CustomerConfigDocumentTypesDocumentType")))
@interface TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentType : TruliooCoreBase
- (instancetype)initWithDeny:(NSArray<TruliooCoreDocumentCaptureTypeV2_1 *> *)deny __attribute__((swift_name("init(deny:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentTypeCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentType *)doCopyDeny:(NSArray<TruliooCoreDocumentCaptureTypeV2_1 *> *)deny __attribute__((swift_name("doCopy(deny:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<TruliooCoreDocumentCaptureTypeV2_1 *> *deny __attribute__((swift_name("deny")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.CustomerConfigDocumentTypesDocumentTypeCompanion")))
@interface TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentTypeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.CustomerConfigDocumentTypesResponse")))
@interface TruliooCoreAPIContractCustomerConfigDocumentTypesResponse : TruliooCoreBase
- (instancetype)initWithDocumentType:(TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentType *)documentType __attribute__((swift_name("init(documentType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractCustomerConfigDocumentTypesResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractCustomerConfigDocumentTypesResponse *)doCopyDocumentType:(TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentType *)documentType __attribute__((swift_name("doCopy(documentType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreAPIContractCustomerConfigDocumentTypesDocumentType *documentType __attribute__((swift_name("documentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.CustomerConfigDocumentTypesResponseCompanion")))
@interface TruliooCoreAPIContractCustomerConfigDocumentTypesResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractCustomerConfigDocumentTypesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.Device")))
@interface TruliooCoreAPIContractDevice : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)device __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractDevice *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.DevicePlatform")))
@interface TruliooCoreAPIContractDevicePlatform : TruliooCoreKotlinEnum<TruliooCoreAPIContractDevicePlatform *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreAPIContractDevicePlatformCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreAPIContractDevicePlatform *apple __attribute__((swift_name("apple")));
@property (class, readonly) TruliooCoreAPIContractDevicePlatform *google __attribute__((swift_name("google")));
@property (class, readonly) TruliooCoreAPIContractDevicePlatform *web __attribute__((swift_name("web")));
+ (TruliooCoreKotlinArray<TruliooCoreAPIContractDevicePlatform *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.DevicePlatformCompanion")))
@interface TruliooCoreAPIContractDevicePlatformCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractDevicePlatformCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreAPIContractDevicePlatform *)fromStringPlatform:(NSString *)platform __attribute__((swift_name("fromString(platform:)")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfig")))
@interface TruliooCoreAPIContractFeatureConfig : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)featureConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractFeatureConfig *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigDeviceData")))
@interface TruliooCoreAPIContractFeatureConfigDeviceData : TruliooCoreBase
- (instancetype)initWithSdkVersion:(NSString *)sdkVersion platform:(NSString *)platform __attribute__((swift_name("init(sdkVersion:platform:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractFeatureConfigDeviceDataCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractFeatureConfigDeviceData *)doCopySdkVersion:(NSString *)sdkVersion platform:(NSString *)platform __attribute__((swift_name("doCopy(sdkVersion:platform:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *sdkVersion __attribute__((swift_name("sdkVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigDeviceDataCompanion")))
@interface TruliooCoreAPIContractFeatureConfigDeviceDataCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractFeatureConfigDeviceDataCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("APIContractFeatureConfigIConfiguredFeature")))
@protocol TruliooCoreAPIContractFeatureConfigIConfiguredFeature
@required
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((swift_name("APIContractFeatureConfigICaptureFeature")))
@protocol TruliooCoreAPIContractFeatureConfigICaptureFeature <TruliooCoreAPIContractFeatureConfigIConfiguredFeature>
@required
@property (readonly, getter=auto) BOOL auto_ __attribute__((swift_name("auto_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigDocumentCapture")))
@interface TruliooCoreAPIContractFeatureConfigDocumentCapture : TruliooCoreBase <TruliooCoreAPIContractFeatureConfigICaptureFeature>
- (instancetype)initWithAuto:(BOOL)auto_ enabled:(BOOL)enabled __attribute__((swift_name("init(auto:enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractFeatureConfigDocumentCaptureCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractFeatureConfigDocumentCapture *)doCopyAuto:(BOOL)auto_ enabled:(BOOL)enabled __attribute__((swift_name("doCopy(auto:enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=auto) BOOL auto_ __attribute__((swift_name("auto_")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigDocumentCaptureCompanion")))
@interface TruliooCoreAPIContractFeatureConfigDocumentCaptureCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractFeatureConfigDocumentCaptureCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContractFeatureConfigIConfiguredFeatureCompanion")))
@interface TruliooCoreAPIContractFeatureConfigIConfiguredFeatureCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractFeatureConfigIConfiguredFeatureCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigPassportCapture")))
@interface TruliooCoreAPIContractFeatureConfigPassportCapture : TruliooCoreBase <TruliooCoreAPIContractFeatureConfigICaptureFeature>
- (instancetype)initWithAuto:(BOOL)auto_ enabled:(BOOL)enabled __attribute__((swift_name("init(auto:enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractFeatureConfigPassportCaptureCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractFeatureConfigPassportCapture *)doCopyAuto:(BOOL)auto_ enabled:(BOOL)enabled __attribute__((swift_name("doCopy(auto:enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=auto) BOOL auto_ __attribute__((swift_name("auto_")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigPassportCaptureCompanion")))
@interface TruliooCoreAPIContractFeatureConfigPassportCaptureCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractFeatureConfigPassportCaptureCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigRequest")))
@interface TruliooCoreAPIContractFeatureConfigRequest : TruliooCoreBase
- (instancetype)initWithVersion:(NSString *)version platform:(NSString *)platform __attribute__((swift_name("init(version:platform:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractFeatureConfigRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractFeatureConfigRequest *)doCopyVersion:(NSString *)version platform:(NSString *)platform __attribute__((swift_name("doCopy(version:platform:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigRequestCompanion")))
@interface TruliooCoreAPIContractFeatureConfigRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractFeatureConfigRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigResponse")))
@interface TruliooCoreAPIContractFeatureConfigResponse : TruliooCoreBase
- (instancetype)initWithConfigId:(NSString *)configId deviceData:(TruliooCoreAPIContractFeatureConfigDeviceData *)deviceData configurations:(NSArray<id<TruliooCoreAPIContractFeatureConfigIConfiguredFeature>> *)configurations __attribute__((swift_name("init(configId:deviceData:configurations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractFeatureConfigResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractFeatureConfigResponse *)doCopyConfigId:(NSString *)configId deviceData:(TruliooCoreAPIContractFeatureConfigDeviceData *)deviceData configurations:(NSArray<id<TruliooCoreAPIContractFeatureConfigIConfiguredFeature>> *)configurations __attribute__((swift_name("doCopy(configId:deviceData:configurations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *configId __attribute__((swift_name("configId")));
@property (readonly) NSArray<id<TruliooCoreAPIContractFeatureConfigIConfiguredFeature>> *configurations __attribute__((swift_name("configurations")));
@property (readonly) TruliooCoreAPIContractFeatureConfigDeviceData *deviceData __attribute__((swift_name("deviceData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigResponseCompanion")))
@interface TruliooCoreAPIContractFeatureConfigResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractFeatureConfigResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigSelfieCapture")))
@interface TruliooCoreAPIContractFeatureConfigSelfieCapture : TruliooCoreBase <TruliooCoreAPIContractFeatureConfigICaptureFeature>
- (instancetype)initWithAuto:(BOOL)auto_ enabled:(BOOL)enabled __attribute__((swift_name("init(auto:enabled:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractFeatureConfigSelfieCaptureCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractFeatureConfigSelfieCapture *)doCopyAuto:(BOOL)auto_ enabled:(BOOL)enabled __attribute__((swift_name("doCopy(auto:enabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=auto) BOOL auto_ __attribute__((swift_name("auto_")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.FeatureConfigSelfieCaptureCompanion")))
@interface TruliooCoreAPIContractFeatureConfigSelfieCaptureCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractFeatureConfigSelfieCaptureCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.Handover")))
@interface TruliooCoreAPIContractHandover : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)handover __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractHandover *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverQrCode")))
@interface TruliooCoreAPIContractHandoverQrCode : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)qrCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractHandoverQrCode *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverQrCodeRequest")))
@interface TruliooCoreAPIContractHandoverQrCodeRequest : TruliooCoreBase
- (instancetype)initWithRedirectUrl:(NSString *)redirectUrl __attribute__((swift_name("init(redirectUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractHandoverQrCodeRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractHandoverQrCodeRequest *)doCopyRedirectUrl:(NSString *)redirectUrl __attribute__((swift_name("doCopy(redirectUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *redirectUrl __attribute__((swift_name("redirectUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverQrCodeRequestCompanion")))
@interface TruliooCoreAPIContractHandoverQrCodeRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractHandoverQrCodeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverQrCodeResponse")))
@interface TruliooCoreAPIContractHandoverQrCodeResponse : TruliooCoreBase
- (instancetype)initWithUrl:(NSString *)url qrData:(NSString *)qrData __attribute__((swift_name("init(url:qrData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractHandoverQrCodeResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractHandoverQrCodeResponse *)doCopyUrl:(NSString *)url qrData:(NSString *)qrData __attribute__((swift_name("doCopy(url:qrData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *qrData __attribute__((swift_name("qrData")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverQrCodeResponseCompanion")))
@interface TruliooCoreAPIContractHandoverQrCodeResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractHandoverQrCodeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverStatus")))
@interface TruliooCoreAPIContractHandoverStatus : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)status __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractHandoverStatus *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverStatusResponse")))
@interface TruliooCoreAPIContractHandoverStatusResponse : TruliooCoreBase
- (instancetype)initWithSteps:(NSArray<TruliooCoreAPIContractHandoverStatusStepAttribute *> *)steps documentType:(TruliooCoreDocumentCaptureType *)documentType __attribute__((swift_name("init(steps:documentType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractHandoverStatusResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractHandoverStatusResponse *)doCopySteps:(NSArray<TruliooCoreAPIContractHandoverStatusStepAttribute *> *)steps documentType:(TruliooCoreDocumentCaptureType *)documentType __attribute__((swift_name("doCopy(steps:documentType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreDocumentCaptureType *documentType __attribute__((swift_name("documentType")));
@property (readonly) NSArray<TruliooCoreAPIContractHandoverStatusStepAttribute *> *steps __attribute__((swift_name("steps")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverStatusResponseCompanion")))
@interface TruliooCoreAPIContractHandoverStatusResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractHandoverStatusResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverStatusStepAttribute")))
@interface TruliooCoreAPIContractHandoverStatusStepAttribute : TruliooCoreBase
- (instancetype)initWithId:(NSString *)id type:(TruliooCoreAPIContractStepType *)type status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("init(id:type:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractHandoverStatusStepAttributeCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractHandoverStatusStepAttribute *)doCopyId:(NSString *)id type:(TruliooCoreAPIContractStepType *)type status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("doCopy(id:type:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) TruliooCoreAPIContractStepStatus *status __attribute__((swift_name("status")));
@property (readonly) TruliooCoreAPIContractStepType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.HandoverStatusStepAttributeCompanion")))
@interface TruliooCoreAPIContractHandoverStatusStepAttributeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractHandoverStatusStepAttributeCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.Step")))
@interface TruliooCoreAPIContractStep : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)step __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStep *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepMetadata")))
@interface TruliooCoreAPIContractStepMetadata : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)metadata __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStepMetadata *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepMetadataRequest")))
@interface TruliooCoreAPIContractStepMetadataRequest : TruliooCoreBase
- (instancetype)initWithMetadata:(NSDictionary<NSString *, NSString *> *)metadata __attribute__((swift_name("init(metadata:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractStepMetadataRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractStepMetadataRequest *)doCopyMetadata:(NSDictionary<NSString *, NSString *> *)metadata __attribute__((swift_name("doCopy(metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *metadata __attribute__((swift_name("metadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepMetadataRequestCompanion")))
@interface TruliooCoreAPIContractStepMetadataRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStepMetadataRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepRequest")))
@interface TruliooCoreAPIContractStepRequest : TruliooCoreBase
- (instancetype)initWithType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractStepRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractStepRequest *)doCopyType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("doCopy(type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreAPIContractStepType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepRequestCompanion")))
@interface TruliooCoreAPIContractStepRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStepRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepResponse")))
@interface TruliooCoreAPIContractStepResponse : TruliooCoreBase
- (instancetype)initWithStepId:(NSString *)stepId status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("init(stepId:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractStepResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractStepResponse *)doCopyStepId:(NSString *)stepId status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("doCopy(stepId:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreAPIContractStepStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *stepId __attribute__((swift_name("stepId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepResponseCompanion")))
@interface TruliooCoreAPIContractStepResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStepResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepStatus")))
@interface TruliooCoreAPIContractStepStatus : TruliooCoreKotlinEnum<TruliooCoreAPIContractStepStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreAPIContractStepStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *notStarted __attribute__((swift_name("notStarted")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *started __attribute__((swift_name("started")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *suspended __attribute__((swift_name("suspended")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *terminated __attribute__((swift_name("terminated")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *completed __attribute__((swift_name("completed")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *invalid __attribute__((swift_name("invalid")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *error __attribute__((swift_name("error")));
@property (class, readonly) TruliooCoreAPIContractStepStatus *restarted __attribute__((swift_name("restarted")));
+ (TruliooCoreKotlinArray<TruliooCoreAPIContractStepStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepStatusCompanion")))
@interface TruliooCoreAPIContractStepStatusCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStepStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepType")))
@interface TruliooCoreAPIContractStepType : TruliooCoreKotlinEnum<TruliooCoreAPIContractStepType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreAPIContractStepTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreAPIContractStepType *welcome __attribute__((swift_name("welcome")));
@property (class, readonly) TruliooCoreAPIContractStepType *documentSelect __attribute__((swift_name("documentSelect")));
@property (class, readonly) TruliooCoreAPIContractStepType *jurisdictionSelect __attribute__((swift_name("jurisdictionSelect")));
@property (class, readonly) TruliooCoreAPIContractStepType *documentInstruction __attribute__((swift_name("documentInstruction")));
@property (class, readonly) TruliooCoreAPIContractStepType *documentFront __attribute__((swift_name("documentFront")));
@property (class, readonly) TruliooCoreAPIContractStepType *documentBack __attribute__((swift_name("documentBack")));
@property (class, readonly) TruliooCoreAPIContractStepType *selfieInstruction __attribute__((swift_name("selfieInstruction")));
@property (class, readonly) TruliooCoreAPIContractStepType *selfie __attribute__((swift_name("selfie")));
@property (class, readonly) TruliooCoreAPIContractStepType *verification __attribute__((swift_name("verification")));
@property (class, readonly) TruliooCoreAPIContractStepType *desktopToMobile __attribute__((swift_name("desktopToMobile")));
@property (class, readonly) TruliooCoreAPIContractStepType *cameraDenied __attribute__((swift_name("cameraDenied")));
@property (class, readonly) TruliooCoreAPIContractStepType *error __attribute__((swift_name("error")));
@property (class, readonly) TruliooCoreAPIContractStepType *introduction __attribute__((swift_name("introduction")));
@property (class, readonly) TruliooCoreAPIContractStepType *biometricPolicy __attribute__((swift_name("biometricPolicy")));
+ (TruliooCoreKotlinArray<TruliooCoreAPIContractStepType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepTypeCompanion")))
@interface TruliooCoreAPIContractStepTypeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStepTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepUpdate")))
@interface TruliooCoreAPIContractStepUpdate : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)update __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStepUpdate *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepUpdateRequest")))
@interface TruliooCoreAPIContractStepUpdateRequest : TruliooCoreBase
- (instancetype)initWithStatus:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractStepUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractStepUpdateRequest *)doCopyStatus:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("doCopy(status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreAPIContractStepStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.StepUpdateRequestCompanion")))
@interface TruliooCoreAPIContractStepUpdateRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractStepUpdateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.Transaction")))
@interface TruliooCoreAPIContractTransaction : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transaction __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractTransaction *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionDecision")))
@interface TruliooCoreAPIContractTransactionDecision : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)decision __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractTransactionDecision *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionDecisionResponse")))
@interface TruliooCoreAPIContractTransactionDecisionResponse : TruliooCoreBase
- (instancetype)initWithStatus:(TruliooCoreAPIContractTransactionStatus *)status errors:(NSArray<NSString *> * _Nullable)errors __attribute__((swift_name("init(status:errors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractTransactionDecisionResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractTransactionDecisionResponse *)doCopyStatus:(TruliooCoreAPIContractTransactionStatus *)status errors:(NSArray<NSString *> * _Nullable)errors __attribute__((swift_name("doCopy(status:errors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) TruliooCoreAPIContractTransactionStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionDecisionResponseCompanion")))
@interface TruliooCoreAPIContractTransactionDecisionResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractTransactionDecisionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionRequest")))
@interface TruliooCoreAPIContractTransactionRequest : TruliooCoreBase
- (instancetype)initWithLocale:(NSString *)locale source:(NSString *)source deviceModel:(NSString *)deviceModel deviceManufacturer:(NSString *)deviceManufacturer deviceSoftware:(NSString *)deviceSoftware __attribute__((swift_name("init(locale:source:deviceModel:deviceManufacturer:deviceSoftware:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractTransactionRequestCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractTransactionRequest *)doCopyLocale:(NSString *)locale source:(NSString *)source deviceModel:(NSString *)deviceModel deviceManufacturer:(NSString *)deviceManufacturer deviceSoftware:(NSString *)deviceSoftware __attribute__((swift_name("doCopy(locale:source:deviceModel:deviceManufacturer:deviceSoftware:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *deviceManufacturer __attribute__((swift_name("deviceManufacturer")));
@property NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property NSString *deviceSoftware __attribute__((swift_name("deviceSoftware")));
@property (readonly) NSString *locale __attribute__((swift_name("locale")));
@property NSString *source __attribute__((swift_name("source")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionRequestCompanion")))
@interface TruliooCoreAPIContractTransactionRequestCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractTransactionRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionStatus")))
@interface TruliooCoreAPIContractTransactionStatus : TruliooCoreKotlinEnum<TruliooCoreAPIContractTransactionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreAPIContractTransactionStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreAPIContractTransactionStatus *accepted __attribute__((swift_name("accepted")));
@property (class, readonly) TruliooCoreAPIContractTransactionStatus *declined __attribute__((swift_name("declined")));
@property (class, readonly) TruliooCoreAPIContractTransactionStatus *review __attribute__((swift_name("review")));
@property (class, readonly) TruliooCoreAPIContractTransactionStatus *error __attribute__((swift_name("error")));
+ (TruliooCoreKotlinArray<TruliooCoreAPIContractTransactionStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionStatusCompanion")))
@interface TruliooCoreAPIContractTransactionStatusCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractTransactionStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(TruliooCoreKotlinArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionSubmit")))
@interface TruliooCoreAPIContractTransactionSubmit : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)submit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractTransactionSubmit *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionSubmitResponse")))
@interface TruliooCoreAPIContractTransactionSubmitResponse : TruliooCoreBase
- (instancetype)initWithTransactionId:(NSString *)transactionId __attribute__((swift_name("init(transactionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAPIContractTransactionSubmitResponseCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAPIContractTransactionSubmitResponse *)doCopyTransactionId:(NSString *)transactionId __attribute__((swift_name("doCopy(transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIContract.TransactionSubmitResponseCompanion")))
@interface TruliooCoreAPIContractTransactionSubmitResponseCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAPIContractTransactionSubmitResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("BaseAPI")))
@interface TruliooCoreBaseAPI : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreBaseAPICompanion *companion __attribute__((swift_name("companion")));
- (NSString *)authorizationLicense:(NSString *)license __attribute__((swift_name("authorization(license:)")));
- (NSString *)authorized __attribute__((swift_name("authorized()")));
- (NSString *)refresh __attribute__((swift_name("refresh()")));
@property (readonly) TruliooCoreKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("IAuditAPI")))
@protocol TruliooCoreIAuditAPI
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recordConsentRequest:(TruliooCoreAPIContractAuditConsentRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("recordConsent(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuditAPI")))
@interface TruliooCoreAuditAPI : TruliooCoreBaseAPI <TruliooCoreIAuditAPI>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreAuditAPICompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recordConsentRequest:(TruliooCoreAPIContractAuditConsentRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("recordConsent(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuditAPI.Companion")))
@interface TruliooCoreAuditAPICompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAuditAPICompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ROOT_ROUTE __attribute__((swift_name("ROOT_ROUTE")));
@end

__attribute__((swift_name("IAuthAPI")))
@protocol TruliooCoreIAuthAPI
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authLicense:(NSString *)license request:(TruliooCoreAPIContractAuthRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractAuthResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("auth(license:request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)challengeShortcode:(NSString *)shortcode completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractAuthChallengeResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("challenge(shortcode:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshRequest:(TruliooCoreAPIContractAuthRefreshRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractAuthRefreshResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refresh(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyAuthorizationCode:(NSString *)authorizationCode completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractAuthResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verify(authorizationCode:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthAPI")))
@interface TruliooCoreAuthAPI : TruliooCoreBaseAPI <TruliooCoreIAuthAPI>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authLicense:(NSString *)license request:(TruliooCoreAPIContractAuthRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractAuthResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("auth(license:request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)challengeShortcode:(NSString *)shortcode completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractAuthChallengeResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("challenge(shortcode:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshRequest:(TruliooCoreAPIContractAuthRefreshRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractAuthRefreshResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refresh(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyAuthorizationCode:(NSString *)authorizationCode completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractAuthResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verify(authorizationCode:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseAPI.Companion")))
@interface TruliooCoreBaseAPICompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreBaseAPICompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *VERSION_HEADER __attribute__((swift_name("VERSION_HEADER")));
@end

__attribute__((swift_name("ICustomerConfigAPI")))
@protocol TruliooCoreICustomerConfigAPI
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDocumentTypesConfigurationWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractCustomerConfigDocumentTypesResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDocumentTypesConfiguration(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerConfigAPI")))
@interface TruliooCoreCustomerConfigAPI : TruliooCoreBaseAPI <TruliooCoreICustomerConfigAPI>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreCustomerConfigAPICompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDocumentTypesConfigurationWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractCustomerConfigDocumentTypesResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDocumentTypesConfiguration(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerConfigAPI.Companion")))
@interface TruliooCoreCustomerConfigAPICompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreCustomerConfigAPICompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("IFeatureConfigAPI")))
@protocol TruliooCoreIFeatureConfigAPI
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigurationRequest:(TruliooCoreAPIContractFeatureConfigRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractFeatureConfigResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfiguration(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureConfigAPI")))
@interface TruliooCoreFeatureConfigAPI : TruliooCoreBaseAPI <TruliooCoreIFeatureConfigAPI>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreFeatureConfigAPICompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigurationRequest:(TruliooCoreAPIContractFeatureConfigRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractFeatureConfigResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfiguration(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeatureConfigAPI.Companion")))
@interface TruliooCoreFeatureConfigAPICompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreFeatureConfigAPICompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("IHandoverAPI")))
@protocol TruliooCoreIHandoverAPI
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)qrCodeRedirectUrl:(NSString *)redirectUrl completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractHandoverQrCodeResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("qrCode(redirectUrl:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stepStatusWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractHandoverStatusResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stepStatus(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HandoverAPI")))
@interface TruliooCoreHandoverAPI : TruliooCoreBaseAPI <TruliooCoreIHandoverAPI>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)qrCodeRedirectUrl:(NSString *)redirectUrl completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractHandoverQrCodeResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("qrCode(redirectUrl:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stepStatusWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractHandoverStatusResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stepStatus(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClient")))
@interface TruliooCoreHttpClient : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreHttpClientCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClient.Companion")))
@interface TruliooCoreHttpClientCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreHttpClientCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKtor_client_coreHttpClient *)doInitEngine:(id<TruliooCoreKtor_client_coreHttpClientEngine> _Nullable)engine __attribute__((swift_name("doInit(engine:)")));
@property (readonly) NSString *HEADER_RETRY __attribute__((swift_name("HEADER_RETRY")));
@property (readonly) TruliooCoreKotlinx_serialization_jsonJson *JSON_CLIENT __attribute__((swift_name("JSON_CLIENT")));
@end

__attribute__((swift_name("ISessionAPI")))
@protocol TruliooCoreISessionAPI
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)decisionWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractTransactionDecisionResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("decision(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startRequest:(TruliooCoreAPIContractTransactionRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("start(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)submitWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractTransactionSubmitResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("submit(completionHandler:)")));
@end

__attribute__((swift_name("IStepAPI")))
@protocol TruliooCoreIStepAPI
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(TruliooCoreAPIContractStepRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractStepResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)metadataStepId:(NSString *)stepId request:(TruliooCoreAPIContractStepMetadataRequest *)request isError:(BOOL)isError completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("metadata(stepId:request:isError:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStepId:(NSString *)stepId request:(TruliooCoreAPIContractStepUpdateRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(stepId:request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadStepId:(NSString *)stepId imageType:(TruliooCoreAPIContractStepType *)imageType image:(TruliooCoreKotlinByteArray *)image completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(stepId:imageType:image:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JwtHandler")))
@interface TruliooCoreJwtHandler : TruliooCoreBase
- (instancetype)initWithJwt:(NSString *)jwt __attribute__((swift_name("init(jwt:)"))) __attribute__((objc_designated_initializer));
@property (readonly) TruliooCoreTruliooJwtHeader *header __attribute__((swift_name("header")));
@property (readonly) TruliooCoreTruliooJwtPayload *payload __attribute__((swift_name("payload")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionAPI")))
@interface TruliooCoreSessionAPI : TruliooCoreBaseAPI <TruliooCoreISessionAPI>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreSessionAPICompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)decisionWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractTransactionDecisionResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("decision(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startRequest:(TruliooCoreAPIContractTransactionRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("start(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)submitWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractTransactionSubmitResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("submit(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionAPI.Companion")))
@interface TruliooCoreSessionAPICompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreSessionAPICompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ROOT_ROUTE __attribute__((swift_name("ROOT_ROUTE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepAPI")))
@interface TruliooCoreStepAPI : TruliooCoreBaseAPI <TruliooCoreIStepAPI>
- (instancetype)initWithEngine:(id<TruliooCoreKtor_client_coreHttpClientEngine> _Nullable)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreStepAPICompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRequest:(TruliooCoreAPIContractStepRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreAPIContractStepResponse *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)metadataStepId:(NSString *)stepId request:(TruliooCoreAPIContractStepMetadataRequest *)request isError:(BOOL)isError completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("metadata(stepId:request:isError:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStepId:(NSString *)stepId request:(TruliooCoreAPIContractStepUpdateRequest *)request completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(stepId:request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadStepId:(NSString *)stepId imageType:(TruliooCoreAPIContractStepType *)imageType image:(TruliooCoreKotlinByteArray *)image completionHandler:(void (^)(TruliooCoreEither<TruliooCoreKotlinUnit *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(stepId:imageType:image:completionHandler:)")));
@property (readonly) id<TruliooCoreKtor_client_coreHttpClientEngine> _Nullable engine __attribute__((swift_name("engine")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepAPI.Companion")))
@interface TruliooCoreStepAPICompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreStepAPICompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *HEAD_ERROR __attribute__((swift_name("HEAD_ERROR")));
@property (readonly) NSString *ROOT_ROUTE __attribute__((swift_name("ROOT_ROUTE")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooJwtHeader")))
@interface TruliooCoreTruliooJwtHeader : TruliooCoreBase
- (instancetype)initWithKid:(NSString *)kid alg:(NSString *)alg __attribute__((swift_name("init(kid:alg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreTruliooJwtHeaderCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreTruliooJwtHeader *)doCopyKid:(NSString *)kid alg:(NSString *)alg __attribute__((swift_name("doCopy(kid:alg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *alg __attribute__((swift_name("alg")));
@property (readonly) NSString *kid __attribute__((swift_name("kid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooJwtHeader.Companion")))
@interface TruliooCoreTruliooJwtHeaderCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreTruliooJwtHeaderCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooJwtPayload")))
@interface TruliooCoreTruliooJwtPayload : TruliooCoreBase
- (instancetype)initWithSub:(NSString *)sub aud:(NSString *)aud use:(NSString *)use iss:(NSString *)iss source:(NSString *)source exp:(int64_t)exp type:(NSString *)type iat:(int64_t)iat webhook:(NSString * _Nullable)webhook transactionId:(NSString *)transactionId isFromDesktop:(TruliooCoreBoolean * _Nullable)isFromDesktop __attribute__((swift_name("init(sub:aud:use:iss:source:exp:type:iat:webhook:transactionId:isFromDesktop:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreTruliooJwtPayloadCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreTruliooJwtPayload *)doCopySub:(NSString *)sub aud:(NSString *)aud use:(NSString *)use iss:(NSString *)iss source:(NSString *)source exp:(int64_t)exp type:(NSString *)type iat:(int64_t)iat webhook:(NSString * _Nullable)webhook transactionId:(NSString *)transactionId isFromDesktop:(TruliooCoreBoolean * _Nullable)isFromDesktop __attribute__((swift_name("doCopy(sub:aud:use:iss:source:exp:type:iat:webhook:transactionId:isFromDesktop:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *aud __attribute__((swift_name("aud")));
@property (readonly) int64_t exp __attribute__((swift_name("exp")));
@property (readonly) int64_t iat __attribute__((swift_name("iat")));
@property (readonly) TruliooCoreBoolean * _Nullable isFromDesktop __attribute__((swift_name("isFromDesktop")));
@property (readonly) NSString *iss __attribute__((swift_name("iss")));
@property (readonly) NSString *source __attribute__((swift_name("source")));
@property (readonly) NSString *sub __attribute__((swift_name("sub")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *use __attribute__((swift_name("use")));
@property (readonly) NSString * _Nullable webhook __attribute__((swift_name("webhook")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TruliooJwtPayload.Companion")))
@interface TruliooCoreTruliooJwtPayloadCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreTruliooJwtPayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("IMetadata")))
@protocol TruliooCoreIMetadata
@required
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaDataTypes")))
@interface TruliooCoreMetaDataTypes : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)metaDataTypes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreMetaDataTypes *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaDataTypes.CameraPermissionScreen")))
@interface TruliooCoreMetaDataTypesCameraPermissionScreen : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cameraPermissionScreen __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreMetaDataTypesCameraPermissionScreen *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaDataTypes.CameraPermissionScreenButtonAction")))
@interface TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction : TruliooCoreKotlinEnum<TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction *gotosettings __attribute__((swift_name("gotosettings")));
@property (class, readonly) TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction *mycameraisenabled __attribute__((swift_name("mycameraisenabled")));
@property (class, readonly) TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction *updatedmysettings __attribute__((swift_name("updatedmysettings")));
@property (class, readonly) TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction *cancel __attribute__((swift_name("cancel")));
+ (TruliooCoreKotlinArray<TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectionItem")))
@interface TruliooCoreDetectionItem : TruliooCoreBase
- (instancetype)initWithType:(TruliooCoreMLModelDocumentType *)type score:(float)score boundingBox:(TruliooCoreKotlinFloatArray * _Nullable)boundingBox __attribute__((swift_name("init(type:score:boundingBox:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreDetectionItem *)doCopyType:(TruliooCoreMLModelDocumentType *)type score:(float)score boundingBox:(TruliooCoreKotlinFloatArray * _Nullable)boundingBox __attribute__((swift_name("doCopy(type:score:boundingBox:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKotlinFloatArray * _Nullable boundingBox __attribute__((swift_name("boundingBox")));
@property (readonly) float score __attribute__((swift_name("score")));
@property (readonly) TruliooCoreMLModelDocumentType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("IRecognizer")))
@protocol TruliooCoreIRecognizer
@required
- (BOOL)isDeviceSupported __attribute__((swift_name("isDeviceSupported()")));
- (void)processFrameImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("processFrame(image:)")));
- (TruliooCoreRecognitionStatus *)status __attribute__((swift_name("status()")));
@end

__attribute__((swift_name("IModelManager")))
@protocol TruliooCoreIModelManager
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)decisionResults:(NSArray<TruliooCoreDetectionItem *> *)results completionHandler:(void (^)(TruliooCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("decision(results:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)detectModelInput:(id _Nullable)modelInput completionHandler:(void (^)(TruliooCoreEither<id, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("detect(modelInput:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postProcessModelOutput:(id _Nullable)modelOutput completionHandler:(void (^)(NSArray<TruliooCoreDetectionItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postProcess(modelOutput:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)preprocessParcel:(id<TruliooCoreIImageParcel>)parcel completionHandler:(void (^)(TruliooCoreEither<id, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("preprocess(parcel:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentRecognizer")))
@interface TruliooCoreDocumentRecognizer : TruliooCoreBase <TruliooCoreIRecognizer, TruliooCoreIModelManager>
- (instancetype)initWithDelegate:(id<TruliooCoreIDocumentRecognizer>)delegate frontDocument:(BOOL)frontDocument __attribute__((swift_name("init(delegate:frontDocument:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreDocumentRecognizerCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)decisionResults:(NSArray<TruliooCoreDetectionItem *> *)results completionHandler:(void (^)(TruliooCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("decision(results:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)detectModelInput:(MLMultiArray *)modelInput completionHandler:(void (^)(TruliooCoreEither<TruliooCoreCoreMLResult *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("detect(modelInput:completionHandler:)")));
- (BOOL)isDeviceSupported __attribute__((swift_name("isDeviceSupported()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postProcessModelOutput:(TruliooCoreCoreMLResult *)modelOutput completionHandler:(void (^)(NSArray<TruliooCoreDetectionItem *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postProcess(modelOutput:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)preprocessParcel:(id<TruliooCoreIImageParcel>)parcel completionHandler:(void (^)(TruliooCoreEither<MLMultiArray *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("preprocess(parcel:completionHandler:)")));
- (void)processFrameImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("processFrame(image:)")));
- (TruliooCoreRecognitionStatus *)status __attribute__((swift_name("status()")));
@property (readonly) id<TruliooCoreIDocumentRecognizer> delegate __attribute__((swift_name("delegate")));
@property (readonly) BOOL frontDocument __attribute__((swift_name("frontDocument")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentRecognizer.Companion")))
@interface TruliooCoreDocumentRecognizerCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreDocumentRecognizerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t IMAGE_SIZE __attribute__((swift_name("IMAGE_SIZE")));
@property (readonly) float RATIO __attribute__((swift_name("RATIO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceRecognizer")))
@interface TruliooCoreFaceRecognizer : TruliooCoreBase <TruliooCoreIRecognizer>
- (instancetype)initWithDelegate:(id<TruliooCoreIFaceRecognizer>)delegate __attribute__((swift_name("init(delegate:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isDeviceSupported __attribute__((swift_name("isDeviceSupported()")));
- (void)processFrameImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("processFrame(image:)")));
- (TruliooCoreRecognitionStatus *)status __attribute__((swift_name("status()")));
@property (readonly) id<TruliooCoreIFaceRecognizer> delegate __attribute__((swift_name("delegate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceRecognizerImpl")))
@interface TruliooCoreFaceRecognizerImpl : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)faceRecognizerImpl __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreFaceRecognizerImpl *shared __attribute__((swift_name("shared")));
- (void)initialize __attribute__((swift_name("initialize()")));
- (BOOL)isDeviceSupported __attribute__((swift_name("isDeviceSupported()")));
- (void)onResultProcessed __attribute__((swift_name("onResultProcessed()")));
- (void)processFrameImage:(id<TruliooCoreIImageParcel>)image onResult:(void (^)(VNRequest * _Nullable, NSError * _Nullable))onResult __attribute__((swift_name("processFrame(image:onResult:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (TruliooCoreRecognitionStatus *)status __attribute__((swift_name("status()")));
@end

__attribute__((swift_name("IDocumentRecognizer")))
@protocol TruliooCoreIDocumentRecognizer
@required
- (void)onDetected __attribute__((swift_name("onDetected()")));
- (void)onEmptyFrame __attribute__((swift_name("onEmptyFrame()")));
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onResultDocument:(TruliooCoreDocument *)document __attribute__((swift_name("onResult(document:)")));
@end

__attribute__((swift_name("IFaceRecognizer")))
@protocol TruliooCoreIFaceRecognizer
@required
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onResultFace:(TruliooCoreFace *)face __attribute__((swift_name("onResult(face:)")));
@end

__attribute__((swift_name("IMediaPipeFacialReference")))
@protocol TruliooCoreIMediaPipeFacialReference
@required
- (TruliooCorePercentageOffsetBox *)captureFaceBox __attribute__((swift_name("captureFaceBox()")));
- (BOOL)isCenteredInCamera __attribute__((swift_name("isCenteredInCamera()")));
- (BOOL)isHorizontalCentered __attribute__((swift_name("isHorizontalCentered()")));
- (BOOL)isVerticalCentered __attribute__((swift_name("isVerticalCentered()")));
@property (readonly) double horizontalFacingThreshold __attribute__((swift_name("horizontalFacingThreshold")));
@property (readonly) TruliooCoreKotlinArray<TruliooCoreMediaPipeLandmark *> *landmarkList __attribute__((swift_name("landmarkList")));
@property (readonly) double subjectCenteredThreshold __attribute__((swift_name("subjectCenteredThreshold")));
@property (readonly) double verticalFacingThreshold __attribute__((swift_name("verticalFacingThreshold")));
@end

__attribute__((swift_name("ImageRecognizer")))
@interface TruliooCoreImageRecognizer<M, T> : TruliooCoreBase <TruliooCoreIDocumentRecognizer, TruliooCoreIFaceRecognizer>
- (instancetype)initWithDelegate:(id<TruliooCoreIDetectionDelegate>)delegate __attribute__((swift_name("init(delegate:)"))) __attribute__((objc_designated_initializer));
- (void)manual __attribute__((swift_name("manual()")));
- (void)onDetected __attribute__((swift_name("onDetected()")));
- (void)onEmptyFrame __attribute__((swift_name("onEmptyFrame()")));
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onResultDocument:(TruliooCoreDocument *)document __attribute__((swift_name("onResult(document:)")));
- (void)onResultFace:(TruliooCoreFace *)face __attribute__((swift_name("onResult(face:)")));
- (void)processImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("process(image:)")));
- (void)uploadImageImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("uploadImage(image:)")));
@property BOOL isManualCapture __attribute__((swift_name("isManualCapture")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<TruliooCoreIRecognizer> recognizer __attribute__((swift_name("recognizer")));
@end

__attribute__((swift_name("ImageRecognizerType")))
@protocol TruliooCoreImageRecognizerType
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageRecognizerTypeDOCUMENT")))
@interface TruliooCoreImageRecognizerTypeDOCUMENT : TruliooCoreBase <TruliooCoreImageRecognizerType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOCUMENT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreImageRecognizerTypeDOCUMENT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageRecognizerTypePASSPORT")))
@interface TruliooCoreImageRecognizerTypePASSPORT : TruliooCoreBase <TruliooCoreImageRecognizerType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pASSPORT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreImageRecognizerTypePASSPORT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageRecognizerTypeSELFIE")))
@interface TruliooCoreImageRecognizerTypeSELFIE : TruliooCoreBase <TruliooCoreImageRecognizerType>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sELFIE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreImageRecognizerTypeSELFIE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageRect")))
@interface TruliooCoreImageRect : TruliooCoreBase
- (instancetype)initWithMinX:(double)minX minY:(double)minY maxX:(double)maxX maxY:(double)maxY __attribute__((swift_name("init(minX:minY:maxX:maxY:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreImageRect *)doCopyMinX:(double)minX minY:(double)minY maxX:(double)maxX maxY:(double)maxY __attribute__((swift_name("doCopy(minX:minY:maxX:maxY:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (double)height __attribute__((swift_name("height()")));
- (double)midX __attribute__((swift_name("midX()")));
- (double)midY __attribute__((swift_name("midY()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (double)width __attribute__((swift_name("width()")));
@property (readonly) double maxX __attribute__((swift_name("maxX")));
@property (readonly) double maxY __attribute__((swift_name("maxY")));
@property (readonly) double minX __attribute__((swift_name("minX")));
@property (readonly) double minY __attribute__((swift_name("minY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosFaceDetection")))
@interface TruliooCoreIosFaceDetection : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreIosFaceDetectionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosFaceDetection.Companion")))
@interface TruliooCoreIosFaceDetectionCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIosFaceDetectionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) double MAX_CENTER_X __attribute__((swift_name("MAX_CENTER_X")));
@property (readonly) double MAX_CENTER_Y __attribute__((swift_name("MAX_CENTER_Y")));
@property (readonly) double MAX_HEAD_ANGLE __attribute__((swift_name("MAX_HEAD_ANGLE")));
@property (readonly) double MINIMUM_CONFIDENCE __attribute__((swift_name("MINIMUM_CONFIDENCE")));
@property (readonly) double MIN_CENTER_X __attribute__((swift_name("MIN_CENTER_X")));
@property (readonly) double MIN_CENTER_Y __attribute__((swift_name("MIN_CENTER_Y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MLModelDocumentType")))
@interface TruliooCoreMLModelDocumentType : TruliooCoreKotlinEnum<TruliooCoreMLModelDocumentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreMLModelDocumentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreMLModelDocumentType *background __attribute__((swift_name("background")));
@property (class, readonly) TruliooCoreMLModelDocumentType *idCardFront __attribute__((swift_name("idCardFront")));
@property (class, readonly) TruliooCoreMLModelDocumentType *idCardBack __attribute__((swift_name("idCardBack")));
@property (class, readonly) TruliooCoreMLModelDocumentType *passport __attribute__((swift_name("passport")));
@property (class, readonly) TruliooCoreMLModelDocumentType *idPhoto __attribute__((swift_name("idPhoto")));
@property (class, readonly) TruliooCoreMLModelDocumentType *barcode __attribute__((swift_name("barcode")));
@property (class, readonly) TruliooCoreMLModelDocumentType *mrz __attribute__((swift_name("mrz")));
@property (class, readonly) TruliooCoreMLModelDocumentType *glareArtifact __attribute__((swift_name("glareArtifact")));
@property (class, readonly) TruliooCoreMLModelDocumentType *idCardVertical __attribute__((swift_name("idCardVertical")));
@property (class, readonly) TruliooCoreMLModelDocumentType *other __attribute__((swift_name("other")));
+ (TruliooCoreKotlinArray<TruliooCoreMLModelDocumentType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MLModelDocumentType.Companion")))
@interface TruliooCoreMLModelDocumentTypeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreMLModelDocumentTypeCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreMLModelDocumentType *)fromIndexIndex:(int32_t)index __attribute__((swift_name("fromIndex(index:)")));
- (TruliooCoreMLModelDocumentType *)fromStringDetectedLabel:(NSString *)detectedLabel __attribute__((swift_name("fromString(detectedLabel:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaPipeFacialReference")))
@interface TruliooCoreMediaPipeFacialReference : TruliooCoreBase <TruliooCoreIMediaPipeFacialReference>
- (instancetype)initWithLandmarkList:(TruliooCoreKotlinArray<TruliooCoreMediaPipeLandmark *> *)landmarkList __attribute__((swift_name("init(landmarkList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreMediaPipeFacialReferenceCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCorePercentageOffsetBox *)captureFaceBox __attribute__((swift_name("captureFaceBox()")));
- (BOOL)isCenteredInCamera __attribute__((swift_name("isCenteredInCamera()")));
- (BOOL)isHorizontalCentered __attribute__((swift_name("isHorizontalCentered()")));
- (BOOL)isVerticalCentered __attribute__((swift_name("isVerticalCentered()")));
@property (readonly) double horizontalFacingThreshold __attribute__((swift_name("horizontalFacingThreshold")));
@property (readonly) TruliooCoreKotlinArray<TruliooCoreMediaPipeLandmark *> *landmarkList __attribute__((swift_name("landmarkList")));
@property (readonly) double subjectCenteredThreshold __attribute__((swift_name("subjectCenteredThreshold")));
@property (readonly) double verticalFacingThreshold __attribute__((swift_name("verticalFacingThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaPipeFacialReference.Companion")))
@interface TruliooCoreMediaPipeFacialReferenceCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreMediaPipeFacialReferenceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) double EXPECTED_NOSE_X __attribute__((swift_name("EXPECTED_NOSE_X")));
@property (readonly) double EXPECTED_NOSE_Y __attribute__((swift_name("EXPECTED_NOSE_Y")));
@property (readonly) int32_t FACE_BOTTOM __attribute__((swift_name("FACE_BOTTOM")));
@property (readonly) int32_t FACE_LEFT __attribute__((swift_name("FACE_LEFT")));
@property (readonly) int32_t FACE_RIGHT __attribute__((swift_name("FACE_RIGHT")));
@property (readonly) int32_t FACE_TOP __attribute__((swift_name("FACE_TOP")));
@property (readonly) int32_t LEFT_EYE_INSIDE __attribute__((swift_name("LEFT_EYE_INSIDE")));
@property (readonly) int32_t LEFT_EYE_OUTSIDE __attribute__((swift_name("LEFT_EYE_OUTSIDE")));
@property (readonly) int32_t NOSE_TIP __attribute__((swift_name("NOSE_TIP")));
@property (readonly) int32_t RIGHT_EYE_INSIDE __attribute__((swift_name("RIGHT_EYE_INSIDE")));
@property (readonly) int32_t RIGHT_EYE_OUTSIDE __attribute__((swift_name("RIGHT_EYE_OUTSIDE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaPipeLandmark")))
@interface TruliooCoreMediaPipeLandmark : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) float visibility __attribute__((swift_name("visibility")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@property (readonly) float z __attribute__((swift_name("z")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecognitionStatus")))
@interface TruliooCoreRecognitionStatus : TruliooCoreKotlinEnum<TruliooCoreRecognitionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreRecognitionStatus *notStarted __attribute__((swift_name("notStarted")));
@property (class, readonly) TruliooCoreRecognitionStatus *processing __attribute__((swift_name("processing")));
@property (class, readonly) TruliooCoreRecognitionStatus *ready __attribute__((swift_name("ready")));
@property (class, readonly) TruliooCoreRecognitionStatus *error __attribute__((swift_name("error")));
+ (TruliooCoreKotlinArray<TruliooCoreRecognitionStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("IModelInitializer")))
@protocol TruliooCoreIModelInitializer
@required
- (void)initializeConfig __attribute__((swift_name("initializeConfig()")));
- (void)initializeModel __attribute__((swift_name("initializeModel()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMLRecognizer")))
@interface TruliooCoreCoreMLRecognizer : TruliooCoreBase <TruliooCoreIModelInitializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)coreMLRecognizer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreCoreMLRecognizer *shared __attribute__((swift_name("shared")));
- (TruliooCoreCoreMLResult * _Nullable)detectWithModelInput:(MLMultiArray *)input __attribute__((swift_name("detectWithModel(input:)")));
- (void)initializeConfig __attribute__((swift_name("initializeConfig()")));
- (void)initializeModel __attribute__((swift_name("initializeModel()")));
- (void)onProcessBegin __attribute__((swift_name("onProcessBegin()")));
- (void)onResultProcessed __attribute__((swift_name("onResultProcessed()")));
- (NSArray<TruliooCoreDetectionItem *> *)processResultsModelOutput:(TruliooCoreCoreMLResult *)modelOutput __attribute__((swift_name("processResults(modelOutput:)")));
- (void)setupBridgeBridge:(id<TruliooCoreISwiftBridge>)bridge __attribute__((swift_name("setupBridge(bridge:)")));
- (TruliooCoreRecognitionStatus *)status __attribute__((swift_name("status()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMLResult")))
@interface TruliooCoreCoreMLResult : TruliooCoreBase
- (instancetype)initWithScores:(MLMultiArray *)scores boxes:(MLMultiArray *)boxes __attribute__((swift_name("init(scores:boxes:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreCoreMLResult *)doCopyScores:(MLMultiArray *)scores boxes:(MLMultiArray *)boxes __attribute__((swift_name("doCopy(scores:boxes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MLMultiArray *boxes __attribute__((swift_name("boxes")));
@property (readonly) MLMultiArray *scores __attribute__((swift_name("scores")));
@end

__attribute__((swift_name("ISwiftBridge")))
@protocol TruliooCoreISwiftBridge
@required
- (TruliooCoreCoreMLResult * _Nullable)detectDocumentInput:(MLMultiArray *)input __attribute__((swift_name("detectDocument(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputProcessor")))
@interface TruliooCoreInputProcessor : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inputProcessor __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreInputProcessor *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputProcessor.MultiArray")))
@interface TruliooCoreInputProcessorMultiArray : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)multiArray __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreInputProcessorMultiArray *shared __attribute__((swift_name("shared")));
- (MLMultiArray * _Nullable)createStructure:(NSArray<NSArray<NSArray<NSArray<TruliooCoreFloat *> *> *> *> *)structure __attribute__((swift_name("create(structure:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputProcessor.Pixels")))
@interface TruliooCoreInputProcessorPixels : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pixels __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreInputProcessorPixels *shared __attribute__((swift_name("shared")));
- (NSArray<TruliooCoreUByte *> * _Nullable)dataImage:(UIImage *)image __attribute__((swift_name("data(image:)")));
- (NSArray<TruliooCoreFloat *> * _Nullable)filterChannelData:(NSArray<TruliooCoreUByte *> *)data channel:(TruliooCorePixelChannel *)channel __attribute__((swift_name("filterChannel(data:channel:)")));
- (float)getMeanValues:(NSArray<TruliooCoreFloat *> *)values __attribute__((swift_name("getMean(values:)")));
- (float)getVarianceValues:(NSArray<TruliooCoreFloat *> *)values mean:(float)mean __attribute__((swift_name("getVariance(values:mean:)")));
- (NSArray<NSArray<NSArray<NSArray<TruliooCoreFloat *> *> *> *> * _Nullable)normalize4DData:(NSArray<TruliooCoreUByte *> *)data imageSize:(int32_t)imageSize __attribute__((swift_name("normalize4D(data:imageSize:)")));
- (NSArray<TruliooCoreFloat *> * _Nullable)normalizeChannelData:(NSArray<TruliooCoreUByte *> *)data channel:(TruliooCorePixelChannel *)channel __attribute__((swift_name("normalizeChannel(data:channel:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MLDataConfig")))
@interface TruliooCoreMLDataConfig : TruliooCoreBase
- (instancetype)initWithNumClasses:(int32_t)numClasses classNames:(NSArray<NSString *> *)classNames gridSizes:(NSArray<NSArray<TruliooCoreInt *> *> *)gridSizes aspectRatios:(NSArray<TruliooCoreFloat *> *)aspectRatios scales:(NSArray<TruliooCoreFloat *> *)scales scaleFactors:(NSArray<TruliooCoreFloat *> *)scaleFactors gridIndexBorders:(NSMutableArray<TruliooCoreInt *> * _Nullable)gridIndexBorders anchorSizes:(NSMutableArray<NSMutableArray<NSMutableArray<TruliooCoreFloat *> *> *> * _Nullable)anchorSizes __attribute__((swift_name("init(numClasses:classNames:gridSizes:aspectRatios:scales:scaleFactors:gridIndexBorders:anchorSizes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreMLDataConfigCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreMLDataConfig *)doCopyNumClasses:(int32_t)numClasses classNames:(NSArray<NSString *> *)classNames gridSizes:(NSArray<NSArray<TruliooCoreInt *> *> *)gridSizes aspectRatios:(NSArray<TruliooCoreFloat *> *)aspectRatios scales:(NSArray<TruliooCoreFloat *> *)scales scaleFactors:(NSArray<TruliooCoreFloat *> *)scaleFactors gridIndexBorders:(NSMutableArray<TruliooCoreInt *> * _Nullable)gridIndexBorders anchorSizes:(NSMutableArray<NSMutableArray<NSMutableArray<TruliooCoreFloat *> *> *> * _Nullable)anchorSizes __attribute__((swift_name("doCopy(numClasses:classNames:gridSizes:aspectRatios:scales:scaleFactors:gridIndexBorders:anchorSizes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<NSMutableArray<NSMutableArray<TruliooCoreFloat *> *> *> * _Nullable anchorSizes __attribute__((swift_name("anchorSizes")));
@property NSArray<TruliooCoreFloat *> *aspectRatios __attribute__((swift_name("aspectRatios")));
@property (readonly) NSArray<NSString *> *classNames __attribute__((swift_name("classNames")));
@property (readonly) NSMutableArray<TruliooCoreInt *> * _Nullable gridIndexBorders __attribute__((swift_name("gridIndexBorders")));
@property (readonly) NSArray<NSArray<TruliooCoreInt *> *> *gridSizes __attribute__((swift_name("gridSizes")));
@property (readonly) int32_t numClasses __attribute__((swift_name("numClasses")));
@property (readonly) NSArray<TruliooCoreFloat *> *scaleFactors __attribute__((swift_name("scaleFactors")));
@property (readonly) NSArray<TruliooCoreFloat *> *scales __attribute__((swift_name("scales")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MLDataConfig.Companion")))
@interface TruliooCoreMLDataConfigCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreMLDataConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputProcessor")))
@interface TruliooCoreOutputProcessor : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)outputProcessor __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreOutputProcessor *shared __attribute__((swift_name("shared")));
- (BOOL)isDocumentCenteredBox:(TruliooCoreKotlinFloatArray * _Nullable)box __attribute__((swift_name("isDocumentCentered(box:)")));
- (NSArray<TruliooCoreKotlinFloatArray *> *)organizeBoxesRawBoxes:(MLMultiArray *)rawBoxes __attribute__((swift_name("organizeBoxes(rawBoxes:)")));
- (NSArray<NSArray<TruliooCoreFloat *> *> *)organizeScoresRawScores:(MLMultiArray *)rawScores __attribute__((swift_name("organizeScores(rawScores:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PixelChannel")))
@interface TruliooCorePixelChannel : TruliooCoreKotlinEnum<TruliooCorePixelChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCorePixelChannel *red __attribute__((swift_name("red")));
@property (class, readonly) TruliooCorePixelChannel *green __attribute__((swift_name("green")));
@property (class, readonly) TruliooCorePixelChannel *blue __attribute__((swift_name("blue")));
@property (class, readonly) TruliooCorePixelChannel *alpha __attribute__((swift_name("alpha")));
+ (TruliooCoreKotlinArray<TruliooCorePixelChannel *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value_ __attribute__((swift_name("value_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analysis")))
@interface TruliooCoreAnalysis : TruliooCoreBase
- (instancetype)initWithBarcode:(TruliooCoreAnalysisStatus *)barcode face:(TruliooCoreAnalysisStatus *)face mrz:(TruliooCoreAnalysisStatus *)mrz isBlurred:(BOOL)isBlurred __attribute__((swift_name("init(barcode:face:mrz:isBlurred:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAnalysisCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreAnalysis *)doCopyBarcode:(TruliooCoreAnalysisStatus *)barcode face:(TruliooCoreAnalysisStatus *)face mrz:(TruliooCoreAnalysisStatus *)mrz isBlurred:(BOOL)isBlurred __attribute__((swift_name("doCopy(barcode:face:mrz:isBlurred:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreAnalysisStatus *barcode __attribute__((swift_name("barcode")));
@property (readonly) TruliooCoreAnalysisStatus *face __attribute__((swift_name("face")));
@property (readonly) BOOL isBlurred __attribute__((swift_name("isBlurred")));
@property (readonly) TruliooCoreAnalysisStatus *mrz __attribute__((swift_name("mrz")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analysis.Companion")))
@interface TruliooCoreAnalysisCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAnalysisCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalysisStatus")))
@interface TruliooCoreAnalysisStatus : TruliooCoreKotlinEnum<TruliooCoreAnalysisStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreAnalysisStatus *detected __attribute__((swift_name("detected")));
@property (class, readonly) TruliooCoreAnalysisStatus *notavailable __attribute__((swift_name("notavailable")));
@property (class, readonly) TruliooCoreAnalysisStatus *notdetected __attribute__((swift_name("notdetected")));
+ (TruliooCoreKotlinArray<TruliooCoreAnalysisStatus *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Barcode")))
@interface TruliooCoreBarcode : TruliooCoreBase
- (instancetype)initWithAddress:(NSString * _Nullable)address type:(TruliooCoreBarcodeType * _Nullable)type dateOfBirth:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfBirth dateOfExpiry:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfExpiry dateOfIssue:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfIssue documentNumber:(NSString * _Nullable)documentNumber documentNumberAdditional:(NSString * _Nullable)documentNumberAdditional employer:(NSString * _Nullable)employer firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName fullName:(NSString * _Nullable)fullName issuingAuthority:(NSString * _Nullable)issuingAuthority jurisdiction:(NSString * _Nullable)jurisdiction maritalStatus:(NSString * _Nullable)maritalStatus middleName:(NSString * _Nullable)middleName nationality:(NSString * _Nullable)nationality personalId:(NSString * _Nullable)personalId placeOfBirth:(NSString * _Nullable)placeOfBirth race:(NSString * _Nullable)race profession:(NSString * _Nullable)profession postalCode:(NSString * _Nullable)postalCode religion:(NSString * _Nullable)religion residentialStatus:(NSString * _Nullable)residentialStatus sex:(NSString * _Nullable)sex street:(NSString * _Nullable)street status:(TruliooCoreBarcodeStatus *)status __attribute__((swift_name("init(address:type:dateOfBirth:dateOfExpiry:dateOfIssue:documentNumber:documentNumberAdditional:employer:firstName:lastName:fullName:issuingAuthority:jurisdiction:maritalStatus:middleName:nationality:personalId:placeOfBirth:race:profession:postalCode:religion:residentialStatus:sex:street:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreBarcodeCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreBarcode *)doCopyAddress:(NSString * _Nullable)address type:(TruliooCoreBarcodeType * _Nullable)type dateOfBirth:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfBirth dateOfExpiry:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfExpiry dateOfIssue:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfIssue documentNumber:(NSString * _Nullable)documentNumber documentNumberAdditional:(NSString * _Nullable)documentNumberAdditional employer:(NSString * _Nullable)employer firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName fullName:(NSString * _Nullable)fullName issuingAuthority:(NSString * _Nullable)issuingAuthority jurisdiction:(NSString * _Nullable)jurisdiction maritalStatus:(NSString * _Nullable)maritalStatus middleName:(NSString * _Nullable)middleName nationality:(NSString * _Nullable)nationality personalId:(NSString * _Nullable)personalId placeOfBirth:(NSString * _Nullable)placeOfBirth race:(NSString * _Nullable)race profession:(NSString * _Nullable)profession postalCode:(NSString * _Nullable)postalCode religion:(NSString * _Nullable)religion residentialStatus:(NSString * _Nullable)residentialStatus sex:(NSString * _Nullable)sex street:(NSString * _Nullable)street status:(TruliooCoreBarcodeStatus *)status __attribute__((swift_name("doCopy(address:type:dateOfBirth:dateOfExpiry:dateOfIssue:documentNumber:documentNumberAdditional:employer:firstName:lastName:fullName:issuingAuthority:jurisdiction:maritalStatus:middleName:nationality:personalId:placeOfBirth:race:profession:postalCode:religion:residentialStatus:sex:street:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfExpiry __attribute__((swift_name("dateOfExpiry")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfIssue __attribute__((swift_name("dateOfIssue")));
@property (readonly) NSString * _Nullable documentNumber __attribute__((swift_name("documentNumber")));
@property (readonly) NSString * _Nullable documentNumberAdditional __attribute__((swift_name("documentNumberAdditional")));
@property (readonly) NSString * _Nullable employer __attribute__((swift_name("employer")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString * _Nullable issuingAuthority __attribute__((swift_name("issuingAuthority")));
@property (readonly) NSString * _Nullable jurisdiction __attribute__((swift_name("jurisdiction")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable maritalStatus __attribute__((swift_name("maritalStatus")));
@property (readonly) NSString * _Nullable middleName __attribute__((swift_name("middleName")));
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));
@property (readonly) NSString * _Nullable personalId __attribute__((swift_name("personalId")));
@property (readonly) NSString * _Nullable placeOfBirth __attribute__((swift_name("placeOfBirth")));
@property (readonly) NSString * _Nullable postalCode __attribute__((swift_name("postalCode")));
@property (readonly) NSString * _Nullable profession __attribute__((swift_name("profession")));
@property (readonly) NSString * _Nullable race __attribute__((swift_name("race")));
@property (readonly) NSString * _Nullable religion __attribute__((swift_name("religion")));
@property (readonly) NSString * _Nullable residentialStatus __attribute__((swift_name("residentialStatus")));
@property (readonly) NSString * _Nullable sex __attribute__((swift_name("sex")));
@property (readonly) TruliooCoreBarcodeStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable street __attribute__((swift_name("street")));
@property (readonly) TruliooCoreBarcodeType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Barcode.Companion")))
@interface TruliooCoreBarcodeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreBarcodeCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BarcodeStatus")))
@interface TruliooCoreBarcodeStatus : TruliooCoreKotlinEnum<TruliooCoreBarcodeStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreBarcodeStatus *empty __attribute__((swift_name("empty")));
@property (class, readonly) TruliooCoreBarcodeStatus *uncertain __attribute__((swift_name("uncertain")));
@property (class, readonly) TruliooCoreBarcodeStatus *success __attribute__((swift_name("success")));
+ (TruliooCoreKotlinArray<TruliooCoreBarcodeStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BarcodeType")))
@interface TruliooCoreBarcodeType : TruliooCoreKotlinEnum<TruliooCoreBarcodeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreBarcodeType *aztec __attribute__((swift_name("aztec")));
@property (class, readonly) TruliooCoreBarcodeType *code128 __attribute__((swift_name("code128")));
@property (class, readonly) TruliooCoreBarcodeType *code39 __attribute__((swift_name("code39")));
@property (class, readonly) TruliooCoreBarcodeType *datamatrix __attribute__((swift_name("datamatrix")));
@property (class, readonly) TruliooCoreBarcodeType *ean13 __attribute__((swift_name("ean13")));
@property (class, readonly) TruliooCoreBarcodeType *ean8 __attribute__((swift_name("ean8")));
@property (class, readonly) TruliooCoreBarcodeType *itf __attribute__((swift_name("itf")));
@property (class, readonly) TruliooCoreBarcodeType *none __attribute__((swift_name("none")));
@property (class, readonly) TruliooCoreBarcodeType *pdf417 __attribute__((swift_name("pdf417")));
@property (class, readonly) TruliooCoreBarcodeType *qrcode __attribute__((swift_name("qrcode")));
@property (class, readonly) TruliooCoreBarcodeType *upca __attribute__((swift_name("upca")));
@property (class, readonly) TruliooCoreBarcodeType *upce __attribute__((swift_name("upce")));
+ (TruliooCoreKotlinArray<TruliooCoreBarcodeType *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoundingBox")))
@interface TruliooCoreBoundingBox : TruliooCoreBase
- (instancetype)initWithLeft:(int32_t)left top:(int32_t)top width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(left:top:width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreBoundingBoxCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreBoundingBox *)doCopyLeft:(int32_t)left top:(int32_t)top width:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(left:top:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t left __attribute__((swift_name("left")));
@property (readonly) int32_t top __attribute__((swift_name("top")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoundingBox.Companion")))
@interface TruliooCoreBoundingBoxCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreBoundingBoxCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("ICapturedImage")))
@protocol TruliooCoreICapturedImage
@required
@property (readonly) id<TruliooCoreIImageParcel> image __attribute__((swift_name("image")));
@end

__attribute__((swift_name("IRecognitionModel")))
@protocol TruliooCoreIRecognitionModel <TruliooCoreICapturedImage>
@required
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) TruliooCoreInt * _Nullable age __attribute__((swift_name("age")));
@property (readonly) TruliooCoreAnalysis * _Nullable analysis __attribute__((swift_name("analysis")));
@property (readonly) TruliooCoreBarcode * _Nullable barcode __attribute__((swift_name("barcode")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfExpiry __attribute__((swift_name("dateOfExpiry")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfIssue __attribute__((swift_name("dateOfIssue")));
@property (readonly) NSString * _Nullable documentNumber __attribute__((swift_name("documentNumber")));
@property (readonly) NSString * _Nullable documentNumberAdditional __attribute__((swift_name("documentNumberAdditional")));
@property (readonly) NSString * _Nullable employer __attribute__((swift_name("employer")));
@property (readonly) id<TruliooCoreIImageParcel> _Nullable face __attribute__((swift_name("face")));
@property (readonly) NSString * _Nullable fathersName __attribute__((swift_name("fathersName")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) TruliooCoreBoolean * _Nullable isExpired __attribute__((swift_name("isExpired")));
@property (readonly) NSString * _Nullable issuingAuthority __attribute__((swift_name("issuingAuthority")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable localizedName __attribute__((swift_name("localizedName")));
@property (readonly) NSString * _Nullable maritalStatus __attribute__((swift_name("maritalStatus")));
@property (readonly) NSString * _Nullable mothersName __attribute__((swift_name("mothersName")));
@property (readonly) TruliooCoreMrz * _Nullable mrz __attribute__((swift_name("mrz")));
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));
@property (readonly) NSString * _Nullable personalId __attribute__((swift_name("personalId")));
@property (readonly) NSString * _Nullable profession __attribute__((swift_name("profession")));
@property (readonly) NSString * _Nullable race __attribute__((swift_name("race")));
@property (readonly) NSString * _Nullable religion __attribute__((swift_name("religion")));
@property (readonly) NSString * _Nullable residentialStatus __attribute__((swift_name("residentialStatus")));
@property (readonly) NSString * _Nullable sex __attribute__((swift_name("sex")));
@property (readonly) id<TruliooCoreIImageParcel> _Nullable signature __attribute__((swift_name("signature")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Document")))
@interface TruliooCoreDocument : TruliooCoreBase <TruliooCoreIRecognitionModel>
- (instancetype)initWithImage:(id<TruliooCoreIImageParcel>)image address:(NSString * _Nullable)address age:(TruliooCoreInt * _Nullable)age barcode:(TruliooCoreBarcode * _Nullable)barcode dateOfBirth:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfBirth dateOfExpiry:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfExpiry dateOfIssue:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfIssue documentNumber:(NSString * _Nullable)documentNumber documentNumberAdditional:(NSString * _Nullable)documentNumberAdditional employer:(NSString * _Nullable)employer face:(id<TruliooCoreIImageParcel> _Nullable)face signature:(id<TruliooCoreIImageParcel> _Nullable)signature fathersName:(NSString * _Nullable)fathersName firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName fullName:(NSString * _Nullable)fullName issuingAuthority:(NSString * _Nullable)issuingAuthority localizedName:(NSString * _Nullable)localizedName maritalStatus:(NSString * _Nullable)maritalStatus mothersName:(NSString * _Nullable)mothersName nationality:(NSString * _Nullable)nationality personalId:(NSString * _Nullable)personalId race:(NSString * _Nullable)race profession:(NSString * _Nullable)profession religion:(NSString * _Nullable)religion residentialStatus:(NSString * _Nullable)residentialStatus sex:(NSString * _Nullable)sex isExpired:(TruliooCoreBoolean * _Nullable)isExpired mrz:(TruliooCoreMrz * _Nullable)mrz analysis:(TruliooCoreAnalysis * _Nullable)analysis __attribute__((swift_name("init(image:address:age:barcode:dateOfBirth:dateOfExpiry:dateOfIssue:documentNumber:documentNumberAdditional:employer:face:signature:fathersName:firstName:lastName:fullName:issuingAuthority:localizedName:maritalStatus:mothersName:nationality:personalId:race:profession:religion:residentialStatus:sex:isExpired:mrz:analysis:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreDocumentCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreDocument *)doCopyImage:(id<TruliooCoreIImageParcel>)image address:(NSString * _Nullable)address age:(TruliooCoreInt * _Nullable)age barcode:(TruliooCoreBarcode * _Nullable)barcode dateOfBirth:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfBirth dateOfExpiry:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfExpiry dateOfIssue:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfIssue documentNumber:(NSString * _Nullable)documentNumber documentNumberAdditional:(NSString * _Nullable)documentNumberAdditional employer:(NSString * _Nullable)employer face:(id<TruliooCoreIImageParcel> _Nullable)face signature:(id<TruliooCoreIImageParcel> _Nullable)signature fathersName:(NSString * _Nullable)fathersName firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName fullName:(NSString * _Nullable)fullName issuingAuthority:(NSString * _Nullable)issuingAuthority localizedName:(NSString * _Nullable)localizedName maritalStatus:(NSString * _Nullable)maritalStatus mothersName:(NSString * _Nullable)mothersName nationality:(NSString * _Nullable)nationality personalId:(NSString * _Nullable)personalId race:(NSString * _Nullable)race profession:(NSString * _Nullable)profession religion:(NSString * _Nullable)religion residentialStatus:(NSString * _Nullable)residentialStatus sex:(NSString * _Nullable)sex isExpired:(TruliooCoreBoolean * _Nullable)isExpired mrz:(TruliooCoreMrz * _Nullable)mrz analysis:(TruliooCoreAnalysis * _Nullable)analysis __attribute__((swift_name("doCopy(image:address:age:barcode:dateOfBirth:dateOfExpiry:dateOfIssue:documentNumber:documentNumberAdditional:employer:face:signature:fathersName:firstName:lastName:fullName:issuingAuthority:localizedName:maritalStatus:mothersName:nationality:personalId:race:profession:religion:residentialStatus:sex:isExpired:mrz:analysis:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) TruliooCoreInt * _Nullable age __attribute__((swift_name("age")));
@property (readonly) TruliooCoreAnalysis * _Nullable analysis __attribute__((swift_name("analysis")));
@property (readonly) TruliooCoreBarcode * _Nullable barcode __attribute__((swift_name("barcode")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfExpiry __attribute__((swift_name("dateOfExpiry")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfIssue __attribute__((swift_name("dateOfIssue")));
@property (readonly) NSString * _Nullable documentNumber __attribute__((swift_name("documentNumber")));
@property (readonly) NSString * _Nullable documentNumberAdditional __attribute__((swift_name("documentNumberAdditional")));
@property (readonly) NSString * _Nullable employer __attribute__((swift_name("employer")));
@property (readonly) id<TruliooCoreIImageParcel> _Nullable face __attribute__((swift_name("face")));
@property (readonly) NSString * _Nullable fathersName __attribute__((swift_name("fathersName")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property id<TruliooCoreIImageParcel> image __attribute__((swift_name("image")));
@property (readonly) TruliooCoreBoolean * _Nullable isExpired __attribute__((swift_name("isExpired")));
@property (readonly) NSString * _Nullable issuingAuthority __attribute__((swift_name("issuingAuthority")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable localizedName __attribute__((swift_name("localizedName")));
@property (readonly) NSString * _Nullable maritalStatus __attribute__((swift_name("maritalStatus")));
@property (readonly) NSString * _Nullable mothersName __attribute__((swift_name("mothersName")));
@property (readonly) TruliooCoreMrz * _Nullable mrz __attribute__((swift_name("mrz")));
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));
@property (readonly) NSString * _Nullable personalId __attribute__((swift_name("personalId")));
@property (readonly) NSString * _Nullable profession __attribute__((swift_name("profession")));
@property (readonly) NSString * _Nullable race __attribute__((swift_name("race")));
@property (readonly) NSString * _Nullable religion __attribute__((swift_name("religion")));
@property (readonly) NSString * _Nullable residentialStatus __attribute__((swift_name("residentialStatus")));
@property (readonly) NSString * _Nullable sex __attribute__((swift_name("sex")));
@property (readonly) id<TruliooCoreIImageParcel> _Nullable signature __attribute__((swift_name("signature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Document.Companion")))
@interface TruliooCoreDocumentCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreDocumentCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Face")))
@interface TruliooCoreFace : TruliooCoreBase <TruliooCoreICapturedImage>
- (instancetype)initWithImage:(id<TruliooCoreIImageParcel>)image boundingBox:(TruliooCoreBoundingBox * _Nullable)boundingBox __attribute__((swift_name("init(image:boundingBox:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreFaceCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreFace *)doCopyImage:(id<TruliooCoreIImageParcel>)image boundingBox:(TruliooCoreBoundingBox * _Nullable)boundingBox __attribute__((swift_name("doCopy(image:boundingBox:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreBoundingBox * _Nullable boundingBox __attribute__((swift_name("boundingBox")));
@property (readonly) id<TruliooCoreIImageParcel> image __attribute__((swift_name("image")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Face.Companion")))
@interface TruliooCoreFaceCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreFaceCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MRTDTYPE")))
@interface TruliooCoreMRTDTYPE : TruliooCoreKotlinEnum<TruliooCoreMRTDTYPE *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreMRTDTYPE *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) TruliooCoreMRTDTYPE *identityCard __attribute__((swift_name("identityCard")));
@property (class, readonly) TruliooCoreMRTDTYPE *passport __attribute__((swift_name("passport")));
@property (class, readonly) TruliooCoreMRTDTYPE *visa __attribute__((swift_name("visa")));
@property (class, readonly) TruliooCoreMRTDTYPE *greenCard __attribute__((swift_name("greenCard")));
@property (class, readonly) TruliooCoreMRTDTYPE *mysPassImm13p __attribute__((swift_name("mysPassImm13p")));
@property (class, readonly) TruliooCoreMRTDTYPE *dl __attribute__((swift_name("dl")));
@property (class, readonly) TruliooCoreMRTDTYPE *internalTravelDocument __attribute__((swift_name("internalTravelDocument")));
@property (class, readonly) TruliooCoreMRTDTYPE *borderCrossingCard __attribute__((swift_name("borderCrossingCard")));
+ (TruliooCoreKotlinArray<TruliooCoreMRTDTYPE *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MRZSTATUS")))
@interface TruliooCoreMRZSTATUS : TruliooCoreKotlinEnum<TruliooCoreMRZSTATUS *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreMRZSTATUS *notParsed __attribute__((swift_name("notParsed")));
@property (class, readonly) TruliooCoreMRZSTATUS *notVerified __attribute__((swift_name("notVerified")));
@property (class, readonly) TruliooCoreMRZSTATUS *verified __attribute__((swift_name("verified")));
+ (TruliooCoreKotlinArray<TruliooCoreMRZSTATUS *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mrz")))
@interface TruliooCoreMrz : TruliooCoreBase
- (instancetype)initWithAge:(int32_t)age alienNumber:(NSString * _Nullable)alienNumber applicationReceiptNumber:(NSString * _Nullable)applicationReceiptNumber dateOfBirth:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfBirth dateOfExpiry:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfExpiry documentCode:(NSString * _Nullable)documentCode documentNumber:(NSString * _Nullable)documentNumber mrtdType:(TruliooCoreMRTDTYPE *)mrtdType gender:(NSString *)gender immigrantCaseNumber:(NSString *)immigrantCaseNumber issuer:(NSString *)issuer issuerName:(NSString *)issuerName text:(NSString *)text nationality:(NSString * _Nullable)nationality nationalityName:(NSString * _Nullable)nationalityName status:(TruliooCoreMRZSTATUS *)status __attribute__((swift_name("init(age:alienNumber:applicationReceiptNumber:dateOfBirth:dateOfExpiry:documentCode:documentNumber:mrtdType:gender:immigrantCaseNumber:issuer:issuerName:text:nationality:nationalityName:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreMrzCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreMrz *)doCopyAge:(int32_t)age alienNumber:(NSString * _Nullable)alienNumber applicationReceiptNumber:(NSString * _Nullable)applicationReceiptNumber dateOfBirth:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfBirth dateOfExpiry:(TruliooCoreKotlinx_datetimeDatePeriod * _Nullable)dateOfExpiry documentCode:(NSString * _Nullable)documentCode documentNumber:(NSString * _Nullable)documentNumber mrtdType:(TruliooCoreMRTDTYPE *)mrtdType gender:(NSString *)gender immigrantCaseNumber:(NSString *)immigrantCaseNumber issuer:(NSString *)issuer issuerName:(NSString *)issuerName text:(NSString *)text nationality:(NSString * _Nullable)nationality nationalityName:(NSString * _Nullable)nationalityName status:(TruliooCoreMRZSTATUS *)status __attribute__((swift_name("doCopy(age:alienNumber:applicationReceiptNumber:dateOfBirth:dateOfExpiry:documentCode:documentNumber:mrtdType:gender:immigrantCaseNumber:issuer:issuerName:text:nationality:nationalityName:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t age __attribute__((swift_name("age")));
@property (readonly) NSString * _Nullable alienNumber __attribute__((swift_name("alienNumber")));
@property (readonly) NSString * _Nullable applicationReceiptNumber __attribute__((swift_name("applicationReceiptNumber")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) TruliooCoreKotlinx_datetimeDatePeriod * _Nullable dateOfExpiry __attribute__((swift_name("dateOfExpiry")));
@property (readonly) NSString * _Nullable documentCode __attribute__((swift_name("documentCode")));
@property (readonly) NSString * _Nullable documentNumber __attribute__((swift_name("documentNumber")));
@property (readonly) NSString *gender __attribute__((swift_name("gender")));
@property (readonly) NSString *immigrantCaseNumber __attribute__((swift_name("immigrantCaseNumber")));
@property (readonly) NSString *issuer __attribute__((swift_name("issuer")));
@property (readonly) NSString *issuerName __attribute__((swift_name("issuerName")));
@property (readonly) TruliooCoreMRTDTYPE *mrtdType __attribute__((swift_name("mrtdType")));
@property (readonly) NSString * _Nullable nationality __attribute__((swift_name("nationality")));
@property (readonly) NSString * _Nullable nationalityName __attribute__((swift_name("nationalityName")));
@property (readonly) TruliooCoreMRZSTATUS *status __attribute__((swift_name("status")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mrz.Companion")))
@interface TruliooCoreMrzCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreMrzCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PercentageOffsetBox")))
@interface TruliooCorePercentageOffsetBox : TruliooCoreBase
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCorePercentageOffsetBoxCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCorePercentageOffsetBox *)doCopyLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("doCopy(left:top:right:bottom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float right __attribute__((swift_name("right")));
@property (readonly) float top __attribute__((swift_name("top")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PercentageOffsetBox.Companion")))
@interface TruliooCorePercentageOffsetBoxCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCorePercentageOffsetBoxCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("IPollable")))
@protocol TruliooCoreIPollable
@required
- (void)close __attribute__((swift_name("close()")));
- (id<TruliooCoreKotlinx_coroutines_coreFlow>)pollDelay:(TruliooCoreDuration *)delay __attribute__((swift_name("poll(delay:)")));
@property (readonly) id<TruliooCoreIDataSource> dataSource __attribute__((swift_name("dataSource")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) BOOL mustCompletePrevious __attribute__((swift_name("mustCompletePrevious")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExponentialBackoff")))
@interface TruliooCoreExponentialBackoff<DATA> : TruliooCoreBase <TruliooCoreIPollable>
- (instancetype)initWithDataSource:(id<TruliooCoreIDataSource>)dataSource dispatcher:(TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher mustCompletePrevious:(BOOL)mustCompletePrevious factor:(int32_t)factor upperBound:(TruliooCoreDuration *)upperBound __attribute__((swift_name("init(dataSource:dispatcher:mustCompletePrevious:factor:upperBound:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreExponentialBackoffCompanion *companion __attribute__((swift_name("companion")));
- (id<TruliooCoreKotlinx_coroutines_coreFlow>)pollDelay:(TruliooCoreDuration *)delay __attribute__((swift_name("poll(delay:)")));
@property (readonly) id<TruliooCoreIDataSource> dataSource __attribute__((swift_name("dataSource")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) int32_t factor __attribute__((swift_name("factor")));
@property (readonly) BOOL mustCompletePrevious __attribute__((swift_name("mustCompletePrevious")));
@property (readonly) TruliooCoreDuration *upperBound __attribute__((swift_name("upperBound")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExponentialBackoffCompanion")))
@interface TruliooCoreExponentialBackoffCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreExponentialBackoffCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t EXPONENTIAL_FACTOR __attribute__((swift_name("EXPONENTIAL_FACTOR")));
@property (readonly) TruliooCoreSeconds *UPPER_BOUND __attribute__((swift_name("UPPER_BOUND")));
@end

__attribute__((swift_name("IDataSource")))
@protocol TruliooCoreIDataSource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(TruliooCoreEither<id, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));
- (void)handleFailFail:(TruliooCoreKotlinError *)fail __attribute__((swift_name("handleFail(fail:)")));
- (BOOL)isComplete __attribute__((swift_name("isComplete()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImagePollable")))
@interface TruliooCoreImagePollable : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreImagePollableCompanion *companion __attribute__((swift_name("companion")));
- (void)pollImageUploadStatusOnPollStart:(void (^)(void))onPollStart onComplete:(void (^)(void))onComplete __attribute__((swift_name("pollImageUploadStatus(onPollStart:onComplete:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImagePollable.Companion")))
@interface TruliooCoreImagePollableCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreImagePollableCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreMilliseconds *POLL_DELAY __attribute__((swift_name("POLL_DELAY")));
@property (readonly) TruliooCoreMinutes *POLL_TIMER __attribute__((swift_name("POLL_TIMER")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImagePollable.UploadCompleteStatus")))
@interface TruliooCoreImagePollableUploadCompleteStatus : TruliooCoreBase <TruliooCoreIDataSource>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)uploadCompleteStatus __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreImagePollableUploadCompleteStatus *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(TruliooCoreEither<TruliooCoreBoolean *, TruliooCoreKotlinError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pollable")))
@interface TruliooCorePollable<DATA> : TruliooCoreBase <TruliooCoreIPollable>
- (instancetype)initWithDataSource:(id<TruliooCoreIDataSource>)dataSource dispatcher:(TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher mustCompletePrevious:(BOOL)mustCompletePrevious __attribute__((swift_name("init(dataSource:dispatcher:mustCompletePrevious:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<TruliooCoreIDataSource> dataSource __attribute__((swift_name("dataSource")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) BOOL mustCompletePrevious __attribute__((swift_name("mustCompletePrevious")));
@end

__attribute__((swift_name("IDetectionDelegate")))
@protocol TruliooCoreIDetectionDelegate
@required
- (void)capture __attribute__((swift_name("capture()")));
- (void)checkAutoCaptureResolutionImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("checkAutoCaptureResolution(image:)")));
- (void)onDetection __attribute__((swift_name("onDetection()")));
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)onIdentifiedImage:(id<TruliooCoreIImageParcel>)image recognized:(id<TruliooCoreICapturedImage> _Nullable)recognized __attribute__((swift_name("onIdentified(image:recognized:)")));
- (void)sendImageImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("sendImage(image:)")));
- (int32_t)startTimer __attribute__((swift_name("startTimer()")));
@property (readonly) TruliooCoreImageValidation *imageValidator __attribute__((swift_name("imageValidator")));
@property (readonly) TruliooCoreImageRecognizer<id<TruliooCoreICapturedImage>, id<TruliooCoreImageRecognizerType>> *recognizer __attribute__((swift_name("recognizer")));
@end

__attribute__((swift_name("DocumentBackDelegate")))
@protocol TruliooCoreDocumentBackDelegate <TruliooCoreIDetectionDelegate>
@required
@end

__attribute__((swift_name("DocumentBackDelegateImpl")))
@interface TruliooCoreDocumentBackDelegateImpl : TruliooCoreBase
- (instancetype)initWithIdentify:(id<TruliooCoreIDocumentDelegateImpl>)identify __attribute__((swift_name("init(identify:)"))) __attribute__((objc_designated_initializer));
- (void)capture __attribute__((swift_name("capture()")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)processImage:(UIImage *)image __attribute__((swift_name("process(image:)")));
- (void)startTimer_ __attribute__((swift_name("startTimer_()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentBackDelegateWrapper")))
@interface TruliooCoreDocumentBackDelegateWrapper : TruliooCoreBase <TruliooCoreDocumentBackDelegate>
- (instancetype)initWithOnDetection:(void (^)(void))onDetection identify:(void (^)(id<TruliooCoreIImageParcel>, TruliooCoreDocument * _Nullable))identify error:(void (^)(TruliooCoreKotlinError *))error failToManual:(void (^)(void))failToManual __attribute__((swift_name("init(onDetection:identify:error:failToManual:)"))) __attribute__((objc_designated_initializer));
- (void)onDetection __attribute__((swift_name("onDetection()")));
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)onIdentifiedImage:(id<TruliooCoreIImageParcel>)image recognized:(TruliooCoreDocument * _Nullable)recognized __attribute__((swift_name("onIdentified(image:recognized:)")));
- (int32_t)startTimer __attribute__((swift_name("startTimer()")));
@property (readonly) TruliooCoreImageValidation *imageValidator __attribute__((swift_name("imageValidator")));
@property (readonly) TruliooCoreImageRecognizer<TruliooCoreDocument *, TruliooCoreImageRecognizerTypeDOCUMENT *> *recognizer __attribute__((swift_name("recognizer")));
@end

__attribute__((swift_name("DocumentFrontDelegate")))
@protocol TruliooCoreDocumentFrontDelegate <TruliooCoreIDetectionDelegate>
@required
@end

__attribute__((swift_name("DocumentFrontDelegateImpl")))
@interface TruliooCoreDocumentFrontDelegateImpl : TruliooCoreBase
- (instancetype)initWithIdentify:(id<TruliooCoreIDocumentDelegateImpl>)identify __attribute__((swift_name("init(identify:)"))) __attribute__((objc_designated_initializer));
- (void)capture __attribute__((swift_name("capture()")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)processImage:(UIImage *)image __attribute__((swift_name("process(image:)")));
- (void)startTimer_ __attribute__((swift_name("startTimer_()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentFrontDelegateWrapper")))
@interface TruliooCoreDocumentFrontDelegateWrapper : TruliooCoreBase <TruliooCoreDocumentFrontDelegate>
- (instancetype)initWithOnDetection:(void (^)(void))onDetection identify:(void (^)(id<TruliooCoreIImageParcel>, TruliooCoreDocument * _Nullable))identify error:(void (^)(TruliooCoreKotlinError *))error failToManual:(void (^)(void))failToManual __attribute__((swift_name("init(onDetection:identify:error:failToManual:)"))) __attribute__((objc_designated_initializer));
- (void)onDetection __attribute__((swift_name("onDetection()")));
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)onIdentifiedImage:(id<TruliooCoreIImageParcel>)image recognized:(TruliooCoreDocument * _Nullable)recognized __attribute__((swift_name("onIdentified(image:recognized:)")));
- (int32_t)startTimer __attribute__((swift_name("startTimer()")));
@property (readonly) TruliooCoreImageValidation *imageValidator __attribute__((swift_name("imageValidator")));
@property (readonly) TruliooCoreImageRecognizer<TruliooCoreDocument *, TruliooCoreImageRecognizerTypeDOCUMENT *> *recognizer __attribute__((swift_name("recognizer")));
@end

__attribute__((swift_name("IDocumentDelegateImpl")))
@protocol TruliooCoreIDocumentDelegateImpl
@required
- (void)onDetection __attribute__((swift_name("onDetection()")));
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)onIdentifiedImage:(id<TruliooCoreIImageParcel>)image recognized_:(TruliooCoreDocument * _Nullable)recognized __attribute__((swift_name("onIdentified(image:recognized_:)")));
@end

__attribute__((swift_name("IIMageValidation")))
@protocol TruliooCoreIIMageValidation
@required
- (BOOL)isRequiredFormatImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("isRequiredFormat(image:)")));
- (BOOL)isRequiredResolutionImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("isRequiredResolution(image:)")));
- (BOOL)validateImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("validate(image:)")));
@end

__attribute__((swift_name("IImageFeed")))
@protocol TruliooCoreIImageFeed
@required
- (void)captureComplete __attribute__((swift_name("captureComplete()")));
- (void)registerOnError:(void (^)(TruliooCoreKotlinThrowable *))onError onReceive:(void (^)(id<TruliooCoreIImageParcel>))onReceive __attribute__((swift_name("register(onError:onReceive:)")));
- (void)sendImageData:(id<TruliooCoreIImageParcel>)data __attribute__((swift_name("sendImage(data:)")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreCoroutineScope> imageContext __attribute__((swift_name("imageContext")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreFlow> imageFlow __attribute__((swift_name("imageFlow")));
@property (readonly) id<TruliooCoreIIMageValidation> validator __attribute__((swift_name("validator")));
@end

__attribute__((swift_name("ISelfieDelegateImpl")))
@protocol TruliooCoreISelfieDelegateImpl
@required
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)onIdentifiedImage:(id<TruliooCoreIImageParcel>)image recognized__:(TruliooCoreFace * _Nullable)recognized __attribute__((swift_name("onIdentified(image:recognized__:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageFeed")))
@interface TruliooCoreImageFeed : TruliooCoreBase <TruliooCoreIImageFeed>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)captureComplete __attribute__((swift_name("captureComplete()")));
- (void)sendImageData:(id<TruliooCoreIImageParcel>)data __attribute__((swift_name("sendImage(data:)")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreCoroutineScope> imageContext __attribute__((swift_name("imageContext")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreFlow> imageFlow __attribute__((swift_name("imageFlow")));
@property (readonly) id<TruliooCoreIIMageValidation> validator __attribute__((swift_name("validator")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageValidation")))
@interface TruliooCoreImageValidation : TruliooCoreBase <TruliooCoreIIMageValidation>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreImageValidationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isRequiredFormatImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("isRequiredFormat(image:)")));
- (BOOL)isRequiredResolutionImage:(id<TruliooCoreIImageParcel>)image __attribute__((swift_name("isRequiredResolution(image:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageValidation.Companion")))
@interface TruliooCoreImageValidationCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreImageValidationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t HD_RESOLUTION __attribute__((swift_name("HD_RESOLUTION")));
@end

__attribute__((swift_name("PassportDelegate")))
@protocol TruliooCorePassportDelegate <TruliooCoreIDetectionDelegate>
@required
@end

__attribute__((swift_name("PassportDelegateImpl")))
@interface TruliooCorePassportDelegateImpl : TruliooCoreBase
- (instancetype)initWithIdentify:(id<TruliooCoreIDocumentDelegateImpl>)identify __attribute__((swift_name("init(identify:)"))) __attribute__((objc_designated_initializer));
- (void)capture __attribute__((swift_name("capture()")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)processImage:(UIImage *)image __attribute__((swift_name("process(image:)")));
- (void)startTimer_ __attribute__((swift_name("startTimer_()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PassportDelegateWrapper")))
@interface TruliooCorePassportDelegateWrapper : TruliooCoreBase <TruliooCorePassportDelegate>
- (instancetype)initWithOnDetection:(void (^)(void))onDetection identify:(void (^)(id<TruliooCoreIImageParcel>, TruliooCoreDocument * _Nullable))identify error:(void (^)(TruliooCoreKotlinError *))error failToManual:(void (^)(void))failToManual __attribute__((swift_name("init(onDetection:identify:error:failToManual:)"))) __attribute__((objc_designated_initializer));
- (void)onDetection __attribute__((swift_name("onDetection()")));
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)onIdentifiedImage:(id<TruliooCoreIImageParcel>)image recognized:(TruliooCoreDocument * _Nullable)recognized __attribute__((swift_name("onIdentified(image:recognized:)")));
- (int32_t)startTimer __attribute__((swift_name("startTimer()")));
@property (readonly) TruliooCoreImageValidation *imageValidator __attribute__((swift_name("imageValidator")));
@property (readonly) TruliooCoreImageRecognizer<TruliooCoreDocument *, TruliooCoreImageRecognizerTypePASSPORT *> *recognizer __attribute__((swift_name("recognizer")));
@end

__attribute__((swift_name("SelfieDelegate")))
@protocol TruliooCoreSelfieDelegate <TruliooCoreIDetectionDelegate>
@required
@end

__attribute__((swift_name("SelfieDelegateImpl")))
@interface TruliooCoreSelfieDelegateImpl : TruliooCoreBase
- (instancetype)initWithIdentify:(id<TruliooCoreISelfieDelegateImpl>)identify __attribute__((swift_name("init(identify:)"))) __attribute__((objc_designated_initializer));
- (void)capture __attribute__((swift_name("capture()")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)processImage:(UIImage *)image __attribute__((swift_name("process(image:)")));
- (void)startTimer_ __attribute__((swift_name("startTimer_()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelfieDelegateWrapper")))
@interface TruliooCoreSelfieDelegateWrapper : TruliooCoreBase <TruliooCoreSelfieDelegate>
- (instancetype)initWithIdentify:(void (^)(id<TruliooCoreIImageParcel>, TruliooCoreFace * _Nullable))identify error:(void (^)(TruliooCoreKotlinError *))error failToManual:(void (^)(void))failToManual __attribute__((swift_name("init(identify:error:failToManual:)"))) __attribute__((objc_designated_initializer));
- (void)onDetection __attribute__((swift_name("onDetection()")));
- (void)onErrorError:(TruliooCoreKotlinError *)error __attribute__((swift_name("onError(error:)")));
- (void)onFailToManual __attribute__((swift_name("onFailToManual()")));
- (void)onIdentifiedImage:(id<TruliooCoreIImageParcel>)image recognized:(TruliooCoreFace * _Nullable)recognized __attribute__((swift_name("onIdentified(image:recognized:)")));
- (int32_t)startTimer __attribute__((swift_name("startTimer()")));
@property (readonly) TruliooCoreImageValidation *imageValidator __attribute__((swift_name("imageValidator")));
@property (readonly) TruliooCoreImageRecognizer<TruliooCoreFace *, TruliooCoreImageRecognizerTypeSELFIE *> *recognizer __attribute__((swift_name("recognizer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("XcodeProject")))
@interface TruliooCoreXcodeProject : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)xcodeProject __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreXcodeProject *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("XcodeProject.SDKBundle")))
@interface TruliooCoreXcodeProjectSDKBundle : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKBundle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreXcodeProjectSDKBundle *shared __attribute__((swift_name("shared")));
- (NSData *)getProjectFileDataName:(NSString *)name ofType:(NSString *)ofType __attribute__((swift_name("getProjectFileData(name:ofType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CenterPoint")))
@interface TruliooCoreCenterPoint : TruliooCoreBase
- (instancetype)initWithX:(int32_t)x y:(int32_t)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreCenterPoint *)doCopyX:(int32_t)x y:(int32_t)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t x __attribute__((swift_name("x")));
@property (readonly) int32_t y __attribute__((swift_name("y")));
@end

__attribute__((swift_name("IResolution")))
@protocol TruliooCoreIResolution
@required
- (BOOL)isLandscape __attribute__((swift_name("isLandscape()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("IImage")))
@protocol TruliooCoreIImage <TruliooCoreIResolution>
@required
- (float)megapixels __attribute__((swift_name("megapixels()")));
@end

__attribute__((swift_name("IResizableImage")))
@protocol TruliooCoreIResizableImage
@required
- (id<TruliooCoreIImageParcel>)applyCroppingParcel:(id<TruliooCoreIImageParcel>)parcel maxSizeInMb:(float)maxSizeInMb __attribute__((swift_name("applyCropping(parcel:maxSizeInMb:)")));
- (id<TruliooCoreIImageParcel>)cropByPercentageParcel:(id<TruliooCoreIImageParcel>)parcel centerPoint:(TruliooCoreCenterPoint *)centerPoint percentageTarget:(id)percentageTarget __attribute__((swift_name("cropByPercentage(parcel:centerPoint:percentageTarget:)")));
- (id<TruliooCoreIImageParcel>)cropByRatioOnlyParcel:(id<TruliooCoreIImageParcel>)parcel ratio:(float)ratio __attribute__((swift_name("cropByRatioOnly(parcel:ratio:)")));
- (TruliooCoreCenterPoint *)getCenterPoint __attribute__((swift_name("getCenterPoint()")));
- (id<TruliooCoreIImageParcel>)resizeParcel:(id<TruliooCoreIImageParcel>)parcel size:(TruliooCoreSize2D *)size __attribute__((swift_name("resize(parcel:size:)")));
- (id<TruliooCoreIImageParcel>)resizeByDocumentTypeParcel:(id<TruliooCoreIImageParcel>)parcel documentType:(TruliooCoreDocumentType * _Nullable)documentType __attribute__((swift_name("resizeByDocumentType(parcel:documentType:)")));
- (id<TruliooCoreIImageParcel>)resizeForModelParcel:(id<TruliooCoreIImageParcel>)parcel __attribute__((swift_name("resizeForModel(parcel:)")));
- (id<TruliooCoreIImageParcel>)resizeForSubmissionParcel:(id<TruliooCoreIImageParcel>)parcel __attribute__((swift_name("resizeForSubmission(parcel:)")));
- (float)sizeInMbParcel:(id<TruliooCoreIImageParcel>)parcel __attribute__((swift_name("sizeInMb(parcel:)")));
@end

__attribute__((swift_name("IImageParcel")))
@protocol TruliooCoreIImageParcel <TruliooCoreIResizableImage>
@required
- (id<TruliooCoreIImageParcel>)cropToSubject __attribute__((swift_name("cropToSubject()")));
- (TruliooCoreKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
@property (readonly) TruliooCoreDocumentType * _Nullable documentType __attribute__((swift_name("documentType")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) UIImage *image __attribute__((swift_name("image")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IImageParcelCompanion")))
@interface TruliooCoreIImageParcelCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIImageParcelCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreIImageParcel>)ofImageData:(UIImage *)imageData documentType:(TruliooCoreDocumentType * _Nullable)documentType __attribute__((swift_name("of(imageData:documentType:)")));
@property (readonly) float BYTES_PER_MB __attribute__((swift_name("BYTES_PER_MB")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IResizableImageCompanion")))
@interface TruliooCoreIResizableImageCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIResizableImageCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) float CROPPING_PERCENTAGE_TARGET __attribute__((swift_name("CROPPING_PERCENTAGE_TARGET")));
@property (readonly) float MAX_FILE_SIZE_IN_MB __attribute__((swift_name("MAX_FILE_SIZE_IN_MB")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdRatios")))
@interface TruliooCoreIdRatios : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idRatios __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIdRatios *shared __attribute__((swift_name("shared")));
@property (readonly) float LICENSE_H_W_RATIO __attribute__((swift_name("LICENSE_H_W_RATIO")));
@property (readonly) float PASSPORT_H_W_RATIO __attribute__((swift_name("PASSPORT_H_W_RATIO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageCropping")))
@interface TruliooCoreImageCropping : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)imageCropping __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreImageCropping *shared __attribute__((swift_name("shared")));
- (UIImage *)cropToSubjectSource:(UIImage *)source documentType:(TruliooCoreDocumentType * _Nullable)documentType __attribute__((swift_name("cropToSubject(source:documentType:)")));
@property (readonly) double DOCUMENT_VIEWFINDER_HEIGHT_OFFSET __attribute__((swift_name("DOCUMENT_VIEWFINDER_HEIGHT_OFFSET")));
@property (readonly) double DOCUMENT_VIEWFINDER_WIDTH __attribute__((swift_name("DOCUMENT_VIEWFINDER_WIDTH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageCroppingTests")))
@interface TruliooCoreImageCroppingTests : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)testCroppingADiversLicenceIsSuccessful __attribute__((swift_name("testCroppingADiversLicenceIsSuccessful()")));
- (void)testCroppingAGovernmentIDIsSuccessful __attribute__((swift_name("testCroppingAGovernmentIDIsSuccessful()")));
- (void)testCroppingAPassportIsSuccessful __attribute__((swift_name("testCroppingAPassportIsSuccessful()")));
- (void)testCroppingASelfieIsSuccessful __attribute__((swift_name("testCroppingASelfieIsSuccessful()")));
@end

__attribute__((swift_name("ImageFormat")))
@interface TruliooCoreImageFormat : TruliooCoreBase <TruliooCoreIImage>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageResolution")))
@interface TruliooCoreImageResolution : TruliooCoreKotlinEnum<TruliooCoreImageResolution *> <TruliooCoreIResolution>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreImageResolution *hd __attribute__((swift_name("hd")));
+ (TruliooCoreKotlinArray<TruliooCoreImageResolution *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *resolution __attribute__((swift_name("resolution")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JPEG")))
@interface TruliooCoreJPEG : TruliooCoreImageFormat
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)jPEG __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreJPEG *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Size2D")))
@interface TruliooCoreSize2D : TruliooCoreBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreSize2D *)doCopyWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YUV")))
@interface TruliooCoreYUV : TruliooCoreImageFormat
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)yUV __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreYUV *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("IPngChunk")))
@protocol TruliooCoreIPngChunk
@required
@property (readonly) TruliooCoreKotlinByteArray *chunkType __attribute__((swift_name("chunkType")));
@property (readonly) uint32_t crc __attribute__((swift_name("crc")));
@property (readonly) TruliooCorePngData *data __attribute__((swift_name("data")));
@property (readonly) TruliooCoreKotlinByteArray *dataBytes __attribute__((swift_name("dataBytes")));
@property (readonly) uint32_t length __attribute__((swift_name("length")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IDAT")))
@interface TruliooCoreIDAT : TruliooCoreBase <TruliooCoreIPngChunk>
- (instancetype)initWithLength:(uint32_t)length chunkType:(TruliooCoreKotlinByteArray *)chunkType dataBytes:(TruliooCoreKotlinByteArray *)dataBytes crc:(uint32_t)crc __attribute__((swift_name("init(length:chunkType:dataBytes:crc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreIDATCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) TruliooCoreKotlinByteArray *chunkType __attribute__((swift_name("chunkType")));
@property (readonly) uint32_t crc __attribute__((swift_name("crc")));
@property (readonly) TruliooCorePngData *data __attribute__((swift_name("data")));
@property (readonly) TruliooCoreKotlinByteArray *dataBytes __attribute__((swift_name("dataBytes")));
@property (readonly) uint32_t length __attribute__((swift_name("length")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IDAT.Companion")))
@interface TruliooCoreIDATCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIDATCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IEND")))
@interface TruliooCoreIEND : TruliooCoreBase <TruliooCoreIPngChunk>
- (instancetype)initWithLength:(uint32_t)length chunkType:(TruliooCoreKotlinByteArray *)chunkType dataBytes:(TruliooCoreKotlinByteArray *)dataBytes crc:(uint32_t)crc __attribute__((swift_name("init(length:chunkType:dataBytes:crc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreIENDCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) TruliooCoreKotlinByteArray *chunkType __attribute__((swift_name("chunkType")));
@property (readonly) uint32_t crc __attribute__((swift_name("crc")));
@property (readonly) TruliooCorePngData *data __attribute__((swift_name("data")));
@property (readonly) TruliooCoreKotlinByteArray *dataBytes __attribute__((swift_name("dataBytes")));
@property (readonly) uint32_t length __attribute__((swift_name("length")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IEND.Companion")))
@interface TruliooCoreIENDCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIENDCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IHDR")))
@interface TruliooCoreIHDR : TruliooCoreBase <TruliooCoreIPngChunk>
- (instancetype)initWithLength:(uint32_t)length chunkType:(TruliooCoreKotlinByteArray *)chunkType dataBytes:(TruliooCoreKotlinByteArray *)dataBytes crc:(uint32_t)crc __attribute__((swift_name("init(length:chunkType:dataBytes:crc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreIHDRCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) TruliooCoreKotlinByteArray *chunkType __attribute__((swift_name("chunkType")));
@property (readonly) uint32_t crc __attribute__((swift_name("crc")));
@property (readonly) TruliooCorePngData *data __attribute__((swift_name("data")));
@property (readonly) TruliooCoreKotlinByteArray *dataBytes __attribute__((swift_name("dataBytes")));
@property (readonly) uint32_t length __attribute__((swift_name("length")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IHDR.Companion")))
@interface TruliooCoreIHDRCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIHDRCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPngChunkCompanion")))
@interface TruliooCoreIPngChunkCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIPngChunkCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKotlinPair<id<TruliooCoreIPngChunk>, TruliooCoreKotlinByteArray *> *)buildChunkRawData:(TruliooCoreKotlinByteArray *)rawData __attribute__((swift_name("buildChunk(rawData:)")));
- (id<TruliooCoreIPngChunk>)determineChunkTypeChunkBytes:(TruliooCoreKotlinByteArray *)chunkBytes length:(uint32_t)length data:(TruliooCoreKotlinByteArray *)data crc:(uint32_t)crc __attribute__((swift_name("determineChunkType(chunkBytes:length:data:crc:)")));
@property (readonly) TruliooCoreKotlinByteArray *IDAT_HEADER __attribute__((swift_name("IDAT_HEADER")));
@property (readonly) TruliooCoreKotlinByteArray *IEND_HEADER __attribute__((swift_name("IEND_HEADER")));
@property (readonly) TruliooCoreKotlinByteArray *IHDR_HEADER __attribute__((swift_name("IHDR_HEADER")));
@property (readonly) TruliooCoreKotlinByteArray *PLTE_HEADER __attribute__((swift_name("PLTE_HEADER")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPngChunkUnregistered")))
@interface TruliooCoreIPngChunkUnregistered : TruliooCoreBase <TruliooCoreIPngChunk>
- (instancetype)initWithLength:(uint32_t)length chunkType:(TruliooCoreKotlinByteArray *)chunkType dataBytes:(TruliooCoreKotlinByteArray *)dataBytes crc:(uint32_t)crc __attribute__((swift_name("init(length:chunkType:dataBytes:crc:)"))) __attribute__((objc_designated_initializer));
@property (readonly) TruliooCoreKotlinByteArray *chunkType __attribute__((swift_name("chunkType")));
@property (readonly) uint32_t crc __attribute__((swift_name("crc")));
@property (readonly) TruliooCorePngData *data __attribute__((swift_name("data")));
@property (readonly) TruliooCoreKotlinByteArray *dataBytes __attribute__((swift_name("dataBytes")));
@property (readonly) uint32_t length __attribute__((swift_name("length")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PLTE")))
@interface TruliooCorePLTE : TruliooCoreBase <TruliooCoreIPngChunk>
- (instancetype)initWithLength:(uint32_t)length chunkType:(TruliooCoreKotlinByteArray *)chunkType dataBytes:(TruliooCoreKotlinByteArray *)dataBytes crc:(uint32_t)crc __attribute__((swift_name("init(length:chunkType:dataBytes:crc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCorePLTECompanion *companion __attribute__((swift_name("companion")));
@property (readonly) TruliooCoreKotlinByteArray *chunkType __attribute__((swift_name("chunkType")));
@property (readonly) uint32_t crc __attribute__((swift_name("crc")));
@property (readonly) TruliooCorePngData *data __attribute__((swift_name("data")));
@property (readonly) TruliooCoreKotlinByteArray *dataBytes __attribute__((swift_name("dataBytes")));
@property (readonly) uint32_t length __attribute__((swift_name("length")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PLTE.Companion")))
@interface TruliooCorePLTECompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCorePLTECompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PNG")))
@interface TruliooCorePNG : TruliooCoreImageFormat
- (instancetype)initWithByteArray:(TruliooCoreKotlinByteArray *)byteArray __attribute__((swift_name("init(byteArray:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCorePNGCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, id<TruliooCoreIPngChunk>> *dataSections __attribute__((swift_name("dataSections")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PNG.Companion")))
@interface TruliooCorePNGCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCorePNGCompanion *shared __attribute__((swift_name("shared")));
- (NSDictionary<NSString *, id<TruliooCoreIPngChunk>> *)buildDataSectionsData:(TruliooCoreKotlinByteArray *)data __attribute__((swift_name("buildDataSections(data:)")));
@property (readonly) TruliooCoreKotlinByteArray *PNG_FILE_SIGNATURE __attribute__((swift_name("PNG_FILE_SIGNATURE")));
@end

__attribute__((swift_name("PngData")))
@interface TruliooCorePngData : TruliooCoreBase
@property (class, readonly, getter=companion) TruliooCorePngDataCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int8_t)takeAndDrop:(NSMutableArray<TruliooCoreByte *> *)receiver __attribute__((swift_name("takeAndDrop(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<TruliooCoreByte *> *)takeAndDrop:(NSMutableArray<TruliooCoreByte *> *)receiver count:(int32_t)count __attribute__((swift_name("takeAndDrop(_:count:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PngData.Companion")))
@interface TruliooCorePngDataCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCorePngDataCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCorePngData *)fromData:(TruliooCoreKotlinByteArray *)data __attribute__((swift_name("from(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PngData.Empty")))
@interface TruliooCorePngDataEmpty : TruliooCorePngData
- (instancetype)initWithData:(TruliooCoreKotlinByteArray *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (readonly) TruliooCoreKotlinByteArray *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PngData.IDAT")))
@interface TruliooCorePngDataIDAT : TruliooCorePngData
- (instancetype)initWithBytes:(TruliooCoreKotlinByteArray *)bytes __attribute__((swift_name("init(bytes:)"))) __attribute__((objc_designated_initializer));
@property (readonly) TruliooCoreKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PngData.IHDR")))
@interface TruliooCorePngDataIHDR : TruliooCorePngData
- (instancetype)initWithBytes:(TruliooCoreKotlinByteArray *)bytes __attribute__((swift_name("init(bytes:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int8_t bitDepth __attribute__((swift_name("bitDepth")));
@property (readonly) TruliooCoreKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property (readonly) int8_t colorType __attribute__((swift_name("colorType")));
@property (readonly) int8_t compresionMethod __attribute__((swift_name("compresionMethod")));
@property (readonly) int8_t filterMethod __attribute__((swift_name("filterMethod")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int8_t interlaceMethod __attribute__((swift_name("interlaceMethod")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PngDataSections")))
@interface TruliooCorePngDataSections : TruliooCoreBase
@property (class, readonly, getter=companion) TruliooCorePngDataSectionsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<TruliooCoreIDAT *> *IDAT __attribute__((swift_name("IDAT")));
@property (readonly) TruliooCoreIEND *IEND __attribute__((swift_name("IEND")));
@property (readonly) TruliooCoreIHDR *IHDR __attribute__((swift_name("IHDR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PngDataSections.Builder")))
@interface TruliooCorePngDataSectionsBuilder : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)appendIDATData:(TruliooCoreKotlinArray<TruliooCoreIDAT *> *)data __attribute__((swift_name("appendIDAT(data:)")));
- (TruliooCorePngDataSections *)build __attribute__((swift_name("build()")));
- (void)verify __attribute__((swift_name("verify()")));
@property TruliooCoreIEND *iEND __attribute__((swift_name("iEND")));
@property TruliooCoreIHDR *iHDR __attribute__((swift_name("iHDR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PngDataSections.Companion")))
@interface TruliooCorePngDataSectionsCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCorePngDataSectionsCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCorePngDataSections *)buildUpdate:(void (^)(TruliooCorePngDataSectionsBuilder *))update __attribute__((swift_name("build(update:)")));
@end

__attribute__((swift_name("IAsyncQueue")))
@protocol TruliooCoreIAsyncQueue
@required
- (void)addType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("add(type:)")));
- (void)addPayload:(TruliooCoreMetadataPayload *)payload __attribute__((swift_name("add(payload:)")));
- (void)addPayload_:(TruliooCoreStepUpdatePayload *)payload __attribute__((swift_name("add(payload_:)")));
- (BOOL)hasQueuedItems __attribute__((swift_name("hasQueuedItems()")));
- (void)start __attribute__((swift_name("start()")));
@end

__attribute__((swift_name("AsyncQueue")))
@interface TruliooCoreAsyncQueue : TruliooCoreBase <TruliooCoreIAsyncQueue>
- (instancetype)initWithContext:(id<TruliooCoreKotlinCoroutineContext>)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreAsyncQueueCompanion *companion __attribute__((swift_name("companion")));
- (void)addType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("add(type:)")));
- (void)addPayload:(TruliooCoreMetadataPayload *)payload __attribute__((swift_name("add(payload:)")));
- (void)addPayload_:(TruliooCoreStepUpdatePayload *)payload __attribute__((swift_name("add(payload_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addMetadataPayload:(TruliooCoreMetadataPayload *)payload completionHandler:(void (^)(id<TruliooCoreKotlinx_coroutines_coreJob> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addMetadata(payload:completionHandler:)")));
- (BOOL)hasQueuedItems __attribute__((swift_name("hasQueuedItems()")));
- (void)start __attribute__((swift_name("start()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startStepStep:(TruliooCoreAPIContractStepType *)step completionHandler:(void (^)(id<TruliooCoreKotlinx_coroutines_coreJob> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startStep(step:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStepPayload:(TruliooCoreStepUpdatePayload *)payload completionHandler:(void (^)(id<TruliooCoreKotlinx_coroutines_coreJob> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateStep(payload:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AsyncQueue.Companion")))
@interface TruliooCoreAsyncQueueCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreAsyncQueueCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t PRESERVED_BUFFER_SIZE __attribute__((swift_name("PRESERVED_BUFFER_SIZE")));
@end

__attribute__((swift_name("KotlinReadOnlyProperty")))
@protocol TruliooCoreKotlinReadOnlyProperty
@required
- (id _Nullable)getValueThisRef:(id _Nullable)thisRef property:(id<TruliooCoreKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Observable")))
@interface TruliooCoreObservable<T> : TruliooCoreBase <TruliooCoreKotlinReadOnlyProperty>
- (instancetype)initWithInitial:(T _Nullable)initial preventDuplicateUpdates:(BOOL)preventDuplicateUpdates __attribute__((swift_name("init(initial:preventDuplicateUpdates:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreObservable<T> *)getValueThisRef:(id _Nullable)thisRef property:(id<TruliooCoreKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
- (void)removeAllSubscribers __attribute__((swift_name("removeAllSubscribers()")));
- (void)subscribeKey:(id)key callback:(void (^)(T _Nullable, T _Nullable))callback __attribute__((swift_name("subscribe(key:callback:)")));
- (void (^ _Nullable)(T _Nullable, T _Nullable))unsubscribeKey:(id)key __attribute__((swift_name("unsubscribe(key:)")));
@property (readonly) BOOL preventDuplicateUpdates __attribute__((swift_name("preventDuplicateUpdates")));
@property T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Injection")))
@interface TruliooCoreInjection : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)injection __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreInjection *shared __attribute__((swift_name("shared")));
- (NSArray<TruliooCoreInstance *> *)instances __attribute__((swift_name("instances()")));
- (id<TruliooCoreIRegistry>)registerRegistry:(id<TruliooCoreIRegistry>)registry __attribute__((swift_name("register(registry:)")));
- (BOOL)unload __attribute__((swift_name("unload()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Injection.External")))
@interface TruliooCoreInjectionExternal : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreInjectionExternalCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Injection.ExternalCompanion")))
@interface TruliooCoreInjectionExternalCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreInjectionExternalCompanion *shared __attribute__((swift_name("shared")));
- (id)getClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("get(clazz:)")));
- (id<TruliooCoreKotlinLazy>)injectClazz:(id<TruliooCoreKotlinKClass>)clazz __attribute__((swift_name("inject(clazz:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Instance")))
@interface TruliooCoreInstance : TruliooCoreBase
- (instancetype)initWithClazz:(id<TruliooCoreKotlinKClass>)clazz storage:(TruliooCoreInstanceSTORAGE *)storage __attribute__((swift_name("init(clazz:storage:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<TruliooCoreKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) TruliooCoreInstanceSTORAGE *storage __attribute__((swift_name("storage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Instance.STORAGE")))
@interface TruliooCoreInstanceSTORAGE : TruliooCoreKotlinEnum<TruliooCoreInstanceSTORAGE *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreInstanceSTORAGE *cache __attribute__((swift_name("cache")));
@property (class, readonly) TruliooCoreInstanceSTORAGE *create __attribute__((swift_name("create")));
+ (TruliooCoreKotlinArray<TruliooCoreInstanceSTORAGE *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraResolution")))
@interface TruliooCoreCameraResolution : TruliooCoreBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(width:height:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreCameraResolution *)doCopyWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("doCopy(width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("IMetadataFactory")))
@protocol TruliooCoreIMetadataFactory
@required
- (id<TruliooCoreIMetadata>)createKey:(NSString *)key value:(id)value __attribute__((swift_name("create(key:value:)")));
- (id<TruliooCoreIMetadata>)createKey:(NSString *)key value_:(NSString *)value __attribute__((swift_name("create(key:value_:)")));
@end

__attribute__((swift_name("IDocumentMetadataFactory")))
@protocol TruliooCoreIDocumentMetadataFactory <TruliooCoreIMetadataFactory>
@required
- (id<TruliooCoreIMetadata>)autoCaptureAverageRate:(NSArray<TruliooCoreInt *> *)rate __attribute__((swift_name("autoCaptureAverage(rate:)")));
- (id<TruliooCoreIMetadata>)autoCaptureDefaulted __attribute__((swift_name("autoCaptureDefaulted()")));
- (id<TruliooCoreIMetadata>)autoCaptureOccurred __attribute__((swift_name("autoCaptureOccurred()")));
- (id<TruliooCoreIMetadata>)deviceCameraResolutionResolution:(TruliooCoreCameraResolution *)resolution __attribute__((swift_name("deviceCameraResolution(resolution:)")));
- (id<TruliooCoreIMetadata>)documentTypeType:(TruliooCoreDocumentCaptureType *)type __attribute__((swift_name("documentType(type:)")));
- (id<TruliooCoreIMetadata>)errorSendingDocumentErrorMessage:(NSString *)errorMessage __attribute__((swift_name("errorSendingDocument(errorMessage:)")));
- (id<TruliooCoreIMetadata>)identifiedDocumentType:(TruliooCoreMRTDTYPE *)type __attribute__((swift_name("identifiedDocument(type:)")));
- (id<TruliooCoreIMetadata>)manualCaptureDefaulted __attribute__((swift_name("manualCaptureDefaulted()")));
- (id<TruliooCoreIMetadata>)manualCaptureOccurred __attribute__((swift_name("manualCaptureOccurred()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IDocumentMetadataFactoryCompanion")))
@interface TruliooCoreIDocumentMetadataFactoryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIDocumentMetadataFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AUTO_CAPTURE_DEFAULTED __attribute__((swift_name("AUTO_CAPTURE_DEFAULTED")));
@property (readonly) NSString *AUTO_CAPTURE_IMAGES_PER_SECOND __attribute__((swift_name("AUTO_CAPTURE_IMAGES_PER_SECOND")));
@property (readonly) NSString *AUTO_CAPTURE_OCCURRED __attribute__((swift_name("AUTO_CAPTURE_OCCURRED")));
@property (readonly) NSString *DEVICE_CAMERA_RESOLUTION __attribute__((swift_name("DEVICE_CAMERA_RESOLUTION")));
@property (readonly) NSString *DOCUMENT_IDENTIFIED __attribute__((swift_name("DOCUMENT_IDENTIFIED")));
@property (readonly) NSString *DOCUMENT_SELECT __attribute__((swift_name("DOCUMENT_SELECT")));
@property (readonly) NSString *DOCUMENT_UPLOAD_ERROR __attribute__((swift_name("DOCUMENT_UPLOAD_ERROR")));
@property (readonly) NSString *MANUAL_CAPTURE_DEFAULTED __attribute__((swift_name("MANUAL_CAPTURE_DEFAULTED")));
@property (readonly) NSString *MANUAL_CAPTURE_OCCURRED __attribute__((swift_name("MANUAL_CAPTURE_OCCURRED")));
@end

__attribute__((swift_name("IJurisdictionMetadataFactory")))
@protocol TruliooCoreIJurisdictionMetadataFactory <TruliooCoreIMetadataFactory>
@required
- (id<TruliooCoreIMetadata>)countryCountry:(NSString *)country __attribute__((swift_name("country(country:)")));
- (id<TruliooCoreIMetadata>)stateState:(NSString *)state __attribute__((swift_name("state(state:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IJurisdictionMetadataFactoryCompanion")))
@interface TruliooCoreIJurisdictionMetadataFactoryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIJurisdictionMetadataFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *COUNTRY_SELECT __attribute__((swift_name("COUNTRY_SELECT")));
@property (readonly) NSString *STATE_SELECT __attribute__((swift_name("STATE_SELECT")));
@end

__attribute__((swift_name("ILoggingMetadataFactory")))
@protocol TruliooCoreILoggingMetadataFactory <TruliooCoreIMetadataFactory>
@required
- (id<TruliooCoreIMetadata>)remoteLogs __attribute__((swift_name("remoteLogs()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ILoggingMetadataFactoryCompanion")))
@interface TruliooCoreILoggingMetadataFactoryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreILoggingMetadataFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *INTERNAL_LOG __attribute__((swift_name("INTERNAL_LOG")));
@end

__attribute__((swift_name("IMLMetadataFactory")))
@protocol TruliooCoreIMLMetadataFactory <TruliooCoreIMetadataFactory>
@required
- (id<TruliooCoreIMetadata>)documentAutoToManualFailoverOccurred __attribute__((swift_name("documentAutoToManualFailoverOccurred()")));
- (id<TruliooCoreIMetadata>)firstDocumentRecognitionTimeTime:(id)time __attribute__((swift_name("firstDocumentRecognitionTime(time:)")));
- (id<TruliooCoreIMetadata>)mlModelVersionVersion:(NSString *)version __attribute__((swift_name("mlModelVersion(version:)")));
- (id<TruliooCoreIMetadata>)successfulDocumentAutoCaptureTimeTime:(id)time __attribute__((swift_name("successfulDocumentAutoCaptureTime(time:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IMLMetadataFactoryCompanion")))
@interface TruliooCoreIMLMetadataFactoryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIMLMetadataFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AUTO_TO_MANUAL_FAILOVER_OCCURRED __attribute__((swift_name("AUTO_TO_MANUAL_FAILOVER_OCCURRED")));
@property (readonly) NSString *FIRST_RECOGNITION_TIME __attribute__((swift_name("FIRST_RECOGNITION_TIME")));
@property (readonly) NSString *MODEL_VERSION __attribute__((swift_name("MODEL_VERSION")));
@property (readonly) NSString *SUCCESSFUL_AUTO_CAPTURE_TIME __attribute__((swift_name("SUCCESSFUL_AUTO_CAPTURE_TIME")));
@end

__attribute__((swift_name("IPermissionsMetadataFactory")))
@protocol TruliooCoreIPermissionsMetadataFactory <TruliooCoreIMetadataFactory>
@required
- (id<TruliooCoreIMetadata>)cameraDeniedActionAction:(TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction *)action __attribute__((swift_name("cameraDeniedAction(action:)")));
- (id<TruliooCoreIMetadata>)cameraDeniedOnScreenScreen:(TruliooCoreAPIContractStepType *)screen __attribute__((swift_name("cameraDeniedOnScreen(screen:)")));
- (id<TruliooCoreIMetadata>)cameraRequestReached __attribute__((swift_name("cameraRequestReached()")));
- (id<TruliooCoreIMetadata>)cameraUnableToContinueAction:(TruliooCoreMetaDataTypesCameraPermissionScreenButtonAction *)action __attribute__((swift_name("cameraUnableToContinue(action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPermissionsMetadataFactoryCompanion")))
@interface TruliooCoreIPermissionsMetadataFactoryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIPermissionsMetadataFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BUTTON_ACTION __attribute__((swift_name("BUTTON_ACTION")));
@property (readonly) NSString *CANT_CONTINUE __attribute__((swift_name("CANT_CONTINUE")));
@property (readonly) NSString *DENIED_ON_SCREEN __attribute__((swift_name("DENIED_ON_SCREEN")));
@property (readonly) NSString *REACHED_CAMERA_PERMISSION __attribute__((swift_name("REACHED_CAMERA_PERMISSION")));
@end

__attribute__((swift_name("ISelfieMetadataFactory")))
@protocol TruliooCoreISelfieMetadataFactory <TruliooCoreIMetadataFactory>
@required
- (id<TruliooCoreIMetadata>)autoCapture __attribute__((swift_name("autoCapture()")));
- (id<TruliooCoreIMetadata>)captureTimeTime:(id)time __attribute__((swift_name("captureTime(time:)")));
- (id<TruliooCoreIMetadata>)manualCapture __attribute__((swift_name("manualCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ISelfieMetadataFactoryCompanion")))
@interface TruliooCoreISelfieMetadataFactoryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreISelfieMetadataFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AUTO_OCCURRED __attribute__((swift_name("AUTO_OCCURRED")));
@property (readonly) NSString *CAPTURE_TIME __attribute__((swift_name("CAPTURE_TIME")));
@property (readonly) NSString *MANUAL_CAPTURE __attribute__((swift_name("MANUAL_CAPTURE")));
@end

__attribute__((swift_name("ISubmissionMetadataFactory")))
@protocol TruliooCoreISubmissionMetadataFactory <TruliooCoreIMetadataFactory>
@required
- (id<TruliooCoreIMetadata>)loadingOccurred __attribute__((swift_name("loadingOccurred()")));
- (id<TruliooCoreIMetadata>)submissionLoadingTimeTime:(id)time __attribute__((swift_name("submissionLoadingTime(time:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ISubmissionMetadataFactoryCompanion")))
@interface TruliooCoreISubmissionMetadataFactoryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreISubmissionMetadataFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *LOADING_OCCURRED __attribute__((swift_name("LOADING_OCCURRED")));
@property (readonly) NSString *LOADING_TIME __attribute__((swift_name("LOADING_TIME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetadataFactory")))
@interface TruliooCoreMetadataFactory : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)metadataFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreMetadataFactory *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreIMetadataFactory>)ofType __attribute__((swift_name("ofType()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetadataPayload")))
@interface TruliooCoreMetadataPayload : TruliooCoreBase
- (instancetype)initWithType:(TruliooCoreAPIContractStepType *)type metadata:(TruliooCoreKotlinArray<id<TruliooCoreIMetadata>> *)metadata __attribute__((swift_name("init(type:metadata:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreMetadataPayload *)doCopyType:(TruliooCoreAPIContractStepType *)type metadata:(TruliooCoreKotlinArray<id<TruliooCoreIMetadata>> *)metadata __attribute__((swift_name("doCopy(type:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKotlinArray<id<TruliooCoreIMetadata>> *metadata __attribute__((swift_name("metadata")));
@property (readonly) TruliooCoreAPIContractStepType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepUpdatePayload")))
@interface TruliooCoreStepUpdatePayload : TruliooCoreBase
- (instancetype)initWithType:(TruliooCoreAPIContractStepType *)type status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("init(type:status:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreStepUpdatePayload *)doCopyType:(TruliooCoreAPIContractStepType *)type status:(TruliooCoreAPIContractStepStatus *)status __attribute__((swift_name("doCopy(type:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreAPIContractStepStatus *status __attribute__((swift_name("status")));
@property (readonly) TruliooCoreAPIContractStepType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Either")))
@interface TruliooCoreEither<Data, Fail> : TruliooCoreBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<id, Fail> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("async(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFailMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<Data, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFail(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFailFlatMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<Data, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFailFlat(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFlattenMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<id, Fail> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFlatten(map:completionHandler:)")));
- (TruliooCoreEither<Data, id> *)failFlatMap:(TruliooCoreEither<Data, id> *(^)(Fail _Nullable))map __attribute__((swift_name("failFlat(map:)")));
- (TruliooCoreEither<id, Fail> *)flattenMap:(TruliooCoreEither<id, Fail> *(^)(Data _Nullable))map __attribute__((swift_name("flatten(map:)")));
- (Data _Nullable)getOrElseOrElse:(Data _Nullable (^)(void))orElse __attribute__((swift_name("getOrElse(orElse:)")));
- (TruliooCoreEither<Data, id> *)onFailMap:(id _Nullable (^)(Fail _Nullable))map __attribute__((swift_name("onFail(map:)")));
- (TruliooCoreEither<Data, Fail> *)sideEffectEffect:(void (^)(Data _Nullable))effect __attribute__((swift_name("sideEffect(effect:)")));
- (TruliooCoreEither<id, Fail> *)thenMap:(id _Nullable (^)(Data _Nullable))map __attribute__((swift_name("then(map:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Failure")))
@interface TruliooCoreFailure<Data, Fail> : TruliooCoreEither<Data, Fail>
- (instancetype)initWithValue:(Fail _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<id, Fail> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("async(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFailMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<Data, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFail(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFailFlatMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<Data, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFailFlat(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFlattenMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<id, Fail> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFlatten(map:completionHandler:)")));
- (TruliooCoreFailure<Data, Fail> *)doCopyValue:(Fail _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (TruliooCoreEither<Data, id> *)failFlatMap:(TruliooCoreEither<Data, id> *(^)(Fail _Nullable))map __attribute__((swift_name("failFlat(map:)")));
- (TruliooCoreEither<id, Fail> *)flattenMap:(TruliooCoreEither<id, Fail> *(^)(Data _Nullable))map __attribute__((swift_name("flatten(map:)")));
- (Data _Nullable)getOrElseOrElse:(Data _Nullable (^)(void))orElse __attribute__((swift_name("getOrElse(orElse:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (TruliooCoreEither<Data, id> *)onFailMap:(id _Nullable (^)(Fail _Nullable))map __attribute__((swift_name("onFail(map:)")));
- (TruliooCoreEither<Data, Fail> *)sideEffectEffect:(void (^)(Data _Nullable))effect __attribute__((swift_name("sideEffect(effect:)")));
- (TruliooCoreEither<id, Fail> *)thenMap:(id _Nullable (^)(Data _Nullable))map __attribute__((swift_name("then(map:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Fail _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Success")))
@interface TruliooCoreSuccess<Data, Fail> : TruliooCoreEither<Data, Fail>
- (instancetype)initWithValue:(Data _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<id, Fail> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("async(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFailMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<Data, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFail(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFailFlatMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<Data, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFailFlat(map:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)asyncFlattenMap:(id<TruliooCoreKotlinSuspendFunction1>)map completionHandler:(void (^)(TruliooCoreEither<id, Fail> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("asyncFlatten(map:completionHandler:)")));
- (TruliooCoreSuccess<Data, Fail> *)doCopyValue:(Data _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (TruliooCoreEither<Data, id> *)failFlatMap:(TruliooCoreEither<Data, id> *(^)(Fail _Nullable))map __attribute__((swift_name("failFlat(map:)")));
- (TruliooCoreEither<id, Fail> *)flattenMap:(TruliooCoreEither<id, Fail> *(^)(Data _Nullable))map __attribute__((swift_name("flatten(map:)")));
- (Data _Nullable)getOrElseOrElse:(Data _Nullable (^)(void))orElse __attribute__((swift_name("getOrElse(orElse:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (TruliooCoreEither<Data, id> *)onFailMap:(id _Nullable (^)(Fail _Nullable))map __attribute__((swift_name("onFail(map:)")));
- (TruliooCoreEither<Data, Fail> *)sideEffectEffect:(void (^)(Data _Nullable))effect __attribute__((swift_name("sideEffect(effect:)")));
- (TruliooCoreEither<id, Fail> *)thenMap:(id _Nullable (^)(Data _Nullable))map __attribute__((swift_name("then(map:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Data _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("IEdgeFlow")))
@protocol TruliooCoreIEdgeFlow
@required
- (void)registerRegistration:(void (^)(id<TruliooCoreIEdgeRegistry>))registration __attribute__((swift_name("register(registration:)")));
- (id<TruliooCoreKotlinx_coroutines_coreFlow>)startWithData:(id _Nullable)data feature:(id<TruliooCoreKotlinKClass>)feature __attribute__((swift_name("startWith(data:feature:)")));
@property (readonly) id<TruliooCoreIEdgeRegistry> edges __attribute__((swift_name("edges")));
@end

__attribute__((swift_name("EdgeFlow")))
@interface TruliooCoreEdgeFlow : TruliooCoreBase <TruliooCoreIEdgeFlow>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreEdgeFlowCompanion *companion __attribute__((swift_name("companion")));
- (id<TruliooCoreKotlinx_coroutines_coreFlow>)startWithData:(id _Nullable)data feature:(id<TruliooCoreKotlinKClass>)feature __attribute__((swift_name("startWith(data:feature:)")));
@property (readonly) id<TruliooCoreIEdgeRegistry> edges __attribute__((swift_name("edges")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdgeFlow.Companion")))
@interface TruliooCoreEdgeFlowCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreEdgeFlowCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreEdgeFlow *)ofBuilder:(void (^)(TruliooCoreEdgeFlow *))builder __attribute__((swift_name("of(builder:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdgeFlow.CompanionEmptyFeature")))
@interface TruliooCoreEdgeFlowCompanionEmptyFeature : TruliooCoreIFeature<id, id>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)emptyFeature __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreEdgeFlowCompanionEmptyFeature *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)processData:(id)data completionHandler:(void (^)(TruliooCoreFeatureResult<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(data:completionHandler:)")));
@end

__attribute__((swift_name("IEdgeRegistry")))
@protocol TruliooCoreIEdgeRegistry
@required
- (id<TruliooCoreIEdge> _Nullable)getEdgeOrNullCurrent:(TruliooCoreIFeature<id, id> *)current onEvent:(id<TruliooCoreIEvent>)onEvent __attribute__((swift_name("getEdgeOrNull(current:onEvent:)")));
- (TruliooCoreIFeature<id, id> * _Nullable)getFeatureOrNullFeature:(id<TruliooCoreKotlinKClass>)feature __attribute__((swift_name("getFeatureOrNull(feature:)")));
- (void)registerEdges:(void (^)(id<TruliooCoreIEdgeRegistry>))edges __attribute__((swift_name("register(edges:)")));
- (id<TruliooCoreIEdge>)after:(TruliooCoreKotlinPair<TruliooCoreIFeature<id, id> *, TruliooCoreIFeature<id, id> *> *)receiver event:(id<TruliooCoreIEvent>)event __attribute__((swift_name("after(_:event:)")));
- (TruliooCoreKotlinPair<TruliooCoreIFeature<id, id> *, TruliooCoreIFeature<id, id> *> *)to:(TruliooCoreIFeature<id, id> *)receiver next:(TruliooCoreIFeature<id, id> *)next __attribute__((swift_name("to(_:next:)")));
@property (readonly) NSSet<id<TruliooCoreIEdge>> *edges __attribute__((swift_name("edges")));
@property (readonly) NSSet<TruliooCoreIFeature<id, id> *> *features __attribute__((swift_name("features")));
@end

__attribute__((swift_name("EdgeRegistry")))
@interface TruliooCoreEdgeRegistry : TruliooCoreBase <TruliooCoreIEdgeRegistry>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreEdgeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id<TruliooCoreIEdge>)after:(TruliooCoreKotlinPair<TruliooCoreIFeature<id, id> *, TruliooCoreIFeature<id, id> *> *)receiver event:(id<TruliooCoreIEvent>)event __attribute__((swift_name("after(_:event:)")));
- (TruliooCoreKotlinPair<TruliooCoreIFeature<id, id> *, TruliooCoreIFeature<id, id> *> *)to:(TruliooCoreIFeature<id, id> *)receiver next:(TruliooCoreIFeature<id, id> *)next __attribute__((swift_name("to(_:next:)")));
@property (readonly) NSSet<id<TruliooCoreIEdge>> *edges __attribute__((swift_name("edges")));
@property (readonly) NSSet<TruliooCoreIFeature<id, id> *> *features __attribute__((swift_name("features")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EdgeRegistry.Companion")))
@interface TruliooCoreEdgeRegistryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreEdgeRegistryCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreIEdgeRegistry>)create __attribute__((swift_name("create()")));
@end

__attribute__((swift_name("IEdge")))
@protocol TruliooCoreIEdge
@required
@property (readonly) TruliooCoreIFeature<id, id> *initial __attribute__((swift_name("initial")));
@property (readonly) id<TruliooCoreIEvent> onEvent __attribute__((swift_name("onEvent")));
@property (readonly) TruliooCoreIFeature<id, id> *resulting __attribute__((swift_name("resulting")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IEdgeCompanion")))
@interface TruliooCoreIEdgeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreIEdgeCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreIEdge>)fromFrom:(TruliooCoreIFeature<id, id> *)from to:(TruliooCoreIFeature<id, id> *)to event:(id<TruliooCoreIEvent>)event __attribute__((swift_name("from(from:to:event:)")));
@end

__attribute__((swift_name("KotlinException")))
@interface TruliooCoreKotlinException : TruliooCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnregisteredFeatureException")))
@interface TruliooCoreUnregisteredFeatureException : TruliooCoreKotlinException
- (instancetype)initWithFeature:(id<TruliooCoreKotlinKClass>)feature __attribute__((swift_name("init(feature:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SequenceFacadeCompanion")))
@interface TruliooCoreSequenceFacadeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreSequenceFacadeCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)isCurrentStepTypeType:(TruliooCoreAPIContractStepType *)type __attribute__((swift_name("isCurrentStepType(type:)")));
@end

__attribute__((swift_name("Duration")))
@interface TruliooCoreDuration : TruliooCoreBase <TruliooCoreKotlinComparable>
@property (class, readonly, getter=companion) TruliooCoreDurationCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(TruliooCoreDuration *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int64_t)getFactor __attribute__((swift_name("getFactor()")));
- (TruliooCoreDuration *)minusOther:(TruliooCoreDuration *)other __attribute__((swift_name("minus(other:)")));
- (TruliooCoreHours *)toHours __attribute__((swift_name("toHours()")));
- (TruliooCoreMilliseconds *)toMillis __attribute__((swift_name("toMillis()")));
- (TruliooCoreMinutes *)toMinutes __attribute__((swift_name("toMinutes()")));
- (TruliooCoreSeconds *)toSeconds __attribute__((swift_name("toSeconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t duration __attribute__((swift_name("duration")));
@property (readonly) int64_t millis __attribute__((swift_name("millis")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Duration.Companion")))
@interface TruliooCoreDurationCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreDurationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t HOURS_FACTOR __attribute__((swift_name("HOURS_FACTOR")));
@property (readonly) int64_t MILLIS_FACTOR __attribute__((swift_name("MILLIS_FACTOR")));
@property (readonly) int64_t MINUTES_FACTOR __attribute__((swift_name("MINUTES_FACTOR")));
@property (readonly) int64_t SECONDS_FACTOR __attribute__((swift_name("SECONDS_FACTOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hours")))
@interface TruliooCoreHours : TruliooCoreDuration
- (instancetype)initWithHours:(int64_t)hours __attribute__((swift_name("init(hours:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("IMetered")))
@protocol TruliooCoreIMetered
@required
- (void)close __attribute__((swift_name("close()")));
- (BOOL)meterPeriod:(TruliooCoreDuration *)period __attribute__((swift_name("meter(period:)")));
- (void)onMeteredEvent __attribute__((swift_name("onMeteredEvent()")));
@property (readonly) TruliooCoreObservable<TruliooCoreInt *> *eventsPerPeriod __attribute__((swift_name("eventsPerPeriod")));
@end

__attribute__((swift_name("ITimer")))
@protocol TruliooCoreITimer
@required
- (void)cancelTimerTimerId:(int32_t)timerId __attribute__((swift_name("cancelTimer(timerId:)")));
- (int64_t)getDuration __attribute__((swift_name("getDuration()")));
- (id<TruliooCoreKotlinx_coroutines_coreJob> _Nullable)getTimerTimerId:(int32_t)timerId __attribute__((swift_name("getTimer(timerId:)")));
- (int32_t)startDuration:(TruliooCoreDuration *)duration onComplete:(void (^)(void))onComplete __attribute__((swift_name("start(duration:onComplete:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ITimerCompanion")))
@interface TruliooCoreITimerCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreITimerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreSeconds *AUTO_TO_MANUAL __attribute__((swift_name("AUTO_TO_MANUAL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metered")))
@interface TruliooCoreMetered : TruliooCoreBase <TruliooCoreIMetered>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (BOOL)meterPeriod:(TruliooCoreDuration *)period __attribute__((swift_name("meter(period:)")));
- (void)onMeteredEvent __attribute__((swift_name("onMeteredEvent()")));
@property (readonly) TruliooCoreObservable<TruliooCoreInt *> *eventsPerPeriod __attribute__((swift_name("eventsPerPeriod")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Milliseconds")))
@interface TruliooCoreMilliseconds : TruliooCoreDuration
- (instancetype)initWithMillis:(int64_t)millis __attribute__((swift_name("init(millis:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Minutes")))
@interface TruliooCoreMinutes : TruliooCoreDuration
- (instancetype)initWithMinutes:(int64_t)minutes __attribute__((swift_name("init(minutes:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seconds")))
@interface TruliooCoreSeconds : TruliooCoreDuration
- (instancetype)initWithSeconds:(int64_t)seconds __attribute__((swift_name("init(seconds:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Timer")))
@interface TruliooCoreTimer : TruliooCoreBase <TruliooCoreITimer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancelTimerTimerId:(int32_t)timerId __attribute__((swift_name("cancelTimer(timerId:)")));
- (int64_t)getDuration __attribute__((swift_name("getDuration()")));
- (id<TruliooCoreKotlinx_coroutines_coreJob> _Nullable)getTimerTimerId:(int32_t)timerId __attribute__((swift_name("getTimer(timerId:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)registerJobJob:(id<TruliooCoreKotlinx_coroutines_coreJob>)job __attribute__((swift_name("registerJob(job:)")));
- (int32_t)startDuration:(TruliooCoreDuration *)duration onComplete:(void (^)(void))onComplete __attribute__((swift_name("start(duration:onComplete:)")));
@end

@interface TruliooCoreMetadataFactory (Extensions)
- (id<TruliooCoreIDocumentMetadataFactory>)document __attribute__((swift_name("document()")));
- (id<TruliooCoreIJurisdictionMetadataFactory>)jurisdiction __attribute__((swift_name("jurisdiction()")));
- (id<TruliooCoreILoggingMetadataFactory>)logging __attribute__((swift_name("logging()")));
- (id<TruliooCoreIMLMetadataFactory>)ml __attribute__((swift_name("ml()")));
- (id<TruliooCoreIPermissionsMetadataFactory>)permissions __attribute__((swift_name("permissions()")));
- (id<TruliooCoreISelfieMetadataFactory>)selfie __attribute__((swift_name("selfie()")));
@end

@interface TruliooCoreEither (Extensions)
- (id _Nullable)coerce __attribute__((swift_name("coerce()")));
- (TruliooCoreEither<id, id> *)join __attribute__((swift_name("join()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface TruliooCorePlatformKt : TruliooCoreBase
+ (id<TruliooCoreKotlinx_coroutines_coreCoroutineScope>)BackgroundScope __attribute__((swift_name("BackgroundScope()")));
+ (NSString *)getPlatformName __attribute__((swift_name("getPlatformName()")));
+ (NSString *)getSdkVersion __attribute__((swift_name("getSdkVersion()")));
+ (NSString *)qualifiedName:(id)receiver __attribute__((swift_name("qualifiedName(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IImageParcelKt")))
@interface TruliooCoreIImageParcelKt : TruliooCoreBase
+ (UIImage *)cropTo:(UIImage *)receiver cropZone:(TruliooCoreKotlinCValue<id> *)cropZone __attribute__((swift_name("cropTo(_:cropZone:)")));
+ (UIImage *)resize:(UIImage *)receiver size:(TruliooCoreSize2D *)size __attribute__((swift_name("resize(_:size:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstanceInjectionKt")))
@interface TruliooCoreInstanceInjectionKt : TruliooCoreBase
+ (id<TruliooCoreKotlinLazy>)inject __attribute__((swift_name("inject()")));
+ (id)using __attribute__((swift_name("using()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstanceRegistryKt")))
@interface TruliooCoreInstanceRegistryKt : TruliooCoreBase
+ (TruliooCoreInstance *)registerBlock:(TruliooCoreInstanceSTORAGE *(^)(void))block __attribute__((swift_name("register(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherKt")))
@interface TruliooCoreEitherKt : TruliooCoreBase
+ (TruliooCoreEither<id, id> *)raise:(id _Nullable)receiver __attribute__((swift_name("raise(_:)")));
+ (TruliooCoreEither<id, id> *)raiseFail:(id _Nullable)receiver __attribute__((swift_name("raiseFail(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebounceKt")))
@interface TruliooCoreDebounceKt : TruliooCoreBase
+ (void (^)(void))debounce:(void (^)(void))receiver timeout:(TruliooCoreDuration *)timeout scope:(id<TruliooCoreKotlinx_coroutines_coreCoroutineScope> _Nullable)scope __attribute__((swift_name("debounce(_:timeout:scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentTimeKt")))
@interface TruliooCoreGetCurrentTimeKt : TruliooCoreBase
+ (int64_t)getCurrentTime __attribute__((swift_name("getCurrentTime()")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface TruliooCoreKotlinRuntimeException : TruliooCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface TruliooCoreKotlinIllegalStateException : TruliooCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface TruliooCoreKotlinCancellationException : TruliooCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol TruliooCoreKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TruliooCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol TruliooCoreKotlinx_coroutines_coreSharedFlow <TruliooCoreKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol TruliooCoreKotlinx_coroutines_coreStateFlow <TruliooCoreKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol TruliooCoreKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol TruliooCoreKotlinx_coroutines_coreMutableSharedFlow <TruliooCoreKotlinx_coroutines_coreSharedFlow, TruliooCoreKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol TruliooCoreKotlinx_coroutines_coreMutableStateFlow <TruliooCoreKotlinx_coroutines_coreStateFlow, TruliooCoreKotlinx_coroutines_coreMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface TruliooCoreKotlinArray<T> : TruliooCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(TruliooCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<TruliooCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface TruliooCoreKotlinEnumCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol TruliooCoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<TruliooCoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<TruliooCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol TruliooCoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<TruliooCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<TruliooCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol TruliooCoreKotlinx_serialization_coreKSerializer <TruliooCoreKotlinx_serialization_coreSerializationStrategy, TruliooCoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol TruliooCoreKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol TruliooCoreKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol TruliooCoreKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol TruliooCoreKotlinKClass <TruliooCoreKotlinKDeclarationContainer, TruliooCoreKotlinKAnnotatedElement, TruliooCoreKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol TruliooCoreKotlinMatchResult
@required
- (id<TruliooCoreKotlinMatchResult> _Nullable)next __attribute__((swift_name("next()")));
@property (readonly) TruliooCoreKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<TruliooCoreKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) TruliooCoreKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface TruliooCoreKotlinRegex : TruliooCoreBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(TruliooCoreKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<TruliooCoreKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<TruliooCoreKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<TruliooCoreKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<TruliooCoreKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<TruliooCoreKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<TruliooCoreKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<TruliooCoreKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<TruliooCoreKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface TruliooCoreKotlinByteArray : TruliooCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(TruliooCoreByte *(^)(TruliooCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (TruliooCoreKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol TruliooCoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<TruliooCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol TruliooCoreKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface TruliooCoreKtor_client_coreHttpClient : TruliooCoreBase <TruliooCoreKotlinx_coroutines_coreCoroutineScope, TruliooCoreKtor_ioCloseable>
- (instancetype)initWithEngine:(id<TruliooCoreKtor_client_coreHttpClientEngine>)engine userConfig:(TruliooCoreKtor_client_coreHttpClientConfig<TruliooCoreKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (TruliooCoreKtor_client_coreHttpClient *)configBlock:(void (^)(TruliooCoreKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<TruliooCoreKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TruliooCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<TruliooCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<TruliooCoreKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) TruliooCoreKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) TruliooCoreKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) TruliooCoreKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) TruliooCoreKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) TruliooCoreKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) TruliooCoreKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface TruliooCoreKotlinUnit : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinError")))
@interface TruliooCoreKotlinError : TruliooCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol TruliooCoreKtor_client_coreHttpClientEngine <TruliooCoreKotlinx_coroutines_coreCoroutineScope, TruliooCoreKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(TruliooCoreKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(TruliooCoreKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(TruliooCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) TruliooCoreKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<TruliooCoreKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol TruliooCoreKotlinx_serialization_coreSerialFormat
@required
@property (readonly) TruliooCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol TruliooCoreKotlinx_serialization_coreStringFormat <TruliooCoreKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<TruliooCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface TruliooCoreKotlinx_serialization_jsonJson : TruliooCoreBase <TruliooCoreKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) TruliooCoreKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(TruliooCoreKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (TruliooCoreKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<TruliooCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<TruliooCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (TruliooCoreKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) TruliooCoreKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) TruliooCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface TruliooCoreKotlinFloatArray : TruliooCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(TruliooCoreFloat *(^)(TruliooCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (TruliooCoreKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/DateTimePeriodIso8601Serializer))
*/
__attribute__((swift_name("Kotlinx_datetimeDateTimePeriod")))
@interface TruliooCoreKotlinx_datetimeDateTimePeriod : TruliooCoreBase
@property (class, readonly, getter=companion) TruliooCoreKotlinx_datetimeDateTimePeriodCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t days __attribute__((swift_name("days")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) int32_t months __attribute__((swift_name("months")));
@property (readonly) int32_t nanoseconds __attribute__((swift_name("nanoseconds")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int32_t years __attribute__((swift_name("years")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/DatePeriodIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDatePeriod")))
@interface TruliooCoreKotlinx_datetimeDatePeriod : TruliooCoreKotlinx_datetimeDateTimePeriod
- (instancetype)initWithYears:(int32_t)years months:(int32_t)months days:(int32_t)days __attribute__((swift_name("init(years:months:days:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKotlinx_datetimeDatePeriodCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t days __attribute__((swift_name("days")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) int32_t nanoseconds __attribute__((swift_name("nanoseconds")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol TruliooCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<TruliooCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<TruliooCoreKotlinCoroutineContextElement> _Nullable)getKey:(id<TruliooCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<TruliooCoreKotlinCoroutineContext>)minusKeyKey:(id<TruliooCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<TruliooCoreKotlinCoroutineContext>)plusContext:(id<TruliooCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol TruliooCoreKotlinCoroutineContextElement <TruliooCoreKotlinCoroutineContext>
@required
@property (readonly) id<TruliooCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface TruliooCoreKotlinAbstractCoroutineContextElement : TruliooCoreBase <TruliooCoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<TruliooCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<TruliooCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol TruliooCoreKotlinContinuationInterceptor <TruliooCoreKotlinCoroutineContextElement>
@required
- (id<TruliooCoreKotlinContinuation>)interceptContinuationContinuation:(id<TruliooCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<TruliooCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher : TruliooCoreKotlinAbstractCoroutineContextElement <TruliooCoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<TruliooCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<TruliooCoreKotlinCoroutineContext>)context block:(id<TruliooCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<TruliooCoreKotlinCoroutineContext>)context block:(id<TruliooCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<TruliooCoreKotlinContinuation>)interceptContinuationContinuation:(id<TruliooCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<TruliooCoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<TruliooCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface TruliooCoreKotlinPair<__covariant A, __covariant B> : TruliooCoreBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol TruliooCoreKotlinx_coroutines_coreJob <TruliooCoreKotlinCoroutineContextElement>
@required
- (id<TruliooCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<TruliooCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(TruliooCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (TruliooCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<TruliooCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(TruliooCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<TruliooCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(TruliooCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<TruliooCoreKotlinx_coroutines_coreJob>)plusOther_:(id<TruliooCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start_ __attribute__((swift_name("start_()")));
@property (readonly) id<TruliooCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((swift_name("KotlinKCallable")))
@protocol TruliooCoreKotlinKCallable <TruliooCoreKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<TruliooCoreKotlinKType> returnType __attribute__((swift_name("returnType")));
@end

__attribute__((swift_name("KotlinKProperty")))
@protocol TruliooCoreKotlinKProperty <TruliooCoreKotlinKCallable>
@required
@end

__attribute__((swift_name("KotlinLazy")))
@protocol TruliooCoreKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol TruliooCoreKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol TruliooCoreKotlinSuspendFunction1 <TruliooCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinCValuesRef")))
@interface TruliooCoreKotlinCValuesRef<T> : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void *)getPointerScope:(TruliooCoreKotlinAutofreeScope *)scope __attribute__((swift_name("getPointer(scope:)")));
@end

__attribute__((swift_name("KotlinCValues")))
@interface TruliooCoreKotlinCValues<T> : TruliooCoreKotlinCValuesRef<T>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (void *)getPointerScope:(TruliooCoreKotlinAutofreeScope *)scope __attribute__((swift_name("getPointer(scope:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void *)placePlacement:(void *)placement __attribute__((swift_name("place(placement:)")));
@property (readonly) int32_t align __attribute__((swift_name("align")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinCValue")))
@interface TruliooCoreKotlinCValue<T> : TruliooCoreKotlinCValues<T>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol TruliooCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol TruliooCoreKotlinx_serialization_coreEncoder
@required
- (id<TruliooCoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<TruliooCoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<TruliooCoreKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<TruliooCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<TruliooCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) TruliooCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol TruliooCoreKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<TruliooCoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<TruliooCoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) TruliooCoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol TruliooCoreKotlinx_serialization_coreDecoder
@required
- (id<TruliooCoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<TruliooCoreKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (TruliooCoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) TruliooCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface TruliooCoreKotlinMatchResultDestructured : TruliooCoreBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<TruliooCoreKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol TruliooCoreKotlinIterable
@required
- (id<TruliooCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol TruliooCoreKotlinCollection <TruliooCoreKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol TruliooCoreKotlinMatchGroupCollection <TruliooCoreKotlinCollection>
@required
- (TruliooCoreKotlinMatchGroup * _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface TruliooCoreKotlinIntProgression : TruliooCoreBase <TruliooCoreKotlinIterable>
@property (class, readonly, getter=companion) TruliooCoreKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (TruliooCoreKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol TruliooCoreKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start__) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol TruliooCoreKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly, getter=start__) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface TruliooCoreKotlinIntRange : TruliooCoreKotlinIntProgression <TruliooCoreKotlinClosedRange, TruliooCoreKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(TruliooCoreInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(TruliooCoreInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
@property (readonly) TruliooCoreInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) TruliooCoreInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start__) TruliooCoreInt *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface TruliooCoreKotlinRegexOption : TruliooCoreKotlinEnum<TruliooCoreKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) TruliooCoreKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) TruliooCoreKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) TruliooCoreKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) TruliooCoreKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) TruliooCoreKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) TruliooCoreKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (TruliooCoreKotlinArray<TruliooCoreKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@property (readonly) int32_t value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface TruliooCoreKotlinRegexCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (TruliooCoreKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol TruliooCoreKotlinSequence
@required
- (id<TruliooCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface TruliooCoreKotlinByteIterator : TruliooCoreBase <TruliooCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TruliooCoreByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface TruliooCoreKtor_client_coreHttpClientEngineConfig : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property TruliooCoreKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface TruliooCoreKtor_client_coreHttpClientConfig<T> : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TruliooCoreKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(TruliooCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<TruliooCoreKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(TruliooCoreKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(TruliooCoreKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol TruliooCoreKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol TruliooCoreKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(TruliooCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<TruliooCoreKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface TruliooCoreKtor_eventsEvents : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(TruliooCoreKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<TruliooCoreKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(TruliooCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(TruliooCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface TruliooCoreKtor_utilsPipeline<TSubject, TContext> : TruliooCoreBase
- (instancetype)initWithPhase:(TruliooCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TruliooCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(TruliooCoreKotlinArray<TruliooCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(TruliooCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(TruliooCoreKtor_utilsPipelinePhase *)reference phase:(TruliooCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(TruliooCoreKtor_utilsPipelinePhase *)reference phase:(TruliooCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(TruliooCoreKtor_utilsPipelinePhase *)phase block:(id<TruliooCoreKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<TruliooCoreKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(TruliooCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(TruliooCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(TruliooCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(TruliooCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<TruliooCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<TruliooCoreKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface TruliooCoreKtor_client_coreHttpReceivePipeline : TruliooCoreKtor_utilsPipeline<TruliooCoreKtor_client_coreHttpResponse *, TruliooCoreKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TruliooCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TruliooCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(TruliooCoreKotlinArray<TruliooCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface TruliooCoreKtor_client_coreHttpRequestPipeline : TruliooCoreKtor_utilsPipeline<id, TruliooCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TruliooCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TruliooCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(TruliooCoreKotlinArray<TruliooCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface TruliooCoreKtor_client_coreHttpResponsePipeline : TruliooCoreKtor_utilsPipeline<TruliooCoreKtor_client_coreHttpResponseContainer *, TruliooCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TruliooCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TruliooCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(TruliooCoreKotlinArray<TruliooCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface TruliooCoreKtor_client_coreHttpSendPipeline : TruliooCoreKtor_utilsPipeline<id, TruliooCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(TruliooCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<TruliooCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(TruliooCoreKotlinArray<TruliooCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface TruliooCoreKtor_client_coreHttpRequestData : TruliooCoreBase
- (instancetype)initWithUrl:(TruliooCoreKtor_httpUrl *)url method:(TruliooCoreKtor_httpHttpMethod *)method headers:(id<TruliooCoreKtor_httpHeaders>)headers body:(TruliooCoreKtor_httpOutgoingContent *)body executionContext:(id<TruliooCoreKotlinx_coroutines_coreJob>)executionContext attributes:(id<TruliooCoreKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<TruliooCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TruliooCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) TruliooCoreKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<TruliooCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) TruliooCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface TruliooCoreKtor_client_coreHttpResponseData : TruliooCoreBase
- (instancetype)initWithStatusCode:(TruliooCoreKtor_httpHttpStatusCode *)statusCode requestTime:(TruliooCoreKtor_utilsGMTDate *)requestTime headers:(id<TruliooCoreKtor_httpHeaders>)headers version:(TruliooCoreKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<TruliooCoreKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<TruliooCoreKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<TruliooCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) TruliooCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) TruliooCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) TruliooCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface TruliooCoreKotlinx_serialization_coreSerializersModule : TruliooCoreBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<TruliooCoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TruliooCoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<TruliooCoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TruliooCoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TruliooCoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TruliooCoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface TruliooCoreKotlinx_serialization_jsonJsonDefault : TruliooCoreKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface TruliooCoreKotlinx_serialization_jsonJsonElement : TruliooCoreBase
@property (class, readonly, getter=companion) TruliooCoreKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface TruliooCoreKotlinx_serialization_jsonJsonConfiguration : TruliooCoreBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface TruliooCoreKotlinFloatIterator : TruliooCoreBase <TruliooCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TruliooCoreFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDateTimePeriod.Companion")))
@interface TruliooCoreKotlinx_datetimeDateTimePeriodCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinx_datetimeDateTimePeriodCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKotlinx_datetimeDateTimePeriod *)parseText:(NSString *)text __attribute__((swift_name("parse(text:)")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDatePeriod.Companion")))
@interface TruliooCoreKotlinx_datetimeDatePeriodCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinx_datetimeDatePeriodCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKotlinx_datetimeDatePeriod *)parseText:(NSString *)text __attribute__((swift_name("parse(text:)")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol TruliooCoreKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol TruliooCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<TruliooCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface TruliooCoreKotlinAbstractCoroutineContextKey<B, E> : TruliooCoreBase <TruliooCoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<TruliooCoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<TruliooCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface TruliooCoreKotlinx_coroutines_coreCoroutineDispatcherKey : TruliooCoreKotlinAbstractCoroutineContextKey<id<TruliooCoreKotlinContinuationInterceptor>, TruliooCoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<TruliooCoreKotlinCoroutineContextKey>)baseKey safeCast:(id<TruliooCoreKotlinCoroutineContextElement> _Nullable (^)(id<TruliooCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol TruliooCoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol TruliooCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol TruliooCoreKotlinx_coroutines_coreChildHandle <TruliooCoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(TruliooCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol TruliooCoreKotlinx_coroutines_coreChildJob <TruliooCoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<TruliooCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol TruliooCoreKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<TruliooCoreKotlinx_coroutines_coreSelectInstance>)select block:(id<TruliooCoreKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol TruliooCoreKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<TruliooCoreKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<TruliooCoreKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("KotlinDeferScope")))
@interface TruliooCoreKotlinDeferScope : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)deferBlock:(void (^)(void))block __attribute__((swift_name("defer(block:)")));
@end

__attribute__((swift_name("KotlinNativePlacement")))
@protocol TruliooCoreKotlinNativePlacement
@required
- (void *)doAllocSize:(int32_t)size align:(int32_t)align __attribute__((swift_name("doAlloc(size:align:)")));
- (void *)doAllocSize:(int64_t)size align_:(int32_t)align __attribute__((swift_name("doAlloc(size:align_:)")));
@end

__attribute__((swift_name("KotlinAutofreeScope")))
@interface TruliooCoreKotlinAutofreeScope : TruliooCoreKotlinDeferScope <TruliooCoreKotlinNativePlacement>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void *)doAllocSize:(int64_t)size align_:(int32_t)align __attribute__((swift_name("doAlloc(size:align_:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol TruliooCoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<TruliooCoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TruliooCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TruliooCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) TruliooCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol TruliooCoreKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface TruliooCoreKotlinx_serialization_coreSerialKind : TruliooCoreBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol TruliooCoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<TruliooCoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<TruliooCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) TruliooCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface TruliooCoreKotlinNothing : TruliooCoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface TruliooCoreKotlinMatchGroup : TruliooCoreBase
- (instancetype)initWithValue:(NSString *)value range:(TruliooCoreKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreKotlinMatchGroup *)doCopyValue:(NSString *)value range:(TruliooCoreKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface TruliooCoreKotlinIntProgressionCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface TruliooCoreKotlinIntIterator : TruliooCoreBase <TruliooCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (TruliooCoreInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface TruliooCoreKotlinIntRangeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface TruliooCoreKtor_client_coreProxyConfig : TruliooCoreBase
- (instancetype)initWithUrl:(TruliooCoreKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol TruliooCoreKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(TruliooCoreKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) TruliooCoreKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface TruliooCoreKtor_utilsAttributeKey<T> : TruliooCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface TruliooCoreKtor_eventsEventDefinition<T> : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface TruliooCoreKtor_utilsPipelinePhase : TruliooCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol TruliooCoreKotlinSuspendFunction2 <TruliooCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface TruliooCoreKtor_client_coreHttpReceivePipelinePhases : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol TruliooCoreKtor_httpHttpMessage
@required
@property (readonly) id<TruliooCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface TruliooCoreKtor_client_coreHttpResponse : TruliooCoreBase <TruliooCoreKtor_httpHttpMessage, TruliooCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<TruliooCoreKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) TruliooCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) TruliooCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly, getter=status_) TruliooCoreKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) TruliooCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface TruliooCoreKtor_client_coreHttpRequestPipelinePhases : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol TruliooCoreKtor_httpHttpMessageBuilder
@required
@property (readonly) TruliooCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface TruliooCoreKtor_client_coreHttpRequestBuilder : TruliooCoreBase <TruliooCoreKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) TruliooCoreKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<TruliooCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<TruliooCoreKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<TruliooCoreKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (TruliooCoreKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(TruliooCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (TruliooCoreKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(TruliooCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(TruliooCoreKtor_httpURLBuilder *, TruliooCoreKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<TruliooCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property TruliooCoreKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<TruliooCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) TruliooCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property TruliooCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) TruliooCoreKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface TruliooCoreKtor_client_coreHttpResponsePipelinePhases : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface TruliooCoreKtor_client_coreHttpResponseContainer : TruliooCoreBase
- (instancetype)initWithExpectedType:(TruliooCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(TruliooCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface TruliooCoreKtor_client_coreHttpClientCall : TruliooCoreBase <TruliooCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(TruliooCoreKtor_client_coreHttpClient *)client requestData:(TruliooCoreKtor_client_coreHttpRequestData *)requestData responseData:(TruliooCoreKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(TruliooCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(TruliooCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(TruliooCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<TruliooCoreKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<TruliooCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) TruliooCoreKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<TruliooCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<TruliooCoreKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property TruliooCoreKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface TruliooCoreKtor_client_coreHttpSendPipelinePhases : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) TruliooCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface TruliooCoreKtor_httpUrl : TruliooCoreBase
@property (class, readonly, getter=companion) TruliooCoreKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<TruliooCoreKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) TruliooCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface TruliooCoreKtor_httpHttpMethod : TruliooCoreBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol TruliooCoreKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<TruliooCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol TruliooCoreKtor_httpHeaders <TruliooCoreKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface TruliooCoreKtor_httpOutgoingContent : TruliooCoreBase
- (id _Nullable)getPropertyKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(TruliooCoreKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<TruliooCoreKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) TruliooCoreLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) TruliooCoreKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<TruliooCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly, getter=status_) TruliooCoreKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface TruliooCoreKtor_httpHttpStatusCode : TruliooCoreBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (TruliooCoreKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface TruliooCoreKtor_utilsGMTDate : TruliooCoreBase <TruliooCoreKotlinComparable>
@property (class, readonly, getter=companion) TruliooCoreKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(TruliooCoreKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (TruliooCoreKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(TruliooCoreKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(TruliooCoreKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) TruliooCoreKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) TruliooCoreKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface TruliooCoreKtor_httpHttpProtocolVersion : TruliooCoreBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol TruliooCoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<TruliooCoreKotlinKClass>)kClass provider:(id<TruliooCoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<TruliooCoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<TruliooCoreKotlinKClass>)kClass serializer:(id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<TruliooCoreKotlinKClass>)baseClass actualClass:(id<TruliooCoreKotlinKClass>)actualClass actualSerializer:(id<TruliooCoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<TruliooCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<TruliooCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<TruliooCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<TruliooCoreKotlinKClass>)baseClass defaultSerializerProvider:(id<TruliooCoreKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface TruliooCoreKotlinx_serialization_jsonJsonElementCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<TruliooCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol TruliooCoreKotlinx_coroutines_coreParentJob <TruliooCoreKotlinx_coroutines_coreJob>
@required
- (TruliooCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol TruliooCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<TruliooCoreKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(TruliooCoreKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(TruliooCoreKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<TruliooCoreKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol TruliooCoreKotlinSuspendFunction0 <TruliooCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface TruliooCoreKotlinKTypeProjection : TruliooCoreBase
- (instancetype)initWithVariance:(TruliooCoreKotlinKVariance * _Nullable)variance type:(id<TruliooCoreKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreKotlinKTypeProjection *)doCopyVariance:(TruliooCoreKotlinKVariance * _Nullable)variance type:(id<TruliooCoreKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TruliooCoreKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) TruliooCoreKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol TruliooCoreKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(TruliooCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(TruliooCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(TruliooCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(TruliooCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(TruliooCoreKtor_ioChunkBuffer *)dst completionHandler:(void (^)(TruliooCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(TruliooCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(TruliooCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(TruliooCoreKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(TruliooCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(TruliooCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(TruliooCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(TruliooCoreByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(TruliooCoreDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(TruliooCoreFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(TruliooCoreKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(TruliooCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(TruliooCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(TruliooCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(TruliooCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(TruliooCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<TruliooCoreKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(TruliooCoreShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<TruliooCoreKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<TruliooCoreKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(TruliooCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) TruliooCoreKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol TruliooCoreKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<TruliooCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<TruliooCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<TruliooCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<TruliooCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface TruliooCoreKtor_utilsStringValuesBuilderImpl : TruliooCoreBase <TruliooCoreKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<TruliooCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<TruliooCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<TruliooCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<TruliooCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TruliooCoreMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface TruliooCoreKtor_httpHeadersBuilder : TruliooCoreKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<TruliooCoreKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface TruliooCoreKtor_client_coreHttpRequestBuilderCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface TruliooCoreKtor_httpURLBuilder : TruliooCoreBase
- (instancetype)initWithProtocol:(TruliooCoreKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<TruliooCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<TruliooCoreKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<TruliooCoreKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property TruliooCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface TruliooCoreKtor_utilsTypeInfo : TruliooCoreBase
- (instancetype)initWithType:(id<TruliooCoreKotlinKClass>)type reifiedType:(id<TruliooCoreKotlinKType>)reifiedType kotlinType:(id<TruliooCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreKtor_utilsTypeInfo *)doCopyType:(id<TruliooCoreKotlinKClass>)type reifiedType:(id<TruliooCoreKotlinKType>)reifiedType kotlinType:(id<TruliooCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<TruliooCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<TruliooCoreKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<TruliooCoreKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface TruliooCoreKtor_client_coreHttpClientCallCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol TruliooCoreKtor_client_coreHttpRequest <TruliooCoreKtor_httpHttpMessage, TruliooCoreKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<TruliooCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) TruliooCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) TruliooCoreKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) TruliooCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface TruliooCoreKtor_httpUrlCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol TruliooCoreKtor_httpParameters <TruliooCoreKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface TruliooCoreKtor_httpURLProtocol : TruliooCoreBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface TruliooCoreKtor_httpHttpMethodCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<TruliooCoreKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) TruliooCoreKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol TruliooCoreKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface TruliooCoreKtor_httpHeaderValueWithParameters : TruliooCoreBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<TruliooCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<TruliooCoreKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface TruliooCoreKtor_httpContentType : TruliooCoreKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<TruliooCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<TruliooCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(TruliooCoreKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (TruliooCoreKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (TruliooCoreKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface TruliooCoreKtor_httpHttpStatusCodeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) TruliooCoreKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<TruliooCoreKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface TruliooCoreKtor_utilsGMTDateCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface TruliooCoreKtor_utilsWeekDay : TruliooCoreKotlinEnum<TruliooCoreKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) TruliooCoreKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) TruliooCoreKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) TruliooCoreKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) TruliooCoreKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) TruliooCoreKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) TruliooCoreKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (TruliooCoreKotlinArray<TruliooCoreKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface TruliooCoreKtor_utilsMonth : TruliooCoreKotlinEnum<TruliooCoreKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) TruliooCoreKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (TruliooCoreKotlinArray<TruliooCoreKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface TruliooCoreKtor_httpHttpProtocolVersionCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (TruliooCoreKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) TruliooCoreKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) TruliooCoreKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) TruliooCoreKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) TruliooCoreKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) TruliooCoreKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface TruliooCoreKotlinx_coroutines_coreAtomicDesc : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(TruliooCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(TruliooCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property TruliooCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface TruliooCoreKotlinx_coroutines_coreOpDescriptor : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(TruliooCoreKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : TruliooCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface TruliooCoreKotlinKVariance : TruliooCoreKotlinEnum<TruliooCoreKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) TruliooCoreKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) TruliooCoreKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) TruliooCoreKotlinKVariance *out __attribute__((swift_name("out")));
+ (TruliooCoreKotlinArray<TruliooCoreKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface TruliooCoreKotlinKTypeProjectionCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (TruliooCoreKotlinKTypeProjection *)contravariantType:(id<TruliooCoreKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (TruliooCoreKotlinKTypeProjection *)covariantType:(id<TruliooCoreKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (TruliooCoreKotlinKTypeProjection *)invariantType:(id<TruliooCoreKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) TruliooCoreKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface TruliooCoreKtor_ioMemory : TruliooCoreBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(TruliooCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(TruliooCoreKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (TruliooCoreKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (TruliooCoreKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface TruliooCoreKtor_ioBuffer : TruliooCoreBase
- (instancetype)initWithMemory:(TruliooCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (TruliooCoreKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(TruliooCoreKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset_ __attribute__((swift_name("reset_()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) TruliooCoreKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface TruliooCoreKtor_ioChunkBuffer : TruliooCoreKtor_ioBuffer
- (instancetype)initWithMemory:(TruliooCoreKtor_ioMemory *)memory origin:(TruliooCoreKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<TruliooCoreKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(TruliooCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (TruliooCoreKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (TruliooCoreKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<TruliooCoreKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset_ __attribute__((swift_name("reset_()")));
@property (getter=next_) TruliooCoreKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) TruliooCoreKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface TruliooCoreKtor_ioInput : TruliooCoreBase <TruliooCoreKtor_ioCloseable>
- (instancetype)initWithHead:(TruliooCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<TruliooCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TruliooCoreKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (TruliooCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(TruliooCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(TruliooCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(TruliooCoreKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<TruliooCoreKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<TruliooCoreKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<TruliooCoreKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface TruliooCoreKtor_ioByteReadPacket : TruliooCoreKtor_ioInput
- (instancetype)initWithHead:(TruliooCoreKtor_ioChunkBuffer *)head pool:(id<TruliooCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(TruliooCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<TruliooCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) TruliooCoreKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (TruliooCoreKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (TruliooCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(TruliooCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol TruliooCoreKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (TruliooCoreKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol TruliooCoreKotlinAppendable
@required
- (id<TruliooCoreKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<TruliooCoreKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<TruliooCoreKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface TruliooCoreKtor_httpURLBuilderCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol TruliooCoreKtor_httpParametersBuilder <TruliooCoreKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface TruliooCoreKtor_httpURLProtocolCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) TruliooCoreKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) TruliooCoreKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) TruliooCoreKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) TruliooCoreKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) TruliooCoreKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, TruliooCoreKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface TruliooCoreKtor_httpHeaderValueParam : TruliooCoreBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (TruliooCoreKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface TruliooCoreKtor_httpHeaderValueWithParametersCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<TruliooCoreKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface TruliooCoreKtor_httpContentTypeCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) TruliooCoreKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface TruliooCoreKtor_utilsWeekDayCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (TruliooCoreKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface TruliooCoreKtor_utilsMonthCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (TruliooCoreKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (TruliooCoreKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface TruliooCoreKotlinx_coroutines_coreAtomicOp<__contravariant T> : TruliooCoreKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode : TruliooCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(TruliooCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(TruliooCoreBoolean *(^)(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(TruliooCoreBoolean *(^)(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(TruliooCoreBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(TruliooCoreBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : TruliooCoreKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(TruliooCoreKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(TruliooCoreKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(TruliooCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface TruliooCoreKtor_ioMemoryCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface TruliooCoreKtor_ioBufferCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol TruliooCoreKtor_ioObjectPool <TruliooCoreKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface TruliooCoreKtor_ioChunkBufferCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<TruliooCoreKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<TruliooCoreKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface TruliooCoreKtor_ioInputCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface TruliooCoreKtor_ioByteReadPacketCompanion : TruliooCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TruliooCoreKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) TruliooCoreKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(TruliooCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(TruliooCoreKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) TruliooCoreKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
