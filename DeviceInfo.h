//Put this line + what info you want at the top of the file
OBJC_EXTERN CFStringRef MGCopyAnswer(CFStringRef key) WEAK_IMPORT_ATTRIBUTE;

#define kMGChipID = (__bridge NSString *) MGCopyAnswer(CFSTR("ChipID"));
#define kMGComputerName = (__bridge NSString *) MGCopyAnswer(CFSTR("ComputerName"));
#define kMGDeviceVariant = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceVariant"));
#define kMGHWModel = (__bridge NSString *) MGCopyAnswer(CFSTR("HWModelStr"));
#define kMGBoardId = (__bridge NSString *) MGCopyAnswer(CFSTR("BoardId"));
#define kMGHardwarePlatform = (__bridge NSString *) MGCopyAnswer(CFSTR("HardwarePlatform"));
#define kMGDeviceName = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceName"));
#define kMGDeviceColor = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceColor"));
#define kMGDeviceClassNumber = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceClassNumber"));
#define kMGDeviceClass = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceClass"));
#define kMGBuildVersion = (__bridge NSString *) MGCopyAnswer(CFSTR("BuildVersion"));
#define kMGProductName = (__bridge NSString *) MGCopyAnswer(CFSTR("ProductName"));
#define kMGProductType = (__bridge NSString *) MGCopyAnswer(CFSTR("ProductType"));
#define kMGProductVersion = (__bridge NSString *) MGCopyAnswer(CFSTR("ProductVersion"));
#define kMGFirmwareNonce = (__bridge NSString *) MGCopyAnswer(CFSTR("FirmwareNonce"));
#define kMGFirmwareVersion = (__bridge NSString *) MGCopyAnswer(CFSTR("FirmwareVersion"));
#define kMGFirmwarePreflightInfo = (__bridge NSString *) MGCopyAnswer(CFSTR("FirmwarePreflightInfo"));
#define kMGIntegratedCircuitCardIdentifier = (__bridge NSString *) MGCopyAnswer(CFSTR("IntegratedCircuitCardIdentifier"));
#define kMGAirplaneMode = (__bridge NSString *) MGCopyAnswer(CFSTR("AirplaneMode"));
#define kMGAllowYouTube = (__bridge NSString *) MGCopyAnswer(CFSTR("AllowYouTube"));
#define kMGAllowYouTubePlugin = (__bridge NSString *) MGCopyAnswer(CFSTR("AllowYouTubePlugin"));
#define kMGMinimumSupportediTunesVersion = (__bridge NSString *) MGCopyAnswer(CFSTR("MinimumSupportediTunesVersion"));
#define kMGProximitySensorCalibration = (__bridge NSString *) MGCopyAnswer(CFSTR("ProximitySensorCalibration"));
#define kMGRegionCode = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionCode"));
#define kMGRegionInfo = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionInfo"));
#define kMGRegulatoryIdentifiers = (__bridge NSString *) MGCopyAnswer(CFSTR("RegulatoryIdentifiers"));
#define kMGSBAllowSensitiveUI = (__bridge NSString *) MGCopyAnswer(CFSTR("SBAllowSensitiveUI"));
#define kMGSBCanForceDebuggingInfo = (__bridge NSString *) MGCopyAnswer(CFSTR("SBCanForceDebuggingInfo"));
#define kMGSDIOManufacturerTuple = (__bridge NSString *) MGCopyAnswer(CFSTR("SDIOManufacturerTuple"));
#define kMGSDIOProductInfo = (__bridge NSString *) MGCopyAnswer(CFSTR("SDIOProductInfo"));
#define kMGShouldHactivate = (__bridge NSString *) MGCopyAnswer(CFSTR("ShouldHactivate"));
#define kMGSigningFuse = (__bridge NSString *) MGCopyAnswer(CFSTR("SigningFuse"));
#define kMGSoftwareBehavior = (__bridge NSString *) MGCopyAnswer(CFSTR("SoftwareBehavior"));
#define kMGSoftwareBundleVersion = (__bridge NSString *) MGCopyAnswer(CFSTR("SoftwareBundleVersion"));
#define kMGSupportedDeviceFamilies = (__bridge NSString *) MGCopyAnswer(CFSTR("SupportedDeviceFamilies"));
#define kMGSupportedKeyboards = (__bridge NSString *) MGCopyAnswer(CFSTR("SupportedKeyboards"));
#define kMGTotalSystemAvailable = (__bridge NSString *) MGCopyAnswer(CFSTR("TotalSystemAvailable"));

// Identifying Information

#define kMGDiskUsage = (__bridge NSString *) MGCopyAnswer(CFSTR("DiskUsage"));
#define kMGModelNumber = (__bridge NSString *) MGCopyAnswer(CFSTR("ModelNumber"));
#define kMGSIMTrayStatus = (__bridge NSString *) MGCopyAnswer(CFSTR("SIMTrayStatus"));
#define kMGSerialNumber = (__bridge NSString *) MGCopyAnswer(CFSTR("SerialNumber"));
#define kMGMLBSerialNumber = (__bridge NSString *) MGCopyAnswer(CFSTR("MLBSerialNumber"));
#define kMGUniqueDeviceID = (__bridge NSString *) MGCopyAnswer(CFSTR("UniqueDeviceID"));
#define kMGUniqueDeviceIDData = (__bridge NSString *) MGCopyAnswer(CFSTR("UniqueDeviceIDData"));
#define kMGUniqueChipID = (__bridge NSString *) MGCopyAnswer(CFSTR("UniqueChipID"));
#define kMGInverseDeviceID = (__bridge NSString *) MGCopyAnswer(CFSTR("InverseDeviceID"));
#define kMGDiagnosticsData = (__bridge NSString *) MGCopyAnswer(CFSTR("DiagData"));
#define kMGDieId = (__bridge NSString *) MGCopyAnswer(CFSTR("DieId"));
#define kMGCPUArchitecture = (__bridge NSString *) MGCopyAnswer(CFSTR("CPUArchitecture"));
#define kMGPartitionType = (__bridge NSString *) MGCopyAnswer(CFSTR("PartitionType"));
#define kMGUserAssignedDeviceName = (__bridge NSString *) MGCopyAnswer(CFSTR("UserAssignedDeviceName"));

// Baseband Information

#define kMGBasebandSerialNumber = (__bridge NSString *) MGCopyAnswer(CFSTR("BasebandSerialNumber"));
#define kMGBasebandCertId = (__bridge NSString *) MGCopyAnswer(CFSTR("BasebandCertId"));
#define kMGBasebandChipId = (__bridge NSString *) MGCopyAnswer(CFSTR("BasebandChipId"));
#define kMGBasebandFirmwareManifestData = (__bridge NSString *) MGCopyAnswer(CFSTR("BasebandFirmwareManifestData"));
#define kMGBasebandFirmwareVersion = (__bridge NSString *) MGCopyAnswer(CFSTR("BasebandFirmwareVersion"));
#define kMGBasebandKeyHashInformation = (__bridge NSString *) MGCopyAnswer(CFSTR("BasebandKeyHashInformation"));

// Telephony Information

#define kMGCarrierBundleInfoArray = (__bridge NSString *) MGCopyAnswer(CFSTR("CarrierBundleInfoArray"));
#define kMGCarrierInstallCapability = (__bridge NSString *) MGCopyAnswer(CFSTR("CarrierInstallCapability"));
#define kMGInternationalMobileEquipmentIdentity = (__bridge NSString *) MGCopyAnswer(CFSTR("InternationalMobileEquipmentIdentity"));
#define kMGMobileSubscriberCountryCode = (__bridge NSString *) MGCopyAnswer(CFSTR("MobileSubscriberCountryCode"));
#define kMGMobileSubscriberNetworkCode = (__bridge NSString *) MGCopyAnswer(CFSTR("MobileSubscriberNetworkCode"));

// Capability Information

#define kMGAllDeviceCapabilities = (__bridge NSString *) MGCopyAnswer(CFSTR("AllDeviceCapabilities"));
#define kMGAppleInternalInstallCapability = (__bridge NSString *) MGCopyAnswer(CFSTR("AppleInternalInstallCapability"));
#define kMGExternalChargeCapability = (__bridge NSString *) MGCopyAnswer(CFSTR("ExternalChargeCapability"));
#define kMGForwardCameraCapability = (__bridge NSString *) MGCopyAnswer(CFSTR("ForwardCameraCapability"));
#define kMGPanoramaCameraCapability = (__bridge NSString *) MGCopyAnswer(CFSTR("PanoramaCameraCapability"));
#define kMGRearCameraCapability = (__bridge NSString *) MGCopyAnswer(CFSTR("RearCameraCapability"));
#define kMGHasAllFeaturesCapability = (__bridge NSString *) MGCopyAnswer(CFSTR("HasAllFeaturesCapability"));
#define kMGHasBaseband = (__bridge NSString *) MGCopyAnswer(CFSTR("HasBaseband"));
#define kMGHasInternalSettingsBundle = (__bridge NSString *) MGCopyAnswer(CFSTR("HasInternalSettingsBundle"));
#define kMGHasSpringBoard = (__bridge NSString *) MGCopyAnswer(CFSTR("HasSpringBoard"));
#define kMGInternalBuild = (__bridge NSString *) MGCopyAnswer(CFSTR("InternalBuild"));
#define kMGIsSimulator = (__bridge NSString *) MGCopyAnswer(CFSTR("IsSimulator"));
#define kMGIsThereEnoughBatteryLevelForSoftwareUpdate = (__bridge NSString *) MGCopyAnswer(CFSTR("IsThereEnoughBatteryLevelForSoftwareUpdate"));
#define kMGIsUIBuild = (__bridge NSString *) MGCopyAnswer(CFSTR("IsUIBuild"));

// Regional Behaviour

#define kMGRegionalBehaviorAll = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorAll"));
#define kMGRegionalBehaviorChinaBrick = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorChinaBrick"));
#define kMGRegionalBehaviorEUVolumeLimit = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorEUVolumeLimit"));
#define kMGRegionalBehaviorGB18030 = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorGB18030"));
#define kMGRegionalBehaviorGoogleMail = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorGoogleMail"));
#define kMGRegionalBehaviorNTSC = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorNTSC"));
#define kMGRegionalBehaviorNoPasscodeLocationTiles = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorNoPasscodeLocationTiles"));
#define kMGRegionalBehaviorNoVOIP = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorNoVOIP"));
#define kMGRegionalBehaviorNoWiFi = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorNoWiFi"));
#define kMGRegionalBehaviorShutterClick = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorShutterClick"));
#define kMGRegionalBehaviorVolumeLimit = (__bridge NSString *) MGCopyAnswer(CFSTR("RegionalBehaviorVolumeLimit"));

// Wireless Information

#define kMGActiveWirelessTechnology = (__bridge NSString *) MGCopyAnswer(CFSTR("ActiveWirelessTechnology"));
#define kMGWifiAddress = (__bridge NSString *) MGCopyAnswer(CFSTR("WifiAddress"));
#define kMGWifiAddressData = (__bridge NSString *) MGCopyAnswer(CFSTR("WifiAddressData"));
#define kMGWifiVendor = (__bridge NSString *) MGCopyAnswer(CFSTR("WifiVendor"));

// FaceTime Information

#define kMGFaceTimeBitRate2G = (__bridge NSString *) MGCopyAnswer(CFSTR("FaceTimeBitRate2G"));
#define kMGFaceTimeBitRate3G = (__bridge NSString *) MGCopyAnswer(CFSTR("FaceTimeBitRate3G"));
#define kMGFaceTimeBitRateLTE = (__bridge NSString *) MGCopyAnswer(CFSTR("FaceTimeBitRateLTE"));
#define kMGFaceTimeBitRateWiFi = (__bridge NSString *) MGCopyAnswer(CFSTR("FaceTimeBitRateWiFi"));
#define kMGFaceTimeDecodings = (__bridge NSString *) MGCopyAnswer(CFSTR("FaceTimeDecodings"));
#define kMGFaceTimeEncodings = (__bridge NSString *) MGCopyAnswer(CFSTR("FaceTimeEncodings"));
#define kMGFaceTimePreferredDecoding = (__bridge NSString *) MGCopyAnswer(CFSTR("FaceTimePreferredDecoding"));
#define kMGFaceTimePreferredEncoding = (__bridge NSString *) MGCopyAnswer(CFSTR("FaceTimePreferredEncoding"))

// More Device Capabilities

#define kMGDeviceSupportsFaceTime = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupportsFaceTime"));
#define kMGDeviceSupportsTethering = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupportsTethering"));
#define kMGDeviceSupportsSimplisticRoadMesh = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupportsSimplisticRoadMesh"));
#define kMGDeviceSupportsNavigation = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupportsNavigation"));
#define kMGDeviceSupportsLineIn = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupportsLineIn"));
#define kMGDeviceSupports9Pin = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupports9Pin"));
#define kMGDeviceSupports720p = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupports720p"));
#define kMGDeviceSupports4G = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupports4G"));
#define kMGDeviceSupports3DMaps = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupports3DMaps"));
#define kMGDeviceSupports3DImagery = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupports3DImagery"));
#define kMGDeviceSupports1080p = (__bridge NSString *) MGCopyAnswer(CFSTR("DeviceSupports1080p"));
