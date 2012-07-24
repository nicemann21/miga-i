//==============================================================================
//
// Filename:  ORION.H
// Owner   :  Matrox Imaging dept.
// Rev     :
// Content :  This file contains the new defines that are needed by the user
//            to use the MIL current library with the ORION.
//
// COPYRIGHT (c) Matrox Electronic Systems Ltd.
// All Rights Reserved
//==============================================================================

#ifndef __MIL_H
#include <mil.h>
#endif

#if !M_MIL_USE_QNX && !M_MIL_USE_PPC

#ifndef __ORION_H
#define __ORION_H

#define M_IRQ_GLOBAL_OBJECT           125L

//==============================================================================
// PCI device information
//==============================================================================
#define M_PCI_VENDOR_ID             0x00 // (16 lsb)
#define M_PCI_DEVICE_ID             0x00 // (16 msb)
#define M_PCI_COMMAND               0x01 // (16 lsb)
#define M_PCI_STATUS                0x01 // (16 msb)
#define M_PCI_REVISION_ID           0x02 // (byte 0)
#define M_PCI_CLASS_CODE            0x02 // (byte 1,2,3)
#define M_PCI_LATENCY_TIMER         0x03 // (byte 1)
#define M_PCI_BASE_ADRS0            0x04 // 
#define M_PCI_BASE_ADRS1            0x05 // 
#define M_PCI_INT_LINE              0x0F // (byte 0)
#define M_PCI_INT_PIN               0x0F // (byte 1)

// Orion board type redefinition
#define M_DEVICE_ORION             M_ORION         
#define M_NB_ORION_BOARD_TYPE      1L
#define M_FPGA_TYPE                2158L
#define M_ORION_MAX_DIG            17L // If this value is changed, make sure the Table in InthdlerOb.h is of the proper size
#define M_ORION_MAX_DIG_DEV        2L  // If this value is changed, make sure the Table in InthdlerOb.h is of the proper size

// Orion board type redefinition
#define KS0127          0x00000004
#define TOUCAN          0x00000100
#define ENCODER         0x00000800
   
/* User Hook identification*/
/******************************************************************************/
#define OLL_IRQ_TYPE_GRAB_FIELD_START_RELATED_MASK       0x00000007L
#define OLL_IRQ_TYPE_GRAB_FIELD_START_RELATED_MASK_SHIFT 0x00000000L
#define OLLISR_START_OF_GRAB_FIELD_BIT                   0x00000001L  // When grabbing
#define OLLISR_START_OF_GRAB_FIELD_ODD_BIT               0x00000002L  // When grabbing
#define OLLISR_START_OF_GRAB_FIELD_EVEN_BIT              0x00000004L  // When grabbing
                                                      
#define OLL_IRQ_TYPE_GRAB_FRAME_START_RELATED_MASK       0x00000008L
#define OLL_IRQ_TYPE_GRAB_FRAME_START_RELATED_MASK_SHIFT 0x00000003L
#define OLLISR_START_OF_GRAB_FRAME_BIT                   0x00000008L  // When grabbing
                                                      
#define OLL_IRQ_TYPE_GRAB_FIELD_END_RELATED_MASK         0x000000F0L
#define OLL_IRQ_TYPE_GRAB_FIELD_END_RELATED_MASK_SHIFT   0x00000004L
#define OLLISR_END_OF_GRAB_FIELD_BIT                     0x00000010L  // When grabbing
#define OLLISR_END_OF_GRAB_FIELD_ODD_BIT                 0x00000020L  // When grabbing
#define OLLISR_END_OF_GRAB_FIELD_EVEN_BIT                0x00000040L  // When grabbing
#define OLLISR_END_OF_FIELD_BIT                          0x00000080L  // When grabbing

#define OLL_IRQ_TYPE_START_RELATED_MASK                  0x00000F00L
#define OLL_IRQ_TYPE_START_RELATED_MASK_SHIFT            0x00000008L
#define OLLISR_START_OF_FRAME_BIT                        0x00000100L  // without grabbing
#define OLLISR_START_OF_FIELD_BIT                        0x00000200L  // without grabbing
#define OLLISR_START_OF_FIELD_ODD_BIT                    0x00000400L  // without grabbing
#define OLLISR_START_OF_FIELD_EVEN_BIT                   0x00000800L  // without grabbing

#define OLL_IRQ_TYPE_GRAB_START_RELATED_MASK             0x00001000L
#define OLL_IRQ_TYPE_GRAB_START_RELATED_MASK_SHIFT       0x0000000CL
#define OLLISR_START_OF_GRAB_BIT                         0x00001000L  // When grabbing
                                                      
#define OLL_IRQ_TYPE_GRAB_END_RELATED_MASK               0x00002000L
#define OLL_IRQ_TYPE_GRAB_END_RELATED_MASK_SHIFT         0x0000000DL
#define OLLISR_END_OF_GRAB_BIT                           0x00002000L  // When grabbing

#define OLL_IRQ_TYPE_END_OF_XFER_RELATED_MASK            0x00004000L  
#define OLL_IRQ_TYPE_END_OF_XFER_BIT                     0x00004000L

#define OLL_IRQ_TYPE_GRAB_FRAME_END_RELATED_MASK         0x00008000L
#define OLL_IRQ_TYPE_GRAB_FRAME_END_RELATED_MASK_SHIFT   0x0000000FL
#define OLLISR_END_OF_GRAB_FRAME_BIT                     0x00008000L  // When grabbing

#define OLL_IRQ_TYPE_AUTOI2C_RELATED_MASK                0x000F0000L  
#define OLL_IRQ_TYPE_AUTOI2C_RELATED_MASK_SHIFT          0x00000010L
#define OLLISR_AUTOI2C_POLLING_BIT                       0x00010000L
#define OLLISR_AUTOI2C_WRITE_BIT                         0x00020000L
#define OLLISR_AUTOI2C_READ_BIT                          0x00040000L
#define OLLISR_AUTOI2C_ERROR_BIT                         0x00080000L

#define OLL_IRQ_TYPE_CAMERA_MASK                         0x10F00000L
#define OLLISR_HLOCK_BIT                                 0x00100000L
#define OLLISR_UNLOCK_BIT                                0x00200000L
#define OLLISR_VLOCK_BIT                                 0x00400000L
#define OLLISR_LOST_SIGNAL_BIT                           0x00800000L
#define OLLISR_RESET_CAMERA_BIT                          0x10000000L

#define OLL_IRQ_TYPE_CHSWITCH_RELATED_MASK               0x20000000L  
#define OLLISR_CHANNEL_SWITCH_BIT                        0x20000000L

#define OLL_IRQ_TYPE_XFER_RELATED_MASK                   0x0F000000L  
#define OLL_IRQ_TYPE_XFER_RELATED_MASK_SHIFT             0x0000001CL
#define OLLISR_START_XFER_FIELD_ODD                      0x01000000L  
#define OLLISR_END_XFER_FIELD_ODD                        0x02000000L  
#define OLLISR_START_XFER_FIELD_EVEN                     0x04000000L  
#define OLLISR_END_XFER_FIELD_EVEN                       0x08000000L  

#define OLLISR_MUST_ALWAYS_BE_ENABLE_MASK                OLL_IRQ_TYPE_GRAB_FIELD_END_RELATED_MASK
#define OLL_IRQ_NO_WAKE_UP_THREAD                        0xFFFFFFFFL
                                                   
//==============================================================================
// Internal use only
//==============================================================================

#define M_SEEPROM_SPACE             M_RESERVED_FOR_INTERNAL_USE_SYS_CONFIG
//==============================================================================
//       Seeprom 256 bytes :
//       First 128 (0x80) bytes are free
//       Next 120 bytes used for license
//       Last 8 bytes unique identifier
//       For Orion, we only use the last 4 bytes of Unique identifier
//==============================================================================
#define ORION_LICENSECODE_DATA_OFFSET     128L     // if this value is changed, also change it in $milcur\tools\sources\milconfig\orionchk.cpp
#define ORION_CUSTOMER_PRODUCT_ID_OFFSET  228L
#define ORION_SERIAL_NUMBER_OFFSET        248L
#define ORION_UNIQUE_ID_OFFSET            252L     // if this value is changed, also change it in $milcur\tools\sources\milconfig\orionchk.cpp
#define ORION_UNIQUE_ID_OFFSET0           248L     
#define ORION_UNIQUE_ID_OFFSET1           252L     
#define ORION_MAX_LENGTH_LICENSE          100L
#define ORION_EEPROM_SIZE                 256L

//==============================================================================
// MIL OPTIONAL COMPILE DEFINES prefixes
//==============================================================================
#if M_MIL_USE_DOS_32
   #define ORIONFARTYPE
#endif

#if M_MIL_USE_WINDOWS
   #define ORIONFARTYPE                      
#endif


//==============================================================================
// Camera Info Structure passed to kernel
//==============================================================================
typedef struct _CAMERA_INFO_STRUC
   {
   inline _CAMERA_INFO_STRUC()
      {
      CameraId          = 0;   
      DigDeviceNb       = 0;   
      CameraIsActive    = true;   
      };

   unsigned long  CameraId;   
   unsigned long  DigDeviceNb;   
   bool           CameraIsActive;   

   } CAMERA_INFO_STRUC, *PCAMERA_INFO_STRUC;


//==============================================================================
// ORION Lib prototypes
//==============================================================================
#ifdef __cplusplus
extern "C"
{
#endif

typedef MFTYPE32 long (MFTYPE MPTYPE *OAPPHOOKFCTPTR)(long         FHookType, 
                                                      void MPTYPE *FExpansionFlagPtr);
                                      
MFTYPE32 long MFTYPE 
OappAlloc(                   long            InitFlag, 
                             MIL_ID MPTYPE  *ApplicationID,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
OappControl(                 long            ControlType, 
                             long            ControlFlag,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
OappInquire(                 long            InquireType, 
                             long MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
OappGetError(                long            ErrorType, 
                             void MPTYPE    *UserPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OappFree(                    MIL_ID          ApplicationID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
OsysAlloc(                   long            SystemType, 
                             long            Number, 
                             long            InitFlag, 
                             MIL_ID MPTYPE  *SystemID,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
OsysInquire(                 MIL_ID          SystemID,
                             long            InquireType, 
                             long MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OsysControl(                 MIL_ID          SystemID, 
                             long            ControlType, 
                             long            ControlFlag,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
OsysConfigAccess(            MIL_ID          SystemID,
                             long            VendorId,      
                             long            DeviceId,      
                             long            DeviceNum,     
                             long            OperationFlag, 
                             long            OperationType, 
                             long            Offset,        
                             long            Size,
                             void           *UserArrayPtr,          
                             void MPTYPE    *ThreadContext);

MFTYPE32 void MFTYPE 
OsysFree(                    MIL_ID          SystemID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
OdigAlloc(                   MIL_ID          SystemID, 
                             long            DeviceNum, 
                             LPMILSTR        DataFormat, 
                             long            InitFlag, 
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE
OdigFastAlloc(               MIL_ID          DigitizerID,
                             long            InitFlag,
                             void   MPTYPE  *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdigFree(                    MIL_ID          DigitizerID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdigFastFree(                MIL_ID          DigitizerID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdigGrabContinuous(          MIL_ID          DigitizerID, 
                             MIL_ID          BufferID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdigGrab(                    MIL_ID          DigitizerID, 
                             MIL_ID          BufferID,
                             long            NbIteration,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
OdigHalt(                    MIL_ID          DigitizerID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdigGrabWait(                MIL_ID          DigitizerID,
                             long            Flag,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
OdigControl(                 MIL_ID          DigitizerID,
                             long            ControlType, 
                             double          ControlValue,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 long MFTYPE 
OdigInquire(                 MIL_ID          DigitizerID,
                             long            InquireType, 
                             void MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
OdigReference(               MIL_ID          DigitizerID,
                             long            ReferenceType, 
                             long            ReferenceLevel,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
OdigChannel(                 MIL_ID          DigitizerID,
                             long            Channel,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdigSetLut(                  MIL_ID          DigitizerID, 
                             long            LutType, 
                             long            Start, 
                             long            NbElem, 
                             void MPTYPE    *LutData, 
                             long            SizeBit, 
                             long            LutResetType,
                             void MPTYPE    *ThreadContextPtr);


MFTYPE32 MDIGHOOKFCTPTR MFTYPE 
OdigHookFunction(            MIL_ID          DigitizerID,
                             long            HookType,
                             MDIGHOOKFCTPTR  HookHandlerPtr,
                             void MPTYPE    *UserDataPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 OAPPHOOKFCTPTR MFTYPE 
OappHookFunction(            long            HookType,
                             OAPPHOOKFCTPTR  HookHandlerPtr,
                             void MPTYPE    *UserDataPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
OdispAlloc(                  MIL_ID          SystemID, 
                             long            DeviceNum, 
                             MILTCHAR        *DispFormat, 
                             long            InitFlag, 
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);


MFTYPE32 void MFTYPE
OdispSetLut(                 MIL_ID          DisplayID, 
                             void           *LutData, 
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdispOverlayKey(             MIL_ID          DisplayID, 
                             long            KeyMode, 
                             long            KeyCond, 
                             long            KeyMask,
                             long            KeyColor,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
OdispControl(                MIL_ID          DisplayID,
                             long            ControlType, 
                             long            Value,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdispSelect(                 MIL_ID         DisplayID,
                             MIL_ID         BufferID,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 long MFTYPE 
OdispInquire(                MIL_ID          DisplayID, 
                             long            InquireType, 
                             void MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
OdispFree(                   MIL_ID          DisplayID,
                             void MPTYPE    *ThreadContextPtr);
                                                 
#ifndef MDISPHOOKFCTPTR

typedef MFTYPE32 long (MFTYPE MPTYPE *MDISPHOOKFCTPTR)(long         HookType,
                                                       MIL_ID       EventId,
                                                       void MPTYPE *UserPtr);
#endif


MFTYPE32 MDISPHOOKFCTPTR MFTYPE 
OdispHookFunction(           MIL_ID          DisplayID,
                             long            HookType,
                             MDISPHOOKFCTPTR HookHandlerPtr,
                             void MPTYPE    *UserDataPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdispZoom(                   MIL_ID          DisplayID, 
                             long            XFactor, 
                             long            YFactor,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
OdispPan(                    MIL_ID          DisplayID, 
                             long            XOffset, 
                             long            YOffset,
                             void MPTYPE    *ThreadContextPtr);

long MINTFTYPE 
CExtGrabHandler(             long            FHookType, 
                             MIL_ID          EventId, 
                             void MPTYPE    *FExpansionFlagPtr);

//==============================================================================
// ORION LowLevel prototypes
//==============================================================================

MFTYPE32 long MFTYPE 
OLLinit(                     MIL_ID          SystemId,
                             long            InitMode,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLsysAlloc(                 long            SystemType,
                             long            SystemNum,
                             long            InitFlag,
                             MIL_ID         *SystemIdPtr, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLsysFree(                  MIL_ID          SystemId, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigLutSelectPalette(      MIL_ID             SystemId,
                             CAMERA_INFO_STRUC  CamInfo,
                             unsigned long      palette, 
                             void              *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigLutSelectMode(         MIL_ID             SystemId,
                             CAMERA_INFO_STRUC  CamInfo,
                             unsigned long      mode, 
                             void              *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigLutWrite(              MIL_ID                SystemId,
                             CAMERA_INFO_STRUC     CamInfo,
                             unsigned long         lut,
                             unsigned char MPTYPE *pBuffer,
                             unsigned long         length,
                             unsigned long         offset, 
                             unsigned long         Mode, 
                             void                 *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigLutRead(               MIL_ID                SystemId,
                             CAMERA_INFO_STRUC     CamInfo,
                             unsigned long         lut,
                             unsigned char MPTYPE *pBuffer,
                             unsigned long         length,
                             unsigned long         offset, 
                             void                 *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigSetLut(                MIL_ID                SystemId,
                             CAMERA_INFO_STRUC     CamInfo,
                             long                  LutType,     
                             long                  Start,       
                             long                  NbElem,      
                             void                 *LutData,    
                             long                  SizeBits,    
                             long                  LutResetType,
                             void                 *OverlappedStruct);
      
MFTYPE32 long MFTYPE 
OLLsysControl(               MIL_ID          SystemId,  
                             long            ControlType, 
                             long            ControlValue, 
                             void           *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLsysConfigAccess(          MIL_ID          SystemId, 
                             long            VendorId, 
                             long            DeviceId,
                             long            DeviceNumber,
                             long            OpperationFlag,
                             long            OpperationType,
                             long            Offset,
                             long            Size,
                             void           *UserDataPtr,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigAlloc(                 MIL_ID             SystemId, 
                             CAMERA_INFO_STRUC  CamInfo,
                             MILTCHAR          *DataFormat, 
                             long               InitFlag, 
                             void              *OverlappedStruct);
 
MFTYPE32 long MFTYPE 
OLLdigFastAlloc(             MIL_ID             SystemId, 
                             CAMERA_INFO_STRUC  CamInfo,
                             long               InitFlag, 
                             void              *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLGetDcfFromDisk(           MIL_ID             SystemId, 
                             CAMERA_INFO_STRUC  CamInfo,
                             LPMILSTR           DataFormat, 
                             long               InitFlag, 
                             void              *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLSetDcfToHardWare(         MIL_ID             SystemId, 
                             CAMERA_INFO_STRUC  CamInfo,
                             long               InitFlag, 
                             void              *OverlappedStruct);


MFTYPE32 void MFTYPE 
OLLdigFree(                  MIL_ID             SystemId,
                             CAMERA_INFO_STRUC  CamInfo,
                             void              *OverlappedStruct);

MFTYPE32 void MFTYPE 
OLLdigFastFree(              MIL_ID             SystemId,
                             CAMERA_INFO_STRUC  CamInfo,
                             void              *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigControl(               MIL_ID             SystemId, 
                             CAMERA_INFO_STRUC  CamInfo,
                             long               ControlType, 
                             double             ControlValue,  
                             void              *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigChannel(               MIL_ID             SystemId, 
                             CAMERA_INFO_STRUC  CamInfo,
                             long               Channel, 
                             void              *OverlappedStruct);    

MFTYPE32 long MFTYPE 
OLLdigReference(             MIL_ID             SystemId, 
                             CAMERA_INFO_STRUC  CamInfo,
                             long               ReferenceType, 
                             long               ReferenceLevel, 
                             void              *OverlappedStruct);

MFTYPE32 void MFTYPE 
OLLdigGrabContinuous(        MIL_ID             SystemId, 
                             CAMERA_INFO_STRUC  CamInfo,
                             void              *OverlappedStruct);   


MFTYPE32 long MFTYPE 
OLLdigHookInterruptFromKernel(MIL_ID         SystemId, 
                              long           Enable, 
                              void          *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigHookFunction(          MIL_ID             SystemId,
                             long               HookType,
                             MDIGHOOKFCTPTR     HookFunctionPtr,
                             void MPTYPE       *UserDataPtr, 
                             void              *OverlappedStruct);
                                                
MFTYPE32 long MFTYPE 
OLLdigGrabStop(              MIL_ID             SystemId,
                             CAMERA_INFO_STRUC  CamInfo,
                             long               ImmediateStop,
                             void              *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigGrabWait(              MIL_ID             SystemId,
                             CAMERA_INFO_STRUC  CamInfo,
                             long               WaitFlag,
                             long               WaitMode,
                             long               WaitTimeout,
                             void              *OverlappedStruct);


MFTYPE32 long MFTYPE 
OLLsysInquire(               MIL_ID          SystemId,
                             long            InquireType, 
                             long           *UserDataPtr,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdigInquire(               MIL_ID             SystemId,
                             CAMERA_INFO_STRUC  CamInfo,
                             long               InquireType, 
                             void              *pInquireValue,
                             void              *OverlappedStruct);


MFTYPE32 long MFTYPE 
OLLdigGrab(                  MIL_ID             SystemId,       
                             CAMERA_INFO_STRUC  CamInfo,
                             long               DigitizerId,
                             void              *DestGrabBuffer,
                             void              *GrabControl,
                             void              *SysControl,
                             void              *OverlappedStruct);

MFTYPE32 short MFTYPE 
OLLDmaClose(                 void);
                                        
MFTYPE32 short MFTYPE 
OLLDmaBufferFree(            MIL_ID          SystemId, 
                             long            bufid, 
                             void           *OverlappedStruct);
                                                                                                  

MFTYPE32 long MFTYPE 
OLLdispAlloc (               MIL_ID          SystemId,
                             MILTCHAR       *DataFormat,
                             long            InitFlag, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdispControl(              MIL_ID          SystemId, 
                             long            ControlType, 
                             long            Value, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdispSelect(               MIL_ID          SystemId, 
                             void           *EncoderParam, 
                             void           *OverlappedStruct);

MFTYPE32 void MFTYPE 
OLLdispFree(                  MIL_ID          SystemId,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdispInquire(              MIL_ID          SystemId, 
                             long            InquireType,
                             void           *InquiredValue,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
OLLdispSetLut(               MIL_ID                SystemId,
                             unsigned long MPTYPE *LutData, 
                             void                 *OverlappedStruct);
                                                
//==============================================================================
// internal prototype
//==============================================================================

MFTYPE32 unsigned long MFTYPE 
OLLPciBridge(                MIL_ID          SystemId,
                             void           *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLFindPCIDevice(            MIL_ID                SystemId,
                             unsigned long         DeviceID, 
                             unsigned long         VendorID, 
                             unsigned long         Index, 
                             unsigned long MPTYPE *PciId, 
                             void                 *OverlappedStruct);

MFTYPE32 void * MFTYPE 
OLLFindOrionStruc(          MIL_ID          SystemId, 
                             void           *OverlappedStruct);
   
MFTYPE32 long MFTYPE 
OLLFindOrionId(             long            SystemNum);

MFTYPE32 long MFTYPE 
OLLMapPhysicalMemory(        unsigned long                PhysAddr,
                             unsigned long                Limit,
                             void ORIONFARTYPE * MPTYPE *PointerToMemory,
                             void MPTYPE                 *Handle);
   
MFTYPE32 long MFTYPE 
OLLGeneralUnmapPhysicalMemory(void ORIONFARTYPE *PointerToMemory,
                              void MPTYPE        *Handle);

MFTYPE32 long MFTYPE 
OLLUnmapPhysicalMemory(      void MPTYPE    *Handle);

MFTYPE32 void MPTYPE * MFTYPE 
OLLMemGetPhysAddrFromLinearAddr(MIL_ID                SystemId, 
                                void MPTYPE          *LinearAddr,
                                unsigned long         LinearSize,
                                unsigned long MPTYPE *LinearStatus,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLPciReadConfiguration(        MIL_ID                SystemID,
                                unsigned long         BusDevFunNum,
                                unsigned long         RegNum,
                                unsigned long        *UserPtr,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLPciWriteConfiguration(       MIL_ID                SystemID,
                                unsigned long         BusDevFunNum, 
                                unsigned long         RegNum,
                                unsigned long         Data,
                                void                 *OverlappedStruct);
                                                        
MFTYPE32 unsigned long MFTYPE 
OLLsysWait(                     unsigned long         value);

MFTYPE32 unsigned long MFTYPE 
OLLregReadMga_32(               MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);

MFTYPE32 void MFTYPE 
OLLregWriteMga_32(              MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned long         data, 
                                void                 *OverlappedStruct);
   
MFTYPE32 unsigned short MFTYPE 
OLLregReadMga_16(               MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);

MFTYPE32 void MFTYPE 
OLLregWriteMga_16(              MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned short        data, 
                                void                 *OverlappedStruct);
   
MFTYPE32 unsigned char MFTYPE 
OLLregReadMga_8(                MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);

MFTYPE32 void MFTYPE
OLLregWriteMga_8(               MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned char         data, 
                                void                 *OverlappedStruct);
   
MFTYPE32 unsigned long MFTYPE 
OLLMGAWriteRegister(            MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLMGAReadRegister(             MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
OLLKS0127WriteRegister(         MIL_ID                SystemId, 
                                CAMERA_INFO_STRUC     CamInfo,
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLKS0127ReadRegister(          MIL_ID                SystemId, 
                                CAMERA_INFO_STRUC     CamInfo,
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLLUTWriteRegister(            MIL_ID                SystemId, 
                                unsigned long         LutSelect, 
                                unsigned long         Register, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLLUTReadRegister(             MIL_ID                SystemId, 
                                unsigned long         LutSelect, 
                                unsigned long         Register, 
                                unsigned char        *Data, 
                                void                 *OverlappedStruct); 

MFTYPE32 unsigned long MFTYPE 
OLLToucanWriteRegisterFn(       MIL_ID                SystemId,            // Only used for encoder
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLToucanWriteRegister(         MIL_ID                SystemId, 
                                CAMERA_INFO_STRUC     CamInfo,
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLToucanReadRegisterFn(        MIL_ID                SystemId,         // Only used for encoder
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLToucanReadRegister(          MIL_ID                SystemId, 
                                CAMERA_INFO_STRUC     CamInfo,
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);
MFTYPE32 unsigned long MFTYPE 
OLLToucanDacWriteRegister(      MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLToucanDacReadRegister(       MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);
                       
MFTYPE32 unsigned long MFTYPE 
OLLAD5302WriteRegister(        MIL_ID                SystemId, 
                               CAMERA_INFO_STRUC     CamInfo,
                               unsigned long         Register, 
                               unsigned long         Field, 
                               unsigned long         Data, 
                               unsigned long         Mode, 
                               void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
OLLAD5302ReadRegister(         MIL_ID                SystemId, 
                               CAMERA_INFO_STRUC     CamInfo,
                               unsigned long         Register, 
                               unsigned long         Field, 
                               unsigned long        *Data, 
                               void                 *OverlappedStruct);


MFTYPE32 unsigned long MFTYPE 
OLLEncoderWriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLEncoderReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

#define OLLPixFormatterWriteRegister(SystemId, DigDeviceNb, CamInfo, Register, Field, Data, Mode, OverlappedStruct) OLLPixFormatterWriteRegisterFn(SystemId, CamInfo, Register(DigDeviceNb), Field, Data, Mode, OverlappedStruct)
MFTYPE32 unsigned long MFTYPE 
OLLPixFormatterWriteRegisterFn(  MIL_ID            SystemId,
                                 CAMERA_INFO_STRUC CamInfo,
                                 unsigned long     Register, 
                                 unsigned long     Field, 
                                 unsigned long     Data, 
                                 unsigned long     Mode, 
                                 void             *OverlappedStruct);

#define OLLPixFormatterReadRegister(SystemId, DigDeviceNb, CamInfo, Register, Field, Data, Mode, OverlappedStruct) OLLPixFormatterReadRegisterFn(SystemId, CamInfo, Register(DigDeviceNb), Field, Data, Mode, OverlappedStruct)
MFTYPE32 unsigned long MFTYPE 
OLLPixFormatterReadRegisterFn(   MIL_ID            SystemId, 
                                 CAMERA_INFO_STRUC CamInfo,
                                 unsigned long     Register, 
                                 unsigned long     Field, 
                                 unsigned long    *Data, 
                                 unsigned long     Mode,
                                 void             *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLReadBios                (     MIL_ID         SystemId, 
                                 unsigned long  Register, 
                                 unsigned long  Field, 
                                 unsigned long *Data, 
                                 void          *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLEEPROMLICENSEWriteRegister(  MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Mode, 
                                unsigned long         NbData, 
                                void                 *UserDataPtr,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLEEPROMLICENSEReadRegister(   MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Mode,
                                unsigned long         NbData, 
                                void                 *UserDataPtr,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLADV7185WriteRegister(        MIL_ID                SystemId, 
                                CAMERA_INFO_STRUC     CamInfo,
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLADV7185ReadRegister(         MIL_ID                SystemId, 
                                CAMERA_INFO_STRUC     CamInfo,
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLWriteSerialInterface(        MIL_ID                SystemId, 
                                unsigned char         Address, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
OLLReadSerialInterface(         MIL_ID                SystemId, 
                                unsigned char         Address, 
                                unsigned long        *Data, 
                                void                 *OverlappedStruct);

#ifdef __cplusplus
}
#endif


#endif

//===========================================================================
//
// Structure of register definition
//
// #define REGISTER_NAME            register_address
// #define REGISTER_NAME_Field      ((Field_size  <<  Shift_field_size)   | Field_in_register) 
//             |                          |                 |                    |
//             V                          V                 V                    V
//    corresponding register           size of      0x05 (reg <=32bits)     Field corresponding to bit #
//        field name                   field                                in register(Ex: 0x03 => bit#3)
//                                (Ex: 0x20=32bits) 
//
//===========================================================================



//===========================================================================
//
//          Definition of registers access flags
//
//===========================================================================

#define M_REG_READ_FROM_HW            1L
#define M_REG_READ_FROM_SHADOW        2L
#define M_REG_WRITE_TO_HW             4L
#define M_REG_WRITE_TO_SHADOW         8L
#define M_REG_WRITE_TO_HW_IF_NEEDED   16L

#define M_G400_ACCESS_ONLY             0x10000000
#define M_G450_ACCESS_ONLY             0x20000000

//===========================================================================
//
//          Definition of registers for TOUCAN RAM DAC
//
//===========================================================================
#define OLLTOUCANDAC_EXPANSION              0x3C00L
#define OLLTOUCANDAC_NON_INDEXED_OFFSET_MASK  0xFFL
#define OLLTOUCANDAC_SHIFT_WRITE_ONLY       0x10L
#define OLLTOUCANDAC_SHIFT_PLL              0x11L
#define OLLTOUCANDAC_SHIFT_VGA              0x12L
#define OLLTOUCANDAC_SHIFT_VALUE            0x13L
#define OLLTOUCANDAC_SHIFT_INDEXED_REG      0x14L
#define OLLTOUCANDAC_SHIFT_FIELD_SIZE       0x05L
#define OLLTOUCANDAC_FIELD_OFFSET_MASK      0x1FL
#define OLLTOUCANDAC_FIELD_SIZE_MASK        0x3FL
#define OLLTOUCANDAC_WRITE_ONLY             0x01L
#define OLLTOUCANDAC_PLL                    0x01L
#define OLLTOUCANDAC_VGA                    0x01L
#define OLLTOUCANDAC_INDEXED_REG            0x01L          // Indexed register
#define OLLTOUCANDAC_WRITE_ONLY_MASK        (OLLTOUCANDAC_WRITE_ONLY << OLLTOUCANDAC_SHIFT_WRITE_ONLY)
#define OLLTOUCANDAC_NB_INDEXED_REG         0x100L
#define OLLTOUCANDAC_NB_NON_INDEXED_REG     0x10L
#define OLLTOUCANDAC_PLL_MASK               (OLLTOUCANDAC_PLL   << OLLTOUCANDAC_SHIFT_PLL)
#define OLLTOUCANDAC_VGA_MASK               (OLLTOUCANDAC_VGA   << OLLTOUCANDAC_SHIFT_VGA)
#define OLLTOUCANDAC_INDEXED_REG_MASK       (OLLTOUCANDAC_INDEXED_REG << OLLTOUCANDAC_SHIFT_INDEXED_REG)


// Non-indexed registers
//===========================================================================
#define OLLTOUCANDAC_PALWTADD                0x3C00
#define OLLTOUCANDAC_PALWTADD_ALL            ((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTOUCANDAC_PALDATA                 0x3C01
#define OLLTOUCANDAC_PALDATA_ALL             ((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTOUCANDAC_PIXRDMSK                0x3C02
#define OLLTOUCANDAC_PIXRDMSK_ALL            ((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTOUCANDAC_PALRDADD                0x3C03
#define OLLTOUCANDAC_PALRDADD_ALL            ((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTOUCANDAC_XDATAREG                0x3C0A
#define OLLTOUCANDAC_XDATAREG_ALL            ((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L)

// Indexed registers
//===========================================================================
#define OLLTOUCANDAC_XCURADDL                  0x04L
#define OLLTOUCANDAC_XCURADDL_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURADDH                  0x05L
#define OLLTOUCANDAC_XCURADDH_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XCURADDH_CURADRH         ((((0x06L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XCURADDH_RESERVED        ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x06L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCTRL                  0x06L
#define OLLTOUCANDAC_XCURCTRL_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XCURCTRL_CURMODE         ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XCURCTRL_RESERVED        ((((0x05L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL0RED               0x08L
#define OLLTOUCANDAC_XCURCOL0RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL0GREEN             0x09L
#define OLLTOUCANDAC_XCURCOL0GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL0BLUE              0x0AL
#define OLLTOUCANDAC_XCURCOL0BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL1RED               0x0CL
#define OLLTOUCANDAC_XCURCOL1RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL1GREEN             0x0DL
#define OLLTOUCANDAC_XCURCOL1GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL1BLUE              0x0EL
#define OLLTOUCANDAC_XCURCOL1BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL2RED               0x10L
#define OLLTOUCANDAC_XCURCOL2RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL2GREEN             0x11L
#define OLLTOUCANDAC_XCURCOL2GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL2BLUE              0x12L
#define OLLTOUCANDAC_XCURCOL2BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XVREFCTRL                 0x18L
#define OLLTOUCANDAC_XVREFCTRL_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G400_ACCESS_ONLY)
#define OLLTOUCANDAC_XVREFCTRL_RESERVED0      ((((0x04L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G400_ACCESS_ONLY)
#define OLLTOUCANDAC_XVREFCTRL_DACBGPDN       ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G400_ACCESS_ONLY)
#define OLLTOUCANDAC_XVREFCTRL_DACBGEN        ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G400_ACCESS_ONLY)
#define OLLTOUCANDAC_XVREFCTRL_RESERVED1      ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x06L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G400_ACCESS_ONLY)

#define OLLTOUCANDAC_XMULCTRL                  0x19L
#define OLLTOUCANDAC_XMULCTRL_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XMULCTRL_DEPTH           ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XMULCTRL_RESERVED        ((((0x05L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXCLKCTRL               0x1AL
#define OLLTOUCANDAC_XPIXCLKCTRL_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXCLKCTRL_PIXCLKSL     ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXCLKCTRL_PIXCLKDIS    ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x02L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXCLKCTRL_PIXPLLPDN    ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXCLKCTRL_RESERVED     ((((0x04L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XGENCTRL                  0x1DL
#define OLLTOUCANDAC_XGENCTRL_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENCTRL_RESERVED0       ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENCTRL_ALPHAEN         ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x01L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENCTRL_RESERVED1       ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x02L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENCTRL_PEDON           ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENCTRL_IOGSYNCDIS      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENCTRL_RESERVED2       ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x06L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XMISCCTRL                 0x1EL
#define OLLTOUCANDAC_XMISCCTRL_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XMISCCTRL_DACPDN         ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XMISCCTRL_MFCSEL         ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x01L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XMISCCTRL_VGA8DAC        ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XMISCCTRL_RAMCS          ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XMISCCTRL_VDOUTSEL       ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPANELMODE                0x1FL
#define OLLTOUCANDAC_XPANELMODE_ALL           ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPANELMODE_PANELSEL      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPANELMODE_PANELCTL      ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x01L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPANELMODE_PANHSOFF      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPANELMODE_PANVSOFF      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPANELMODE_PANHSPOL      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x06L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPANELMODE_PANVSPOL      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XMAFCDEL                  0x20L
#define OLLTOUCANDAC_XMAFCDEL_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G400_ACCESS_ONLY)
#define OLLTOUCANDAC_XMAFCDEL_MAFCCLKDEL      ((((0x04L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G400_ACCESS_ONLY)
#define OLLTOUCANDAC_XMAFCDEL_RESERVED        ((((0x04L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G400_ACCESS_ONLY)

#define OLLTOUCANDAC_XGENIOCTRL                0x2A
#define OLLTOUCANDAC_XGENIOCTRL_ALL           ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIOCTRL_DDCOE         ((((0x04L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIOCTRL_MISCOE        ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIOCTRL_MISCOE01      ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIOCTRL_MISCOE0       ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIOCTRL_MISCOE1       ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIOCTRL_MISCOE2       ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x06L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIOCTRL_RESERVED      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XGENIODATA                0x2B
#define OLLTOUCANDAC_XGENIODATA_ALL           ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIODATA_DDCDATA       ((((0x04L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIODATA_MISCDATA      ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIODATA_MISCDATA01    ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIODATA_MISCDATA0     ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIODATA_MISCDATA1     ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIODATA_MISCDATA2     ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x06L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XGENIODATA_RESERVED      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XSYSPLLM                  0x2C
#define OLLTOUCANDAC_XSYSPLLM_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLM_SYSPLLM         ((((0x05L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLM_RESERVED        ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XSYSPLLN                  0x2D
#define OLLTOUCANDAC_XSYSPLLN_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLN_SYSPLLN         ((((0x07L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)  
#define OLLTOUCANDAC_XSYSPLLN_RESERVED        ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK) 

#define OLLTOUCANDAC_XSYSPLLP                  0x2E
#define OLLTOUCANDAC_XSYSPLLP_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLP_SYSPLLP         ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLP_SYSPLLS         ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLP_RESERVED        ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XSYSPLLSTAT               0x2F
#define OLLTOUCANDAC_XSYSPLLSTAT_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLSTAT_RESERVED0    ((((0x06L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLSTAT_SYSLOCK      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x06L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSYSPLLSTAT_RESERVED1    ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XZOOMCTRL                 0x38
#define OLLTOUCANDAC_XZOOMCTRL_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XZOOMCTRL_HZOOM          ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XZOOMCTRL_RESERVED       ((((0x06L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x02L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XSENSETEST                0x3A
#define OLLTOUCANDAC_XSENSETEST_ALL           ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSENSETEST_BCOMP         ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSENSETEST_GCOMP         ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x01L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSENSETEST_RCOMP         ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x02L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSENSETEST_RESERVED      ((((0x04L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XSENSETEST_SENSEPDN      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCRCREML                  0x3C
#define OLLTOUCANDAC_XCRCREML_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCRCREMH                  0x3D
#define OLLTOUCANDAC_XCRCREMH_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCRCBITSEL                0x3E
#define OLLTOUCANDAC_XCRCBITSEL_ALL           ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XCRCBITSEL_CRCSEL        ((((0x05L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XCRCBITSEL_RESERVED      ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCOLMSK                   0x40L
#define OLLTOUCANDAC_XCOLMSK_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCOLKEY                   0x42
#define OLLTOUCANDAC_XCOLKEY_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLAM                 0x44
#define OLLTOUCANDAC_XPIXPLLAM_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLAM_PIXPLLM        ((((0x05L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLAM_RESERVED       ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLAN                 0x45
#define OLLTOUCANDAC_XPIXPLLAN_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLAN_PIXPLLN        ((((0x07L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLAN_RESERVED       ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLAP                 0x46
#define OLLTOUCANDAC_XPIXPLLAP_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLAP_PIXPLLP        ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLAP_PIXPLLS        ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLAP_RESERVED       ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLBM                 0x48
#define OLLTOUCANDAC_XPIXPLLBM_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLBM_PIXPLLM        ((((0x05L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLBM_RESERVED       ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLBN                 0x49
#define OLLTOUCANDAC_XPIXPLLBN_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLBN_PIXPLLN        ((((0x07L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLBN_RESERVED       ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLBP                 0x4AL
#define OLLTOUCANDAC_XPIXPLLBP_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLBP_PIXPLLP        ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLBP_PIXPLLS        ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLBP_RESERVED       ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLCM                 0x4C
#define OLLTOUCANDAC_XPIXPLLCM_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLCM_PIXPLLM        ((((0x05L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLCM_RESERVED       ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLCN                 0x4D
#define OLLTOUCANDAC_XPIXPLLCN_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLCN_PIXPLLN        ((((0x07L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLCN_RESERVED       ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLCP                 0x4E
#define OLLTOUCANDAC_XPIXPLLCP_ALL            ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLCP_PIXPLLP        ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLCP_PIXPLLS        ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLCP_RESERVED       ((((0x03L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XPIXPLLSTAT               0x4F
#define OLLTOUCANDAC_XPIXPLLSTAT_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLSTAT_RESERVED0    ((((0x06L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLSTAT_PIXLOCK      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x06L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XPIXPLLSTAT_RESERVED1    ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x07L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XKEYOPMODE                0x51
#define OLLTOUCANDAC_XKEYOPMODE_ALL           ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XKEYOPMODE_COLKEYEN0     ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)
#define OLLTOUCANDAC_XKEYOPMODE_RESERVED      ((((0x07L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x01L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCOLMSK0RED               0x52
#define OLLTOUCANDAC_XCOLMSK0RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCOLMSK0GREEN             0x53
#define OLLTOUCANDAC_XCOLMSK0GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCOLMSK0BLUE              0x54
#define OLLTOUCANDAC_XCOLMSK0BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCOLKEY0RED               0x55
#define OLLTOUCANDAC_XCOLKEY0RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCOLKEY0GREEN             0x56
#define OLLTOUCANDAC_XCOLKEY0GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCOLKEY0BLUE              0x57
#define OLLTOUCANDAC_XCOLKEY0BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL3RED               0x60
#define OLLTOUCANDAC_XCURCOL3RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL3GREEN             0x61
#define OLLTOUCANDAC_XCURCOL3GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL3BLUE              0x62
#define OLLTOUCANDAC_XCURCOL3BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL4RED               0x63
#define OLLTOUCANDAC_XCURCOL4RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL4GREEN             0x64
#define OLLTOUCANDAC_XCURCOL4GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL4BLUE              0x65
#define OLLTOUCANDAC_XCURCOL4BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL5RED               0x66
#define OLLTOUCANDAC_XCURCOL5RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL5GREEN             0x67
#define OLLTOUCANDAC_XCURCOL5GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL5BLUE              0x68
#define OLLTOUCANDAC_XCURCOL5BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL6RED               0x69
#define OLLTOUCANDAC_XCURCOL6RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL6GREEN             0x6A
#define OLLTOUCANDAC_XCURCOL6GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL6BLUE              0x6B
#define OLLTOUCANDAC_XCURCOL6BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL7RED               0x6C
#define OLLTOUCANDAC_XCURCOL7RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL7GREEN             0x6D
#define OLLTOUCANDAC_XCURCOL7GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL7BLUE              0x6E
#define OLLTOUCANDAC_XCURCOL7BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL8RED               0x6F
#define OLLTOUCANDAC_XCURCOL8RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL8GREEN             0x70
#define OLLTOUCANDAC_XCURCOL8GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL8BLUE              0x71
#define OLLTOUCANDAC_XCURCOL8BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL9RED               0x72
#define OLLTOUCANDAC_XCURCOL9RED_ALL          ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL9GREEN             0x73
#define OLLTOUCANDAC_XCURCOL9GREEN_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL9BLUE              0x74
#define OLLTOUCANDAC_XCURCOL9BLUE_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL10RED              0x75
#define OLLTOUCANDAC_XCURCOL10RED_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL10GREEN            0x76
#define OLLTOUCANDAC_XCURCOL10GREEN_ALL       ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL10BLUE             0x77
#define OLLTOUCANDAC_XCURCOL10BLUE_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL11RED              0x78
#define OLLTOUCANDAC_XCURCOL11RED_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL11GREEN            0x79
#define OLLTOUCANDAC_XCURCOL11GREEN_ALL       ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL11BLUE             0x7A
#define OLLTOUCANDAC_XCURCOL11BLUE_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL12RED              0x7B
#define OLLTOUCANDAC_XCURCOL12RED_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL12GREEN            0x7C
#define OLLTOUCANDAC_XCURCOL12GREEN_ALL       ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL12BLUE             0x7D
#define OLLTOUCANDAC_XCURCOL12BLUE_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL13RED              0x7E
#define OLLTOUCANDAC_XCURCOL13RED_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL13GREEN            0x7F
#define OLLTOUCANDAC_XCURCOL13GREEN_ALL       ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL13BLUE             0x80
#define OLLTOUCANDAC_XCURCOL13BLUE_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL14RED              0x81
#define OLLTOUCANDAC_XCURCOL14RED_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL14GREEN            0x82
#define OLLTOUCANDAC_XCURCOL14GREEN_ALL       ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL14BLUE             0x83
#define OLLTOUCANDAC_XCURCOL14BLUE_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL15RED              0x84
#define OLLTOUCANDAC_XCURCOL15RED_ALL         ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL15GREEN            0x85
#define OLLTOUCANDAC_XCURCOL15GREEN_ALL       ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XCURCOL15BLUE             0x86
#define OLLTOUCANDAC_XCURCOL15BLUE_ALL        ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK)

#define OLLTOUCANDAC_XTVEADDR                  0x87
#define OLLTOUCANDAC_XTVEADDR_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XTVEDATA                  0x88
#define OLLTOUCANDAC_XTVEDATA_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDISPCTRL                 0x8a
#define OLLTOUCANDAC_XDISPCTRL_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)
#define OLLTOUCANDAC_XDISPCTRL_DAC1OUTSEL      ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)
#define OLLTOUCANDAC_XDISPCTRL_DAC2OUTSEL      ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x02L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)
#define OLLTOUCANDAC_XDISPCTRL_PANOUTSEL       ((((0x02L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x05L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XVIDPLLSTAT               0x8C
#define OLLTOUCANDAC_XVIDPLLSTAT_ALL           ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK) | M_G450_ACCESS_ONLY

#define OLLTOUCANDAC_XVIDPLLP                  0x8D
#define OLLTOUCANDAC_XVIDPLLP_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XVIDPLLM                  0x8E
#define OLLTOUCANDAC_XVIDPLLM_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XVIDPLLN                  0x8F
#define OLLTOUCANDAC_XVIDPLLN_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDAC1CRCA                 0x90
#define OLLTOUCANDAC_XDAC1CRCA_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDAC1CRCB                 0x91
#define OLLTOUCANDAC_XDAC1CRCB_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDAC1CRCC                 0x92
#define OLLTOUCANDAC_XDAC1CRCC_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDAC1CRCD                 0x93
#define OLLTOUCANDAC_XDAC1CRCD_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDAC2CRCA                 0x94
#define OLLTOUCANDAC_XDAC2CRCA_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDAC2CRCB                 0x95
#define OLLTOUCANDAC_XDAC2CRCB_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDAC2CRCC                 0x96
#define OLLTOUCANDAC_XDAC2CRCC_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XDAC2CRCD                 0x97
#define OLLTOUCANDAC_XDAC2CRCD_ALL             ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPANCRCA                  0x98
#define OLLTOUCANDAC_XPANCRCA_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPANCRCB                  0x99
#define OLLTOUCANDAC_XPANCRCB_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPANCRCC                  0x9A
#define OLLTOUCANDAC_XPANCRCC_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPANCRCD                  0x9B
#define OLLTOUCANDAC_XPANCRCD_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPWRCTRL                  0xA0
#define OLLTOUCANDAC_XPWRCTRL_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)
#define OLLTOUCANDAC_XPWRCTRL_DAC2PDN          ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)
#define OLLTOUCANDAC_XPWRCTRL_VIDPLLPDN        ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x01L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)
#define OLLTOUCANDAC_XPWRCTRL_PANELPDN         ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x02L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)
#define OLLTOUCANDAC_XPWRCTRL_RFIFOPDN         ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x03L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)
#define OLLTOUCANDAC_XPWRCTRL_CFIFOPDN         ((((0x01L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x04L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPANCRCE                  0xA3
#define OLLTOUCANDAC_XPANCRCE_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPANCRCF                  0xA4
#define OLLTOUCANDAC_XPANCRCF_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPANCRCG                  0xA5
#define OLLTOUCANDAC_XPANCRCG_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

#define OLLTOUCANDAC_XPANCRCH                  0xA6
#define OLLTOUCANDAC_XPANCRCH_ALL              ((((0x08L  << OLLTOUCANDAC_SHIFT_FIELD_SIZE) | 0x00L))  | OLLTOUCANDAC_INDEXED_REG_MASK | M_G450_ACCESS_ONLY)

//===========================================================================
//
//          Definition of registers for KS0127
//
//===========================================================================

#define OLLKS0127_SHIFT_FIELD_SIZE        0x05L
#define OLLKS0127_FIELD_OFFSET_MASK       0x1FL
#define OLLKS0127_FIELD_SIZE_MASK         0x3FL
#define OLLKS0127_MAX_NB_REGISTER         0x80L
#define OLLKS0127_ALL                   ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_DEVICE_ID               0xD8L

#define OLLKS0127_STAT                    0x00L
#define OLLKS0127_STAT_CLOCK            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_STAT_HLOCK            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_STAT_CDET             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_STAT_PALDET           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_STAT_FFRDET           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_STAT_NOVID            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_STAT_VBIFG            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_STAT_CHIPID           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_STAT_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CMDA                    0x01L
#define OLLKS0127_CMDA_IFMT             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CMDA_MNFMT            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_CMDA_PIXSEL           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_CMDA_XT24             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_CMDA_HFSEL            ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_CMDA_VSE              ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CMDA_POWDN            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_CMDA_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CMDB                    0x02L
#define OLLKS0127_CMDB_INSEL            ((0x04L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CMDB_AGCFRZ           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_CMDB_AGCOVF           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_CMDB_VALIGN           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CMDB_AGCGN            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_CMDB_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CMDC                    0x03L
#define OLLKS0127_CMDC_TSTGEN           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CMDC_TSTGFR           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_CMDC_TSTGPH           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_CMDC_TSTGPK           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_CMDC_UNUSED           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_CMDC_TSTGE1           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CMDC_VMEN             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_CMDC_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CMDD                    0x04L
#define OLLKS0127_CMDD_GPPORT           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CMDD_Y1MHZ            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_CMDD_SYNDIR           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_CMDD_INPSL            ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_CMDD_CKDIR            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_CMDD_UNUSED6          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CMDD_EAV              ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_CMDD_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HAVB                    0x05L
#define OLLKS0127_HAVB_HAVB             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HAVB_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HAVE                    0x06L
#define OLLKS0127_HAVE_HAVE             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HAVE_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HS1B                    0x07L
#define OLLKS0127_HS1B_HS1B             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HS1B_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HS1E                    0x08L
#define OLLKS0127_HS1E_HS1E             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HS1E_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HS2B                    0x09L
#define OLLKS0127_HS2B_HS2B             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HS2B_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HS2E                    0x0AL
#define OLLKS0127_HS2E_HS2E             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HS2E_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_AGC                     0x0BL
#define OLLKS0127_AGC_AGC               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_AGC_ALL               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HXTRA                   0x0CL
#define OLLKS0127_HXTRA_HS2B            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HXTRA_HS1B            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_HXTRA_HAVE            ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_HXTRA_HAVB            ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_HXTRA_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CDEM                    0x0DL
#define OLLKS0127_CDEM_UNUSED0          ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CDEM_CIFCMP           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_CDEM_UNUSED5          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_CDEM_FSEC             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CDEM_OUTHIZ           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_CDEM_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_PORTAB                  0x0EL
#define OLLKS0127_PORTAB_DATAA          ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_PORTAB_DIRA           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_PORTAB_DATAB          ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_PORTAB_DIRB           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_PORTAB_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_LUMA                    0x0FL
#define OLLKS0127_LUMA_HYPK             ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_LUMA_CTRAP            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_LUMA_HYBWR            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_LUMA_PED              ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_LUMA_RGBH             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_LUMA_UNIT             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_LUMA_UNUSED           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_LUMA_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CON                     0x10L
#define OLLKS0127_CON_CONT              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CON_ALL               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_BRT                     0x11L
#define OLLKS0127_BRT_BRT               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_BRT_ALL               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CHROMA                  0x12L
#define OLLKS0127_CHROMA_CKILL          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CHROMA_CORE           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_CHROMA_CBW            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_CHROMA_PALN           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_CHROMA_PALM           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CHROMA_ACCFRZ         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_CHROMA_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CHROMB                  0x13L
#define OLLKS0127_CHROMB_SCHCMP         ((0x04L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CHROMB_CDLY           ((0x04L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_CHROMB_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_DEMOD                   0x14L
#define OLLKS0127_DEMOD_MNSEC           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_DEMOD_MNFSC           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_DEMOD_CFC             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_DEMOD_CDMLPF          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_DEMOD_SECDET          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_DEMOD_FSCDET          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_DEMOD_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_SAT                     0x15L
#define OLLKS0127_SAT_SAT               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_SAT_ALL               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HUE                     0x16L
#define OLLKS0127_HUE_HUE               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HUE_ALL               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VERTIA                  0x17L
#define OLLKS0127_VERTIA_VFLTR          ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VERTIA_VRT2X          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_VERTIA_YCMBCO         ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_VERTIA_MNYCMB         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_VERTIA_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VERTIB                  0x18L
#define OLLKS0127_VERTIB_UNUSED         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VERTIB_VSCLEN         ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_VERTIB_HYDEC          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_VERTIB_HYBWI          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_VERTIB_HYLPF          ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_VERTIB_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VERTIC                  0x19L
#define OLLKS0127_VERTIC_EVAVOD         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VERTIC_EVAVEV         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_VERTIC_VYBW           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_VERTIC_ACMBEN         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_VERTIC_CCMBCO         ((0x03L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_VERTIC_MNCCMB         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_VERTIC_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HSCLL                   0x1AL
#define OLLKS0127_HSCLL_CMBMOD          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HSCLL_HSCL            ((0x07L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_HSCLL_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_HSCLH                   0x1BL
#define OLLKS0127_HSCLH_HSCL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_HSCLH_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VSCLL                   0x1CL
#define OLLKS0127_VSCLL_ACMBRE          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VSCLL_ACMBCO          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_VSCLL_VSCL            ((0x06L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_VSCLL_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VSCLH                   0x1DL
#define OLLKS0127_VSCLH_VSCL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VSCLH_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_OFMTA                   0x1EL
#define OLLKS0127_OFMTA_OFMT            ((0x04L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_OFMTA_OENC            ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_OFMTA_GAMEN           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_OFMTA_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_OFMTB                   0x1FL
#define OLLKS0127_OFMTB_EVCK2           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_OFMTB_EVCK            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_OFMTB_EVEHAV          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_OFMTB_EVHAV           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_OFMTB_EVHS1           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_OFMTB_EVAND           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_OFMTB_VSVAV           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_OFMTB_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VBICTL                  0x20L
#define OLLKS0127_VBICTL_ODDOS          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VBICTL_EVENEN         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_VBICTL_ODDEN          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_VBICTL_VBINSRT        ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_VBICTL_VYFMT          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_VBICTL_VBCVBS         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_VBICTL_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CCDAT2                  0x21L
#define OLLKS0127_CCDAT2_CCDAT2         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CCDAT2_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CCDAT1                  0x22L
#define OLLKS0127_CCDAT1_CCDAT1         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CCDAT1_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VBIL30                  0x23L
#define OLLKS0127_VBIL30_VBIL0          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VBIL30_VBIL1          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_VBIL30_VBIL2          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_VBIL30_VBIL3          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_VBIL30_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VBIL74                  0x24L
#define OLLKS0127_VBIL74_VBIL4          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VBIL74_VBIL5          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_VBIL74_VBIL6          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_VBIL74_VBIL7          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_VBIL74_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VBIL118                 0x25L
#define OLLKS0127_VBIL118_VBIL8         ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VBIL118_VBIL9         ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_VBIL118_VBIL10        ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_VBIL118_VBIL11        ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_VBIL118_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VBIL1512                0x26L
#define OLLKS0127_VBIL1512_VBIL12       ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VBIL1512_VBIL13       ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_VBIL1512_VBIL14       ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_VBIL1512_VBIL15       ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_VBIL1512_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_TTFRAM                  0x27L
#define OLLKS0127_TTFRAM_TTFRAM         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_TTFRAM_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_TESTA                   0x28L
#define OLLKS0127_TESTA_UNUSED          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_TESTA_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_UVOFFH                  0x29L
#define OLLKS0127_UVOFFH_VOFFST         ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_UVOFFH_UOFFST         ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_UVOFFH_UNUSED         ((0x04L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_UVOFFH_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_UVOFFL                  0x2AL
#define OLLKS0127_UVOFFL_VOFFST         ((0x04L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_UVOFFL_UOFFST         ((0x04L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_UVOFFL_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_UGAIN                   0x2BL
#define OLLKS0127_UGAIN_UGAIN           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_UGAIN_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VGAIN                   0x2CL
#define OLLKS0127_VGAIN_VGAIN           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VGAIN_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VAVB                    0x2DL
#define OLLKS0127_VAVB_VAVEV0           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VAVB_VAVOD0           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_VAVB_VAVB             ((0x06L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_VAVB_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VAVE                    0x2EL
#define OLLKS0127_VAVE_VAVE             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VAVE_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CTRACK                  0x2FL
#define OLLKS0127_CTRACK_CFTC           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CTRACK_CGTC           ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_CTRACK_DMCTL          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_CTRACK_UNUSED         ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CTRACK_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_POLCTL                  0x30L
#define OLLKS0127_POLCTL_HS1PL          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_POLCTL_VAVPL          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_POLCTL_HS2PL          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_POLCTL_EHAVPL         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_POLCTL_HAVPL          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_POLCTL_ODDPL          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_POLCTL_VSPL           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_POLCTL_EVAVPL         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_POLCTL_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_REFCOD                  0x31L
#define OLLKS0127_REFCOD_GENLIM         ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_REFCOD_YCRANG         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_REFCOD_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_INVALY                  0x32L
#define OLLKS0127_INVALY_INVALY         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_INVALY_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_INVALU                  0x33L
#define OLLKS0127_INVALU_INVALU         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_INVALU_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_INVALV                  0x34L
#define OLLKS0127_INVALV_INVALV         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_INVALV_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_UNUSEY                  0x35L
#define OLLKS0127_UNUSEY_UNUSEY         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_UNUSEY_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_UNUSEU                  0x36L
#define OLLKS0127_UNUSEU_UNUSEU         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_UNUSEU_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_UNUSEV                  0x37L
#define OLLKS0127_UNUSEV_UNUSEV         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_UNUSEV_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_EXCTRL                  0x38L
#define OLLKS0127_EXCTRL_CLEVEL          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_EXCTRL_BISTE           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_EXCTRL_BISTM           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_EXCTRL_AUCPWD          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_EXCTRL_ALTHAV          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_EXCTRL_TREE            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_EXCTRL_ENINCST         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_EXCTRL_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_TRACKA                 0x39L
#define OLLKS0127_TRACKA_AGCLSB          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_TRACKA_VBCTRAP         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_TRACKA_ATCTRAP         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_TRACKA_VCRLEV          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_TRACKA_VCRDET          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_TRACKA_MACDET          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_TRACKA_STCTRL          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_TRACKA_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_SHS1A                  0x3AL
#define OLLKS0127_SHS1A_COFFENB          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_SHS1A_YOFFENB          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_SHS1A_CCOVFL           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_SHS1A_NEWCC            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_SHS1A_VBIMID           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_SHS1A_TTSYS            ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_SHS1A_VBISWAP          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_SHS1A_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_TRACKB                 0x3BL
#define OLLKS0127_TRACKB_AGCLKG          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_TRACKB_AGCLPG          ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_TRACKB_VNOISCT         ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_TRACKB_PHCTRL          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_TRACKB_VBIFR           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_TRACKB_VBIPH           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_TRACKB_ALT656          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_TRACKB_ALL             ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_RTC                    0x3CL
#define OLLKS0127_RTC_TDMOD              ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_RTC_EN                 ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_RTC_PID                ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_RTC_DTO                ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_RTC_ALL                ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CMDE                    0x3DL
#define OLLKS0127_CMDE_CHIPREVID         ((0x04L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CMDE_HCORE             ((0x02L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_CMDE_VSALG             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CMDE_ODFST             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_CMDE_ALL               ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_VSDEL                   0x3EL
#define OLLKS0127_VSDEL_VSDEL            ((0x06L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_VSDEL_NOVIDC           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_VSDEL_TRMS             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_VSDEL_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_CMDF                    0x3FL
#define OLLKS0127_CMDF_CBWI             ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_CMDF_TASKB            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLKS0127_CMDF_REGUD            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLKS0127_CMDF_UVDLSL           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLKS0127_CMDF_UVDLEN           ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLKS0127_CMDF_EVAVY            ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLKS0127_CMDF_VIPMODE          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLKS0127_CMDF_TRAPFSC          ((0x01L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLKS0127_CMDF_ALL              ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA0                  0x40L
#define OLLKS0127_GAMMA0_GAMMA0         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA0_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA1                  0x41L
#define OLLKS0127_GAMMA1_GAMMA1         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA1_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA2                  0x42L
#define OLLKS0127_GAMMA2_GAMMA2         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA2_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA3                  0x43L
#define OLLKS0127_GAMMA3_GAMMA3         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA3_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA4                  0x44L
#define OLLKS0127_GAMMA4_GAMMA4         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA4_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA5                  0x45L
#define OLLKS0127_GAMMA5_GAMMA5         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA5_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA6                  0x46L
#define OLLKS0127_GAMMA6_GAMMA6         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA6_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA7                  0x47L
#define OLLKS0127_GAMMA7_GAMMA7         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA7_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA8                  0x48L
#define OLLKS0127_GAMMA8_GAMMA8         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA8_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA9                  0x49L
#define OLLKS0127_GAMMA9_GAMMA9         ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA9_ALL            ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA10                 0x4AL
#define OLLKS0127_GAMMA10_GAMMA10       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA10_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA11                 0x4BL
#define OLLKS0127_GAMMA11_GAMMA11       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA11_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA12                 0x4CL
#define OLLKS0127_GAMMA12_GAMMA12       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA12_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA13                 0x4DL
#define OLLKS0127_GAMMA13_GAMMA13       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA13_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA14                 0x4EL
#define OLLKS0127_GAMMA14_GAMMA14       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA14_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA15                 0x4FL
#define OLLKS0127_GAMMA15_GAMMA15       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA15_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA16                 0x50L
#define OLLKS0127_GAMMA16_GAMMA16       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA16_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA17                 0x51L
#define OLLKS0127_GAMMA17_GAMMA17       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA17_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA18                 0x52L
#define OLLKS0127_GAMMA18_GAMMA18       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA18_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA19                 0x53L
#define OLLKS0127_GAMMA19_GAMMA19       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA19_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA20                 0x54L
#define OLLKS0127_GAMMA20_GAMMA20       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA20_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA21                 0x55L
#define OLLKS0127_GAMMA21_GAMMA21       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA21_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA22                 0x56L
#define OLLKS0127_GAMMA22_GAMMA22       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA22_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA23                 0x57L
#define OLLKS0127_GAMMA23_GAMMA23       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA23_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA24                 0x58L
#define OLLKS0127_GAMMA24_GAMMA24       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA24_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA25                 0x59L
#define OLLKS0127_GAMMA25_GAMMA25       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA25_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA26                 0x5AL
#define OLLKS0127_GAMMA26_GAMMA26       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA26_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA27                 0x5BL
#define OLLKS0127_GAMMA27_GAMMA27       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA27_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA28                 0x5CL
#define OLLKS0127_GAMMA28_GAMMA28       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA28_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA29                 0x5DL
#define OLLKS0127_GAMMA29_GAMMA29       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA29_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA30                 0x5EL
#define OLLKS0127_GAMMA30_GAMMA30       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA30_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMA31                 0x5FL
#define OLLKS0127_GAMMA31_GAMMA31       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMA31_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD0                 0x60L
#define OLLKS0127_GAMMAD0_GAMMAD0       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD0_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD1                 0x61L
#define OLLKS0127_GAMMAD1_GAMMAD1       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD1_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD2                 0x62L
#define OLLKS0127_GAMMAD2_GAMMAD2       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD2_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD3                 0x63L
#define OLLKS0127_GAMMAD3_GAMMAD3       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD3_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD4                 0x64L
#define OLLKS0127_GAMMAD4_GAMMAD4       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD4_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD5                 0x65L
#define OLLKS0127_GAMMAD5_GAMMAD5       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD5_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD6                 0x66L
#define OLLKS0127_GAMMAD6_GAMMAD6       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD6_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD7                 0x67L
#define OLLKS0127_GAMMAD7_GAMMAD7       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD7_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD8                 0x68L
#define OLLKS0127_GAMMAD8_GAMMAD8       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD8_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD9                 0x69L
#define OLLKS0127_GAMMAD9_GAMMAD9       ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD9_ALL           ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD10                0x6AL
#define OLLKS0127_GAMMAD10_GAMMAD10     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD10_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD11                0x6BL
#define OLLKS0127_GAMMAD11_GAMMAD11     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD11_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD12                0x6CL
#define OLLKS0127_GAMMAD12_GAMMAD12     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD12_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD13                0x6DL
#define OLLKS0127_GAMMAD13_GAMMAD13     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD13_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD14                0x6EL
#define OLLKS0127_GAMMAD14_GAMMAD14     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD14_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD15                0x6FL
#define OLLKS0127_GAMMAD15_GAMMAD15     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD15_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD16                0x70L
#define OLLKS0127_GAMMAD16_GAMMAD16     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD16_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD17                0x71L
#define OLLKS0127_GAMMAD17_GAMMAD17     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD17_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD18                0x72L
#define OLLKS0127_GAMMAD18_GAMMAD18     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD18_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD19                0x73L
#define OLLKS0127_GAMMAD19_GAMMAD19     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD19_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD20                0x74L
#define OLLKS0127_GAMMAD20_GAMMAD20     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD20_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD21                0x75L
#define OLLKS0127_GAMMAD21_GAMMAD21     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD21_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD22                0x76L
#define OLLKS0127_GAMMAD22_GAMMAD22     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD22_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD23                0x77L
#define OLLKS0127_GAMMAD23_GAMMAD23     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD23_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD24                0x78L
#define OLLKS0127_GAMMAD24_GAMMAD24     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD24_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD25                0x79L
#define OLLKS0127_GAMMAD25_GAMMAD25     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD25_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD26                0x7AL
#define OLLKS0127_GAMMAD26_GAMMAD26     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD26_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD27                0x7BL
#define OLLKS0127_GAMMAD27_GAMMAD27     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD27_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD28                0x7CL
#define OLLKS0127_GAMMAD28_GAMMAD28     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD28_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD29                0x7DL
#define OLLKS0127_GAMMAD29_GAMMAD29     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD29_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD30                0x7EL
#define OLLKS0127_GAMMAD30_GAMMAD30     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD30_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLKS0127_GAMMAD31                0x7FL
#define OLLKS0127_GAMMAD31_GAMMAD31     ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLKS0127_GAMMAD31_ALL          ((0x08L           << OLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)



//===========================================================================
//
//          Definition of registers for Licence eeprom
//
//===========================================================================

#define OLLEEPROMLICENSE_SHIFT_FIELD_SIZE        0x05L
#define OLLEEPROMLICENSE_FIELD_OFFSET_MASK       0x1FL
#define OLLEEPROMLICENSE_FIELD_SIZE_MASK         0x3FL
#define OLLEEPROMLICENSE_MAX_NB_REGISTER         0xFFL
#define OLLEEPROMLICENSE_ALL                   ((0x08L           << OLLEEPROMLICENSE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLEEPROMLICENSE_DEVICE_ID               0xA0L

#define OLLEEPROMLICENSE_REG                    0x00L
#define OLLEEPROMLICENSE_REG_ALL               ((0x08L           << OLLEEPROMLICENSE_SHIFT_FIELD_SIZE) | 0x00L)

//===========================================================================
//
//          Definition of registers for Toucan
//
//===========================================================================

#define OLLTOUCAN_DATA_MASK                0x3FFF
#define OLLTOUCAN_SHIFT_WRITE_ONLY         0x001D
#define OLLTOUCAN_WRITE_ONLY               0x0001
#define OLLTOUCAN_WRITE_ONLY_MASK          (OLLTOUCAN_WRITE_ONLY << OLLTOUCAN_SHIFT_WRITE_ONLY)
#define OLLTOUCAN_SHIFT_FIELD              0x0005
#define OLLTOUCAN_FIELD_OFFSET_MASK        0x001F
#define OLLTOUCAN_FIELD_MASK               0x003F
#define OLLTOUCAN_SHIFT_FIELD_MASK         (OLLTOUCAN_FIELD_MASK << OLLTOUCAN_SHIFT_FIELD)

#define OLLTOUCAN_SHIFT_ATTR               0x11L
#define OLLTOUCAN_SHIFT_SEQ                0x12L
#define OLLTOUCAN_SHIFT_GCTL               0x13L
#define OLLTOUCAN_SHIFT_CRTC               0x14L
#define OLLTOUCAN_SHIFT_CRTCEXT            0x15L
#define OLLTOUCAN_SHIFT_VALUE              0x16L
#define OLLTOUCAN_ATTR_MASK                (0x01 << OLLTOUCAN_SHIFT_ATTR)
#define OLLTOUCAN_SEQ_MASK                 (0x01 << OLLTOUCAN_SHIFT_SEQ)
#define OLLTOUCAN_GCTL_MASK                (0x01 << OLLTOUCAN_SHIFT_GCTL)
#define OLLTOUCAN_CRTC_MASK                (0x01 << OLLTOUCAN_SHIFT_CRTC)
#define OLLTOUCAN_CRTCEXT_MASK             (0x01 << OLLTOUCAN_SHIFT_CRTCEXT)

// Configuration registers
#define OLLTOUCAN_DEVID                    0x0000
#define OLLTOUCAN_DEVCTRL                  0x0004
#define OLLTOUCAN_CLASSCODE                0x0008
#define OLLTOUCAN_HEADER                   0x000C
#define OLLTOUCAN_MGABASE2                 0x0010
#define OLLTOUCAN_MGABASE1                 0x0014
#define OLLTOUCAN_MGABASE3                 0x0018
#define OLLTOUCAN_SUBSYSID                 0x002C
#define OLLTOUCAN_ROMBASE                  0x0030
#define OLLTOUCAN_INTCTRL                  0x003C
#define OLLTOUCAN_OPTION                   0x0040
#define OLLTOUCAN_MGAINDEX                 0x0044
#define OLLTOUCAN_MGADATA                  0x0048
#define OLLTOUCAN_OPTION2                  0x0050
#define OLLTOUCAN_OPTION3                  0x0054
#define OLLTOUCAN_MEMMISC                  0x0058              // Only on G450
#define OLLTOUCAN_AGPSTATUS                0x00F4
#define OLLTOUCAN_AGPCOMMAND               0x00F8

// Memory registers
#define OLLTOUCAN_DWGCTL                  (0x1C00)
#define OLLTOUCAN_DWGCTL_ALL               (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_MACCESS                 (0x1C04)
#define OLLTOUCAN_MACCESS_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_MCTLWTST                (0x1C08)
#define OLLTOUCAN_MCTLWTST_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_ZORG                    (0x1C0C)
#define OLLTOUCAN_ZORG_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_PAT0                    (0x1C10)
#define OLLTOUCAN_PAT0_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_PAT1                    (0x1C14)
#define OLLTOUCAN_PAT1_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_PLNWT                   (0x1C1C)
#define OLLTOUCAN_PLNWT_ALL                (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BCOL                    (0x1C20)
#define OLLTOUCAN_BCOL_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_FCOL                    (0x1C24)
#define OLLTOUCAN_FCOL_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SRC0                    (0x1C30)
#define OLLTOUCAN_SRC0_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SRC1                    (0x1C34)
#define OLLTOUCAN_SRC1_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SRC2                    (0x1C38)
#define OLLTOUCAN_SRC2_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SRC3                    (0x1C3C)
#define OLLTOUCAN_SRC3_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_XYSTRT                  (0x1C40)
#define OLLTOUCAN_XYSTRT_ALL               (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_XYEND                   (0x1C44)
#define OLLTOUCAN_XYEND_ALL                (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SHIFT                   (0x1C50)
#define OLLTOUCAN_SHIFT_ALL                (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DMAPAD                  (0x1C54)
#define OLLTOUCAN_DMAPAD_ALL               (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SGN                     (0x1C58)
#define OLLTOUCAN_SGN_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_LEN                     (0x1C5C)
#define OLLTOUCAN_LEN_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_AR0                     (0x1C60)
#define OLLTOUCAN_AR0_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_AR1                     (0x1C64)
#define OLLTOUCAN_AR1_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_AR2                     (0x1C68)
#define OLLTOUCAN_AR2_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_AR3                     (0x1C6C)
#define OLLTOUCAN_AR3_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_AR4                     (0x1C70)
#define OLLTOUCAN_AR4_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_AR5                     (0x1C74)
#define OLLTOUCAN_AR5_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_AR6                     (0x1C78)
#define OLLTOUCAN_AR6_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VHADJUST                (0x1C78)          //Only on G450
#define OLLTOUCAN_VHADJUST_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_CXBNDRY                 (0x1C80)
#define OLLTOUCAN_CXBNDRY_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_FXBNDRY                 (0x1C84)
#define OLLTOUCAN_FXBNDRY_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_YDSTLEN                 (0x1C88)
#define OLLTOUCAN_YDSTLEN_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_PITCH                   (0x1C8C)
#define OLLTOUCAN_PITCH_ALL                (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_YDST                    (0x1C90)
#define OLLTOUCAN_YDST_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

//#define OLLTOUCAN_YDSTORG                 (0x1C94)
//#define OLLTOUCAN_YDSTORG_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_YTOP                    (0x1C98)
#define OLLTOUCAN_YTOP_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_YBOT                    (0x1C9C)
#define OLLTOUCAN_YBOT_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_CXLEFT                  (0x1CA0)
#define OLLTOUCAN_CXLEFT_ALL               (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_CXRIGHT                 (0x1CA4)
#define OLLTOUCAN_CXRIGHT_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_FXLEFT                  (0x1CA8)
#define OLLTOUCAN_FXLEFT_ALL               (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_FXRIGHT                 (0x1CAC)
#define OLLTOUCAN_FXRIGHT_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_XDST                    (0x1CB0)
#define OLLTOUCAN_XDST_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR0                     (0x1CC0)
#define OLLTOUCAN_DR0_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR1                     (0x1CC4)
#define OLLTOUCAN_DR1_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR2                     (0x1CC8)
#define OLLTOUCAN_DR2_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR3                     (0x1CCC)
#define OLLTOUCAN_DR3_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR4                     (0x1CD0)
#define OLLTOUCAN_DR4_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR5                     (0x1CD4)
#define OLLTOUCAN_DR5_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR6                     (0x1CD8)
#define OLLTOUCAN_DR6_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR7                     (0x1CDC)
#define OLLTOUCAN_DR7_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR8                     (0x1CE0)
#define OLLTOUCAN_DR8_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR9                     (0x1CE4)
#define OLLTOUCAN_DR9_ALL                  (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR10                    (0x1CE8)
#define OLLTOUCAN_DR10_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR11                    (0x1CEC)
#define OLLTOUCAN_DR11_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR12                    (0x1CF0)
#define OLLTOUCAN_DR12_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR13                    (0x1CF4)
#define OLLTOUCAN_DR13_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR14                    (0x1CF8)
#define OLLTOUCAN_DR14_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR15                    (0x1CFC)
#define OLLTOUCAN_DR15_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_FIFOSTATUS               0x1E10  
#define OLLTOUCAN_FIFOSTATUS_ALL           ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_STATUS                   0x1E14   
#define OLLTOUCAN_STATUS_ALL               ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0  )
#define OLLTOUCAN_STATUS_RESERVE3          ((0x0e << OLLTOUCAN_SHIFT_FIELD) | 0x12 )
#define OLLTOUCAN_STATUS_ENDPRDMASTS       ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x11 )
#define OLLTOUCAN_STATUS_DWGENGSTS         ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x10 )
#define OLLTOUCAN_STATUS_RESERVE2          ((0x09 << OLLTOUCAN_SHIFT_FIELD) | 0x07 )
#define OLLTOUCAN_STATUS_EXTPEN            ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x06 )      // RESERVED on G450
#define OLLTOUCAN_STATUS_VLINEPEN          ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x05 )
#define OLLTOUCAN_STATUS_VSYNCPEN          ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x04 )
#define OLLTOUCAN_STATUS_VSYNCSTS          ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x03 )
#define OLLTOUCAN_STATUS_PICKPEN           ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x02 )
#define OLLTOUCAN_STATUS_RESERVED1         ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x01 )
#define OLLTOUCAN_STATUS_SOFTRAPEN         ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x00 )

#define OLLTOUCAN_ICLEAR                  (0x1E18)
#define OLLTOUCAN_ICLEAR_ALL               (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_IEN                      0x1E1C
#define OLLTOUCAN_IEN_EXTIEN               ((0x1 << OLLTOUCAN_SHIFT_FIELD)  | 0x6 )       // RESERVED
#define OLLTOUCAN_IEN_ALL                  ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_VCOUNT                   0x1E20  
#define OLLTOUCAN_VCOUNT_ALL               ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_DMAMAP30                 0x1E30
#define OLLTOUCAN_DMAMAP30_ALL             ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_DMAMAP74                 0x1E34
#define OLLTOUCAN_DMAMAP74_ALL             ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_DMAMAPB8                 0x1E38
#define OLLTOUCAN_DMAMAPB8_ALL             ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_DMAMAPFC                 0x1E3C
#define OLLTOUCAN_DMAMAPFC_ALL             ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_RST                      0x1E40
#define OLLTOUCAN_RST_SOFTRESET            ((0x1  << OLLTOUCAN_SHIFT_FIELD) | 0x0 )
#define OLLTOUCAN_RST_SOFTEXTRST           ((0x1  << OLLTOUCAN_SHIFT_FIELD) | 0x1 )
#define OLLTOUCAN_RST_ALL                  ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_TEST0                     0x1E48
#define OLLTOUCAN_TEST0_ALL                 ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_CFGOVR                   0x1E4C  
#define OLLTOUCAN_CFGOVR_ALL               ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_PRIMPTR                  0x1E50  
#define OLLTOUCAN_PRIMPTR_ALL               ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_OPMODE                   0x1E54
#define OLLTOUCAN_OPMODE_ALL               ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_PRIMADDRESS              0x1E58
#define OLLTOUCAN_PRIMADDRESS_ALL          ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_PRIMEND                  0x1E5C
#define OLLTOUCAN_PRIMEND_ALL              ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_DWG_INDIR_WT0           (0x1E80)
#define OLLTOUCAN_DWG_INDIR_WT0_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT1           (0x1E84)
#define OLLTOUCAN_DWG_INDIR_WT1_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT2           (0x1E88)
#define OLLTOUCAN_DWG_INDIR_WT2_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT3           (0x1E8C)
#define OLLTOUCAN_DWG_INDIR_WT3_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT4           (0x1E90)
#define OLLTOUCAN_DWG_INDIR_WT4_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT5           (0x1E94)
#define OLLTOUCAN_DWG_INDIR_WT5_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT6           (0x1E98)
#define OLLTOUCAN_DWG_INDIR_WT6_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT7           (0x1E9C)
#define OLLTOUCAN_DWG_INDIR_WT7_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT8           (0x1EA0)
#define OLLTOUCAN_DWG_INDIR_WT8_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT9           (0x1EA4)
#define OLLTOUCAN_DWG_INDIR_WT9_ALL        (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
                                         
#define OLLTOUCAN_DWG_INDIR_WT10          (0x1EA8)
#define OLLTOUCAN_DWG_INDIR_WT10_ALL       (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT11          (0x1EAC)
#define OLLTOUCAN_DWG_INDIR_WT11_ALL       (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT12          (0x1EB0)
#define OLLTOUCAN_DWG_INDIR_WT12_ALL       (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
                                        
#define OLLTOUCAN_DWG_INDIR_WT13          (0x1EB4)
#define OLLTOUCAN_DWG_INDIR_WT13_ALL       (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT14          (0x1EB8)
#define OLLTOUCAN_DWG_INDIR_WT14_ALL       (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DWG_INDIR_WT15          (0x1EBC)
#define OLLTOUCAN_DWG_INDIR_WT15_ALL       ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_ATTR                     0x1FC0
#define OLLTOUCAN_ATTR_ALL                 ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_INSTS0                   0x1FC2
#define OLLTOUCAN_INSTS0_ALL               ((0x08 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_SEQ                      0x1FC4
#define OLLTOUCAN_SEQ_ALL                  ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_DACSTAT                  0x1FC7
#define OLLTOUCAN_DACSTAT_ALL              ((0x08 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_FEAT                     0x1FCA
#define OLLTOUCAN_FEAT_ALL                 ((0x08 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_MISC                     0x1FCC
#define OLLTOUCAN_MISC_ALL                 ((0x08 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_GCTL                     0x1FCE
#define OLLTOUCAN_GCTL_ALL                 ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_CRTC                     0x1FD4
#define OLLTOUCAN_CRTC_ALL                 ((0x08 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_INSTS1                   0x1FDA
#define OLLTOUCAN_INSTS1_ALL               ((0x08 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_CRTCEXT                  0x1FDE
#define OLLTOUCAN_CRTCEXT_ALL              ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_CACHEFLUSH               0x1FFF
#define OLLTOUCAN_CACHEFLUSH_ALL           ((0x08 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_TMR0                    (0x2C00)
#define OLLTOUCAN_TMR0_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TMR1                    (0x2C04)
#define OLLTOUCAN_TMR1_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TMR2                    (0x2C08)
#define OLLTOUCAN_TMR2_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TMR3                    (0x2C0C)
#define OLLTOUCAN_TMR3_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TMR4                    (0x2C10)
#define OLLTOUCAN_TMR4_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TMR5                    (0x2C14)
#define OLLTOUCAN_TMR5_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TMR6                    (0x2C18)
#define OLLTOUCAN_TMR6_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TMR7                    (0x2C1C)
#define OLLTOUCAN_TMR7_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TMR8                    (0x2C20)
#define OLLTOUCAN_TMR8_ALL                 (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXORG                  (0x2C24)
#define OLLTOUCAN_TEXORG_ALL               (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXWIDTH                (0x2C28)
#define OLLTOUCAN_TEXWIDTH_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXHEIGTH               (0x2C2C)
#define OLLTOUCAN_TEXHEIGTH_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXCTL                  (0x2C30)
#define OLLTOUCAN_TEXCTL_ALL               (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXTRANS                (0x2C34)
#define OLLTOUCAN_TEXTRANS_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SECADDRESS               0x2C40
#define OLLTOUCAN_SECADDRESS_ALL           ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_SECEND                   0x2C44
#define OLLTOUCAN_SECEND_ALL               ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_SOFTRAP                  0x2C48
#define OLLTOUCAN_SOFTRAP_ALL              ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_DR0Z32LSB                (0x2C50)
#define OLLTOUCAN_DR0Z32LSB_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR0Z32MSB                (0x2C54)
#define OLLTOUCAN_DR0Z32MSB_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR2Z32LSB                (0x2C60)
#define OLLTOUCAN_DR2Z32LSB_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR2Z32MSB                (0x2C64)
#define OLLTOUCAN_DR2Z32MSB_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR3Z32LSB                (0x2C68)
#define OLLTOUCAN_DR3Z32LSB_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DR3Z32MSB                (0x2C6C)
#define OLLTOUCAN_DR3Z32MSB_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_ALPHASTART              (0x2C70)
#define OLLTOUCAN_ALPHASTART_ALL          (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_ALPHAXINC               (0x2C74)
#define OLLTOUCAN_ALPHAXINC_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_ALPHACTRL               (0x2C7C)
#define OLLTOUCAN_ALPHACTRL_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECRSTART              (0x2C80)
#define OLLTOUCAN_SPECRSTART_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECRXINC               (0x2C84)
#define OLLTOUCAN_SPECRXINC_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECRYINC               (0x2C88)
#define OLLTOUCAN_SPECRYINC_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECGSTART              (0x2C8C)
#define OLLTOUCAN_SPECGSTART_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECGXINC               (0x2C90)
#define OLLTOUCAN_SPECGXINC_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECGYINC               (0x2C94)
#define OLLTOUCAN_SPECGYINC_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECBSTART              (0x2C98)
#define OLLTOUCAN_SPECBSTART_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECBXINC               (0x2C9C)
#define OLLTOUCAN_SPECBXINC_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SPECBYINC               (0x2CA0)
#define OLLTOUCAN_SPECBYINC_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXORG1              (0x2CA4)
#define OLLTOUCAN_TEXORG1_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXORG2              (0x2CA8)
#define OLLTOUCAN_TEXORG2_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXORG3              (0x2CAC)
#define OLLTOUCAN_TEXORG3_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TEXORG4              (0x2CB0)
#define OLLTOUCAN_TEXORG4_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SRCORG               (0x2CB4)
#define OLLTOUCAN_SRCORG_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_DSTORG               (0x2CB8)
#define OLLTOUCAN_DSTORG_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_STENCIL              (0x2CC8)
#define OLLTOUCAN_STENCIL_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_STENCILCTL              (0x2CCC)
#define OLLTOUCAN_STENCILCTL_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_SETUPADDRESS               0x2CD0
#define OLLTOUCAN_SETUPADDRESS_ALL           ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_SETUPEND                0x2CD4
#define OLLTOUCAN_SETUPEND_ALL            ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_TBUMPMAT                (0x2CF0)
#define OLLTOUCAN_TBUMPMAT_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TBUMPFMT                (0x2CF4)
#define OLLTOUCAN_TBUMPFMT_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TDUALSTAGE0                (0x2CF8)
#define OLLTOUCAN_TDUALSTAGE0_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_TDUALSTAGE1                (0x2CFC)
#define OLLTOUCAN_TDUALSTAGE1_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR0               (0x2D00)
#define OLLTOUCAN_WR0_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR1               (0x2D04)
#define OLLTOUCAN_WR1_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR2               (0x2D08)
#define OLLTOUCAN_WR2_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR3               (0x2D0C)
#define OLLTOUCAN_WR3_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR4               (0x2D10)
#define OLLTOUCAN_WR4_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR5               (0x2D14)
#define OLLTOUCAN_WR5_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR6               (0x2D18)
#define OLLTOUCAN_WR6_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR7               (0x2D1C)
#define OLLTOUCAN_WR7_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR8               (0x2D20)
#define OLLTOUCAN_WR8_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR9               (0x2D24)
#define OLLTOUCAN_WR9_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR10              (0x2D28)
#define OLLTOUCAN_WR10_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR11              (0x2D2C)
#define OLLTOUCAN_WR11_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR12              (0x2D30)
#define OLLTOUCAN_WR12_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR13              (0x2D34)
#define OLLTOUCAN_WR13_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR14              (0x2D38)
#define OLLTOUCAN_WR14_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR15              (0x2D3C)
#define OLLTOUCAN_WR15_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR16              (0x2D40)
#define OLLTOUCAN_WR16_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR17              (0x2D44)
#define OLLTOUCAN_WR17_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR18              (0x2D48)
#define OLLTOUCAN_WR18_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR19              (0x2D4C)
#define OLLTOUCAN_WR19_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR20              (0x2D50)
#define OLLTOUCAN_WR20_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR21              (0x2D54)
#define OLLTOUCAN_WR21_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR22              (0x2D58)
#define OLLTOUCAN_WR22_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR23              (0x2D5C)
#define OLLTOUCAN_WR23_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR24              (0x2D60)
#define OLLTOUCAN_WR24_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR25              (0x2D64)
#define OLLTOUCAN_WR25_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR26              (0x2D68)
#define OLLTOUCAN_WR26_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR27              (0x2D6C)
#define OLLTOUCAN_WR27_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR28              (0x2D70)
#define OLLTOUCAN_WR28_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR29              (0x2D74)
#define OLLTOUCAN_WR29_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR30              (0x2D78)
#define OLLTOUCAN_WR30_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR31              (0x2D7C)
#define OLLTOUCAN_WR31_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR32              (0x2D80)
#define OLLTOUCAN_WR32_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR33              (0x2D84)
#define OLLTOUCAN_WR33_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR34              (0x2D88)
#define OLLTOUCAN_WR34_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR35              (0x2D8C)
#define OLLTOUCAN_WR35_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR36              (0x2D90)
#define OLLTOUCAN_WR36_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR37              (0x2D94)
#define OLLTOUCAN_WR37_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR38              (0x2D98)
#define OLLTOUCAN_WR38_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR39              (0x2D9C)
#define OLLTOUCAN_WR39_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR40              (0x2DA0)
#define OLLTOUCAN_WR40_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR41              (0x2DA4)
#define OLLTOUCAN_WR41_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR42              (0x2DA8)
#define OLLTOUCAN_WR42_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR43              (0x2DAC)
#define OLLTOUCAN_WR43_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR44              (0x2DB0)
#define OLLTOUCAN_WR44_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR45              (0x2DB4)
#define OLLTOUCAN_WR45_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR46              (0x2DB8)
#define OLLTOUCAN_WR46_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR47              (0x2DBC)
#define OLLTOUCAN_WR47_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR48              (0x2DC0)
#define OLLTOUCAN_WR48_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR49              (0x2DC4)
#define OLLTOUCAN_WR49_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR50              (0x2DC8)
#define OLLTOUCAN_WR50_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR51              (0x2DCC)
#define OLLTOUCAN_WR51_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR52              (0x2DD0)
#define OLLTOUCAN_WR52_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR53              (0x2DD4)
#define OLLTOUCAN_WR53_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR54              (0x2DD8)
#define OLLTOUCAN_WR54_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR55              (0x2DDC)
#define OLLTOUCAN_WR55_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR56              (0x2DE0)
#define OLLTOUCAN_WR56_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR57              (0x2DE4)
#define OLLTOUCAN_WR57_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR58              (0x2DE8)
#define OLLTOUCAN_WR58_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR59              (0x2DEC)
#define OLLTOUCAN_WR59_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR60              (0x2DF0)
#define OLLTOUCAN_WR60_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR61              (0x2DF4)
#define OLLTOUCAN_WR61_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR62              (0x2DF8)
#define OLLTOUCAN_WR62_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_WR63              (0x2DFC)
#define OLLTOUCAN_WR63_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2CTL                0x3C10
#define OLLTOUCAN_C2CTL_ALL            ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )
#define OLLTOUCAN_C2CTL_C2EN           ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )
#define OLLTOUCAN_C2CTL_C2PIXCLKSEL1_0 ((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x1 )
#define OLLTOUCAN_C2CTL_C2PIXCLKSEL2   ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0xE )
#define OLLTOUCAN_C2CTL_C2PIXCLKDIS    ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x3 )
#define OLLTOUCAN_C2CTL_C2HIPRILVL     ((0x03 << OLLTOUCAN_SHIFT_FIELD) | 0x4 )
#define OLLTOUCAN_C2CTL_C2MAXHIPRI     ((0x03 << OLLTOUCAN_SHIFT_FIELD) | 0x8 )
#define OLLTOUCAN_C2CTL_C2OUT656EN     ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0xC )
#define OLLTOUCAN_C2CTL_HDTVEN         ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0xD )
#define OLLTOUCAN_C2CTL_CRTCDACSEL     ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x14)
#define OLLTOUCAN_C2CTL_C2DEPTH        ((0x03 << OLLTOUCAN_SHIFT_FIELD) | 0x15)
#define OLLTOUCAN_C2CTL_C2VCBCRSINGLE  ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x18)
#define OLLTOUCAN_C2CTL_C2INTERLACE    ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x19)
#define OLLTOUCAN_C2CTL_C2FIELDLENGTH  ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x1A)
#define OLLTOUCAN_C2CTL_C2FIELDPOL     ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x1B)
#define OLLTOUCAN_C2CTL_C2VIDRSTMOD    ((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x1C)
#define OLLTOUCAN_C2CTL_C2HPLOADEN     ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x1E)
#define OLLTOUCAN_C2CTL_C2VPLOADEN     ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x1F)

#define OLLTOUCAN_C2HPARAM                (0x3C14)
#define OLLTOUCAN_C2HPARAM_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2HSYNC              (0x3C18)
#define OLLTOUCAN_C2HSYNC_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2VPARAM                (0x3C1C)
#define OLLTOUCAN_C2VPARAM_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2VSYNC              (0x3C20)
#define OLLTOUCAN_C2VSYNC_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2PRELOAD               (0x3C24)
#define OLLTOUCAN_C2PRELOAD_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2STARTADD0                (0x3C28)
#define OLLTOUCAN_C2STARTADD0_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2STARTADD1                (0x3C2C)
#define OLLTOUCAN_C2STARTADD1_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2PL2STARTADD0                (0x3C30)
#define OLLTOUCAN_C2PL2STARTADD0_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2PL2STARTADD1                (0x3C34)
#define OLLTOUCAN_C2PL2STARTADD1_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2PL3STARTADD0                (0x3C38)
#define OLLTOUCAN_C2PL3STARTADD0_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2PL3STARTADD1                (0x3C3C)
#define OLLTOUCAN_C2PL3STARTADD1_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2OFFSET                (0x3C40)
#define OLLTOUCAN_C2OFFSET_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2MISC               0x3C44
#define OLLTOUCAN_C2MISC_ALL           ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_C2VCOUNT                0x3C48
#define OLLTOUCAN_C2VCOUNT_ALL            ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_C2DATACTL               0x3C4C
#define OLLTOUCAN_C2DATACTL_ALL           ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_C2SUBPICLUT                (0x3C50)
#define OLLTOUCAN_C2SUBPICLUT_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2SPICSTARTADD0               (0x3C54)
#define OLLTOUCAN_C2SPICSTARTADD0_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_C2SPICSTARTADD1               (0x3C58)
#define OLLTOUCAN_C2SPICSTARTADD1_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESA1ORG                (0x3D00)
#define OLLTOUCAN_BESA1ORG_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESA2ORG                (0x3D04)
#define OLLTOUCAN_BESA2ORG_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESB1ORG                (0x3D08)
#define OLLTOUCAN_BESB1ORG_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESB2ORG                (0x3D0C)
#define OLLTOUCAN_BESB2ORG_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESA1CORG               (0x3D10)
#define OLLTOUCAN_BESA1CORG_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESA2CORG               (0x3D14)
#define OLLTOUCAN_BESA2CORG_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESB1CORG               (0x3D18)
#define OLLTOUCAN_BESB1CORG_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESB2CORG               (0x3D1C)
#define OLLTOUCAN_BESB2CORG_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESCTL                  0x3D20
#define OLLTOUCAN_BESCTL_BESEN            ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )
#define OLLTOUCAN_BESCTL_BESV1SRCSTP      ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x6 )
#define OLLTOUCAN_BESCTL_BESV2SRCSTP      ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x7 )
#define OLLTOUCAN_BESCTL_BESHFEN          ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0xA )
#define OLLTOUCAN_BESCTL_BESVFEN          ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0xB )
#define OLLTOUCAN_BESCTL_BESHFIXC         ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0xC )
#define OLLTOUCAN_BESCTL_BESCUPS          ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x10 )
#define OLLTOUCAN_BESCTL_BES420PL         ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x11 )
#define OLLTOUCAN_BESCTL_BESDITH          ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x12 )
#define OLLTOUCAN_BESCTL_BESHMIR          ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x13 )
#define OLLTOUCAN_BESCTL_BESBWEN          ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x14 )
#define OLLTOUCAN_BESCTL_BESBLANK         ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x15 )
#define OLLTOUCAN_BESCTL_BESFSELM         ((0x1 << OLLTOUCAN_SHIFT_FIELD) | 0x18 )
#define OLLTOUCAN_BESCTL_BESFSEL          ((0x2 << OLLTOUCAN_SHIFT_FIELD) | 0x19 )
#define OLLTOUCAN_BESCTL_ALL              ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_BESPITCH                (0x3D24)
#define OLLTOUCAN_BESPITCH_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESHCOORD               (0x3D28)
#define OLLTOUCAN_BESHCOORD_BESRIGHT      (((0xB  << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_BESHCOORD_BESLEFT       (((0xB  << OLLTOUCAN_SHIFT_FIELD) | 0x10)  | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_BESHCOORD_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESVCOORD               (0x3D2C)
#define OLLTOUCAN_BESVCOORD_BESBOT        (((0xB  << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_BESVCOORD_BESTOP        (((0xB  << OLLTOUCAN_SHIFT_FIELD) | 0x10)  | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_BESVCOORD_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESHISCAL               (0x3D30)
#define OLLTOUCAN_BESHISCAL_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESVISCAL               (0x3D34)
#define OLLTOUCAN_BESVISCAL_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESHSRCST               (0x3D38)
#define OLLTOUCAN_BESHSRCST_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESHSRCEND              (0x3D3C)
#define OLLTOUCAN_BESHSRCEND_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESLUMACTL              (0x3D40)
#define OLLTOUCAN_BESLUMACTL_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESV1WGHT               (0x3D48)
#define OLLTOUCAN_BESV1WGHT_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESV2WGHT               (0x3D4C)
#define OLLTOUCAN_BESV2WGHT_ALL           (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESHSRCLST              (0x3D50)
#define OLLTOUCAN_BESHSRCLST_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESV1SRCLST                (0x3D54)
#define OLLTOUCAN_BESV1SRCLST_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESV2SRCLST                (0x3D58)
#define OLLTOUCAN_BESV2SRCLST_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESA1C3ORG              (0x3D60)
#define OLLTOUCAN_BESA1C3ORG_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESA2C3ORG              (0x3D64)
#define OLLTOUCAN_BESA2C3ORG_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESB1C3ORG              (0x3D68)
#define OLLTOUCAN_BESB1C3ORG_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESB2C3ORG              (0x3D6C)
#define OLLTOUCAN_BESB2C3ORG_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_BESGLOBCTL              0x3DC0
#define OLLTOUCAN_BESGLOBCTL_ALL             ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_BESSTATUS               (0x3DC4 | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_BESSTATUS_ALL           ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )

#define OLLTOUCAN_VINCTL0                  (0x3E00)
#define OLLTOUCAN_VINCTL0_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL0_VINCAP0          (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL0_VBICAP0          (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x1 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL0_VINPITCH0        (((0x09 << OLLTOUCAN_SHIFT_FIELD) | 0x3 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL0_RESERVED         (((0x14 << OLLTOUCAN_SHIFT_FIELD) | 0xC ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VINCTL1                 (0x3E04)
#define OLLTOUCAN_VINCTL1_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL1_VINCAP1         (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL1_VBICAP1         (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x1 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL1_VINPITCH1       (((0x09 << OLLTOUCAN_SHIFT_FIELD) | 0x3 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL1_RESERVED        (((0x14 << OLLTOUCAN_SHIFT_FIELD) | 0xC ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VBIADDR0                (0x3E08)
#define OLLTOUCAN_VBIADDR0_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0  ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBIADDR0_VBIADDR0       (((0x19 << OLLTOUCAN_SHIFT_FIELD) | 0x0  ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBIADDR0_RESERVED       (((0x07 << OLLTOUCAN_SHIFT_FIELD) | 0x19 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VBIADDR1                (0x3E0C)
#define OLLTOUCAN_VBIADDR1_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBIADDR1_VBIADDR1       (((0x19 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBIADDR1_RESERVED       (((0x07 << OLLTOUCAN_SHIFT_FIELD) | 0x19) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VINADDR0                (0x3E10)
#define OLLTOUCAN_VINADDR0_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINADDR0_VINADDR0       (((0x19 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINADDR0_RESERVED       (((0x07 << OLLTOUCAN_SHIFT_FIELD) | 0x19) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VINADDR1                (0x3E14)
#define OLLTOUCAN_VINADDR1_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINADDR1_VINADDR1       (((0x19 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINADDR1_RESERVED       (((0x07 << OLLTOUCAN_SHIFT_FIELD) | 0x19) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VBICOUNT                (0x3E18)
#define OLLTOUCAN_VBICOUNT_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBICOUNT_VINVBCNT0      (((0x06 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBICOUNT_RESERVED0      (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x6 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBICOUNT_VBICNT0        (((0x06 << OLLTOUCAN_SHIFT_FIELD) | 0x8 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBICOUNT_RESERVED1      (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0xE ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBICOUNT_VINVBCNT1      (((0x06 << OLLTOUCAN_SHIFT_FIELD) | 0x10 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBICOUNT_RESERVED2      (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x16 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBICOUNT_VBICNT1        (((0x06 << OLLTOUCAN_SHIFT_FIELD) | 0x18 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VBICOUNT_RESERVED3      (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x1E ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VINCTL                  (0x3E1C)
#define OLLTOUCAN_VINCTL_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x00 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINEN            (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x00 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_RESERVED0        (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x01 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINUYVYFMT       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x03 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VININTENF1       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x04 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VININTENF0       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x05 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINAUTOEN        (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x06 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINHDSEN         (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x07 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINFIMFIXEN      (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x08 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINGENFBINV      (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x09 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINHDTVEN        (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0a ) | OLLTOUCAN_WRITE_ONLY_MASK)    // RESERVED on G400
#define OLLTOUCAN_VINCTL_RESERVED1        (((0x05 << OLLTOUCAN_SHIFT_FIELD) | 0x0b ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VBITASKEN        (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x10 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VIN2XEN          (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x11 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINVDOE          (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x12 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINVDCLKOE       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x13 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VINC2GRABEN      (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x14 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VININTENTA       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x15 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VININTENTB       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x16 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_VININTTSEL       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x17 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_RPVALIDEN        (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x18 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL_RESERVED2        (((0x07 << OLLTOUCAN_SHIFT_FIELD) | 0x19 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VINADDR2                (0x3E20)
#define OLLTOUCAN_VINADDR2_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0  ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINADDR2_VINADDR2       (((0x19 << OLLTOUCAN_SHIFT_FIELD) | 0x0  ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINADDR2_RESERVED       (((0x07 << OLLTOUCAN_SHIFT_FIELD) | 0x19 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VINADDR3                (0x3E24)
#define OLLTOUCAN_VINADDR3_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0  ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINADDR3_VINADDR3       (((0x19 << OLLTOUCAN_SHIFT_FIELD) | 0x0  ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINADDR3_RESERVED       (((0x07 << OLLTOUCAN_SHIFT_FIELD) | 0x19 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VINCTL2                 (0x3E28)
#define OLLTOUCAN_VINCTL2_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL2_VINCAP2         (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL2_VBICAP2         (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x1 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_VINCTL2_VINPITCH2       (((0x09 << OLLTOUCAN_SHIFT_FIELD) | 0x3 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL2_RESERVED1       (((0x14 << OLLTOUCAN_SHIFT_FIELD) | 0xC ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VINCTL3                 (0x3E2C)
#define OLLTOUCAN_VINCTL3_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL3_VINCAP3         (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL3_VBICAP3         (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0x1 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_VINCTL3_VINPITCH3       (((0x09 << OLLTOUCAN_SHIFT_FIELD) | 0x3 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINCTL3_RESERVED1       (((0x14 << OLLTOUCAN_SHIFT_FIELD) | 0xC ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VSTATUS                 0x3E30
#define OLLTOUCAN_VSTATUS_ALL             ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )
#define OLLTOUCAN_VSTATUS_VINVSYNCPEN     ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )
#define OLLTOUCAN_VSTATUS_CMDCMPLPEN      ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x1 )  // RESERVED on G450
#define OLLTOUCAN_VSTATUS_BLVLPEN         ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x2 )  // RESERVED on G450
#define OLLTOUCAN_VSTATUS_DCMPEOIPEN      ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x3 )  // RESERVED on G450
#define OLLTOUCAN_VSTATUS_RESERVED0       ((0x04 << OLLTOUCAN_SHIFT_FIELD) | 0x4 )
#define OLLTOUCAN_VSTATUS_VINFIELDDETD    ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x8 )
#define OLLTOUCAN_VSTATUS_VINCAPD         ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x9 )
#define OLLTOUCAN_VSTATUS_RAWVBICAPD      ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0xA )
#define OLLTOUCAN_VSTATUS_SLCVBICAPD      ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0xB )
#define OLLTOUCAN_VSTATUS_CODECSTALLED    ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0xC )  // RESERVED on G450
#define OLLTOUCAN_VSTATUS_VINTASKDETD     ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0xD )
#define OLLTOUCAN_VSTATUS_VINGRABPTR      ((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0xE )
#define OLLTOUCAN_VSTATUS_RESERVED1       ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x10)

#define OLLTOUCAN_VICLEAR                  (0x3E34)
#define OLLTOUCAN_VICLEAR_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0  ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VICLEAR_VINVSYNCICLR     (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x00 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VICLEAR_CMDCMPLICLR      (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x01 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_VICLEAR_BLVLICLR         (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x02 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_VICLEAR_DCMPEOIICLR      (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x03 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_VICLEAR_RESERVED         (((0x1C << OLLTOUCAN_SHIFT_FIELD) | 0x04 ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_VIEN                     0x3E38
#define OLLTOUCAN_VIEN_ALL                 ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )
#define OLLTOUCAN_VIEN_VINVSYNCIEN         ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x00 )
#define OLLTOUCAN_VIEN_CMDCMPLIEN          ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x01 )  // RESERVED on G450
#define OLLTOUCAN_VIEN_BLVLIEN             ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x02 )  // RESERVED on G450
#define OLLTOUCAN_VIEN_DCMPEOIIEN          ((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x03 )  // RESERVED on G450
#define OLLTOUCAN_VIEN_RESERVED            ((0x1C << OLLTOUCAN_SHIFT_FIELD) | 0x04 )

#define OLLTOUCAN_VINHEIGHT                (0x3E3C)
#define OLLTOUCAN_VINHEIGHT_ALL            (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINHEIGHT_VINHEIGHT      (((0x0A << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)
#define OLLTOUCAN_VINHEIGHT_RESERVED       (((0x16 << OLLTOUCAN_SHIFT_FIELD) | 0xA ) | OLLTOUCAN_WRITE_ONLY_MASK)

#define OLLTOUCAN_CODECCTL                  (0x3E40)     // RESERVED on G450
#define OLLTOUCAN_CODECCTL_ALL              (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_BYTE0            (((0x8  << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_CODECEN          (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_CODECMODE        (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x1 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_CMDEXECTRIG      (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x2 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_CODECDATAIN      (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x3 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_VMIMODE          (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x4 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_STOPCODEC        (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x5 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_CODECTRANSEN     (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x6 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_PREFETCHEN       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x7 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_CODECFIFOADDR    (((0x04 << OLLTOUCAN_SHIFT_FIELD) | 0x8 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_CODECRWIDTH      (((0x02 << OLLTOUCAN_SHIFT_FIELD) | 0xC ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_RESERVED         (((0x0A << OLLTOUCAN_SHIFT_FIELD) | 0xE ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECCTL_MISCCTL          (((0x08 << OLLTOUCAN_SHIFT_FIELD) | 0x18) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450

#define OLLTOUCAN_CODECADDR                 (0x3E44)  // RESERVED on G450
#define OLLTOUCAN_CODECADDR_ALL             (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECADDR_CODECBUFSIZE    (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECADDR_RESERVED0       (((0x01 << OLLTOUCAN_SHIFT_FIELD) | 0x1 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECADDR_CODESTART       (((0x19 << OLLTOUCAN_SHIFT_FIELD) | 0x2 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECADDR_RESERVED1       (((0x07 << OLLTOUCAN_SHIFT_FIELD) | 0x19) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450

#define OLLTOUCAN_CODECHOSTPTR              (0x3E48)  // RESERVED on G450
#define OLLTOUCAN_CODECHOSTPTR_ALL          (((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECHOSTPTR_CODECHOSTPTR (((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x0 ) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450
#define OLLTOUCAN_CODECHOSTPTR_RESERVED     (((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x10) | OLLTOUCAN_WRITE_ONLY_MASK)  // RESERVED on G450

#define OLLTOUCAN_CODECHARDPTR               0x3E4C  // RESERVED on G450
#define OLLTOUCAN_CODECHARDPTR_ALL           ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  // RESERVED on G450
#define OLLTOUCAN_CODECHARDPTR_CODECHARDPTR  ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  // RESERVED on G450
#define OLLTOUCAN_CODECHARDPTR_RESERVED      ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x10)  // RESERVED on G450

#define OLLTOUCAN_CODECLCODE                 0x3E50  // RESERVED on G450
#define OLLTOUCAN_CODECLCODE_ALL             ((0x20 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  // RESERVED on G450
#define OLLTOUCAN_CODECLCODE_CODECLCODE      ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x0 )  // RESERVED on G450
#define OLLTOUCAN_CODECLCODE_RESERVED        ((0x10 << OLLTOUCAN_SHIFT_FIELD) | 0x10 )  // RESERVED on G450

//===========================================================================
//
//          Definition of registers for AD5302
//
//===========================================================================
#define OLLAD5302_MAX_NB_REGISTER      0x08L
#define OLLAD5302_SHIFT_WRITE_ONLY     0x10L
#define OLLAD5302_SHIFT_FIELD_SIZE     0x05L
#define OLLAD5302_FIELD_OFFSET_MASK    0x1FL
#define OLLAD5302_FIELD_SIZE_MASK      0x3FL
#define OLLAD5302_WRITE_ONLY           0x01L
#define OLLAD5302_WRITE_ONLY_MASK      (OLLAD5302_WRITE_ONLY << OLLAD5302_SHIFT_WRITE_ONLY)

#define OLLAD5302_DACA                0x0000L
#define OLLAD5302_DACA_ALL           ((0x08      << OLLAD5302_SHIFT_FIELD_SIZE) | 0x0 ) 

#define OLLAD5302_DACB                0x0001L
#define OLLAD5302_DACB_ALL           ((0x08      << OLLAD5302_SHIFT_FIELD_SIZE) | 0x0 ) 

#define OLLAD5302_DACC                0x0002L
#define OLLAD5302_DACC_ALL           ((0x08      << OLLAD5302_SHIFT_FIELD_SIZE) | 0x0 ) 

#define OLLAD5302_DACD                0x0003L
#define OLLAD5302_DACD_ALL           ((0x08      << OLLAD5302_SHIFT_FIELD_SIZE) | 0x0 ) 

#define OLLAD5302_DACE                0x0004L
#define OLLAD5302_DACE_ALL           ((0x08      << OLLAD5302_SHIFT_FIELD_SIZE) | 0x0 ) 

#define OLLAD5302_DACF                0x0005L
#define OLLAD5302_DACF_ALL           ((0x08      << OLLAD5302_SHIFT_FIELD_SIZE) | 0x0 ) 

#define OLLAD5302_DACG                0x0006L
#define OLLAD5302_DACG_ALL           ((0x08      << OLLAD5302_SHIFT_FIELD_SIZE) | 0x0 ) 

#define OLLAD5302_DACH                0x0007L
#define OLLAD5302_DACH_ALL           ((0x08      << OLLAD5302_SHIFT_FIELD_SIZE) | 0x0 ) 


//===========================================================================
//
//          Definition of registers for ENCODER (ADV7176)
//
//===========================================================================
#define OLLENCODER_SHIFT_WRITE_ONLY       0x10L
#define OLLENCODER_SHIFT_FIELD_SIZE       0x05L
#define OLLENCODER_WRITE_ONLY             0x01L
#define OLLENCODER_FIELD_OFFSET_MASK      0x1FL
#define OLLENCODER_FIELD_SIZE_MASK        0x3FL
#define OLLENCODER_MAX_NB_REGISTER        0x13L		
#define OLLENCODER_ALL                  ((0x08L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLENCODER_WRITE_ONLY_MASK        (OLLENCODER_WRITE_ONLY << OLLENCODER_SHIFT_WRITE_ONLY)
#define OLLENCODER_DEVICE_ID              0x54L

#define OLLENCODER_MR0                    0x00L
#define OLLENCODER_MR0_OUTVIDSEL        ((0x02L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLENCODER_MR0_PEDCTRL          ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLENCODER_MR0_FILSEL           ((0x02L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLENCODER_MR0_RGBSINC          ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLENCODER_MR0_OUTSEL           ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLENCODER_MR0_BIT0             ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLENCODER_MR0_ALL              ((0x08L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLENCODER_MR1                    0x01L
#define OLLENCODER_MR1_INTCTRL          ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLENCODER_MR1_CFIELDSEL        ((0x02L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLENCODER_MR1_RCDACCTRL        ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLENCODER_MR1_GLDACCTRL        ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLENCODER_MR1_BCDACCTRL        ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLENCODER_MR1_CDACCTRL         ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLENCODER_MR1_CBARCTRL         ((0x01L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLENCODER_MR1_ALL              ((0x08L     << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLENCODER_FSC                    0x02L
#define OLLENCODER_FSC_ALL              (((0x20L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_FSC0                   0x02L
#define OLLENCODER_FSC0_ALL             (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_FSC1                   0x03L
#define OLLENCODER_FSC1_ALL             (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_FSC2                   0x04L
#define OLLENCODER_FSC2_ALL             (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_FSC3                   0x05L
#define OLLENCODER_FSC3_ALL             (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_PSC3                   0x06L
#define OLLENCODER_PSC3_ALL             (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)


#define OLLENCODER_TR0                    0x07L
#define OLLENCODER_TR0_MSCTRL           ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLENCODER_TR0_TSEL             ((0x02L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLENCODER_TR0_BLACKINCTRL      ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLENCODER_TR0_LDELAY           ((0x02L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLENCODER_TR0_PPORTCTRL        ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLENCODER_TR0_TR07             ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLENCODER_TR0_ALL              ((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
                                                                                              
#define OLLENCODER_CED0                   0x08L
#define OLLENCODER_CED0_ALL	          (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_CED1                   0x09L
#define OLLENCODER_CED1_ALL             (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_CCD0                   0x0AL
#define OLLENCODER_CCD0_ALL             (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_CCD1                   0x0BL
#define OLLENCODER_CCD1_ALL             (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_TR1                    0x0CL
#define OLLENCODER_TR1_HSW              ((0x02L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLENCODER_TR1_HSFV             ((0x02L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLENCODER_TR1_HVSW             ((0x02L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLENCODER_TR1_HSP              ((0x02L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLENCODER_TR1_ALL              ((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLENCODER_MR2                    0x0DL
#define OLLENCODER_MR2_SPCTRL           ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLENCODER_MR2_GLSEL            ((0x02L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLENCODER_MR2_CCIRCTRL         ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLENCODER_MR2_CHRCTRL          ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLENCODER_MR2_BURSTCTRL        ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLENCODER_MR2_RGBCTRL          ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLENCODER_MR2_LP               ((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLENCODER_MR2_ALL              ((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLENCODER_NTSCCTRL0             0x0EL
#define OLLENCODER_NTSCCTRL0_ALL       (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_NTSCCTRL1             0x0FL
#define OLLENCODER_NTSCCTRL1_ALL       (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_NTSCCTRL2             0x10L
#define OLLENCODER_NTSCCTRL2_ALL       (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

#define OLLENCODER_NTSCCTRL3             0x11L
#define OLLENCODER_NTSCCTRL3_ALL       (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)
	
#define OLLENCODER_MR3                    0x12L
#define OLLENCODER_MR3_BIT0             (((0x07L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)
#define OLLENCODER_MR3_DACSW            (((0x01L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x07L) | OLLENCODER_WRITE_ONLY_MASK)
#define OLLENCODER_MR3_ALL              (((0x08L      << OLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | OLLENCODER_WRITE_ONLY_MASK)

//===========================================================================
//
//          Definition of registers for PIXELFORMATTER
//
//===========================================================================
// Type of FPGAs
#define FPGA_ORION_STD                          0x01        // Orion
#define FPGA_4SIGHT2_STD                        0x02        // Orion Low-cost 4SightII
#define FPGA_4SIGHT2_RGB                        0x03        // Orion RGB 4SightII
#define FPGA_4SIGHT2_DUAL                       0x04        // Orion Dual Stream 4SightII

#define OLLPIXFORMATTER_SHIFT_FIELD_SIZE        0x05L
#define OLLPIXFORMATTER_FIELD_OFFSET_MASK       0x1FL
#define OLLPIXFORMATTER_FIELD_SIZE_MASK         0x3FL
#define OLLPIXFORMATTER_MAX_NB_REGISTER         0x40L
#define OLLPIXFORMATTER_ALL                     ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_SHIFT_DOUBLE_BUFFERED   0x001D
#define OLLPIXFORMATTER_DOUBLE_BUFFERED         0x0001
#define OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK    (OLLPIXFORMATTER_DOUBLE_BUFFERED << OLLPIXFORMATTER_SHIFT_DOUBLE_BUFFERED)

#define OLLPIXFORMATTER_DIRECT_ADDR_OFFSET      0x07L     // Orion_4SightII registers are directly addressed, therefore the registers starts after the LUTs        

#define OLLPIXFORMATTER_STATUSREG               0x06L       // Orion STD
#define OLLPIXFORMATTER_STATUSREG_ALL          ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_OFFSETREG               0x07L       // Orion STD
#define OLLPIXFORMATTER_OFFSETREG_ALL          ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_LUTOFFSETREG            0x06L       // Orion 4SightII
#define OLLPIXFORMATTER_LUTOFFSETREG_ALL       ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)


// Indexed registers on Orion STD
#define OLLPIXFORMATTER_REVID(DevNb)            (DevNb ? 0x00L : 0x00L)    // 0x07L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_REVID_BUILT             ((0x05L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLPIXFORMATTER_REVID_REVID             ((0x03L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_REVID_ALL               OLLPIXFORMATTER_ALL
                                                         //21      
#define OLLPIXFORMATTER_CONFIG1(DevNb)          (DevNb ? 0x1FL : 0x01L)    // 0x08L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_CONFIG1_NTSCPAL         (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_CONFIG1_SQPCCIR         (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_CONFIG1_FSWHSYNC        (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L) )
#define OLLPIXFORMATTER_CONFIG1_VINMOD          (((0x02L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L) )
#define OLLPIXFORMATTER_CONFIG1_VOUTMOD         (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x05L) )
#define OLLPIXFORMATTER_CONFIG1_COLOR           (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x06L) )
#define OLLPIXFORMATTER_CONFIG1_MONOTYP         (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L) )
#define OLLPIXFORMATTER_CONFIG1_ALL             OLLPIXFORMATTER_ALL  

#define OLLPIXFORMATTER_CONFIG2(DevNb)          (DevNb ? 0x02L : 0x02L)    // 0x09L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_CONFIG2_RINSEL          (((0x02L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_CONFIG2_GINSEL          (((0x02L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L) )
#define OLLPIXFORMATTER_CONFIG2_BINSEL          (((0x02L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L) )
#define OLLPIXFORMATTER_CONFIG2_INSEL           (((0x06L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_CONFIG2_LUTSEL          (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x06L) )
#define OLLPIXFORMATTER_CONFIG2_CSCBYP          (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L) )
#define OLLPIXFORMATTER_CONFIG2_ALL             OLLPIXFORMATTER_ALL 
                                                
#define OLLPIXFORMATTER_CONFIG3(DevNb)          (DevNb ? 0x03L : 0x03L)    // 0x0AL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_CONFIG3_FPGABYP         (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_CONFIG3_VSSODD          (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_CONFIG3_DUMMYGRAB       (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_CONFIG3_CSCY2RBYP       (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_CONFIG3_RANGESEL        (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_CONFIG3_HVRST           (((0x02L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x05L))
#define OLLPIXFORMATTER_CONFIG3_ALL             OLLPIXFORMATTER_ALL | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK
                                                
                                                         //22      
#define OLLPIXFORMATTER_FGCTL1(DevNb)           (DevNb ? 0x20L : 0x04L)    // 0x0BL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_FGCTL1_VIDINSEL         (((0x05L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_FGCTL1_VIDINSEL1        (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_FGCTL1_VIDINSEL2        (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_FGCTL1_VIDINSEL3        (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_FGCTL1_VIDINSEL4        (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_FGCTL1_VIDINSEL5        (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)     // Only used for channel switch
#define OLLPIXFORMATTER_FGCTL1_SSINSEL          (((0x03L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x05L))     // Only used for channel switch
#define OLLPIXFORMATTER_FGCTL1_SSINSEL1         (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x05L))     // Only used for channel switch
#define OLLPIXFORMATTER_FGCTL1_SSINSEL2         (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x06L))     // Only used for channel switch
#define OLLPIXFORMATTER_FGCTL1_SSINSEL3         (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L))     // Only used for channel switch
#define OLLPIXFORMATTER_FGCTL1_GAINSEL          (((0x02L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L) )
#define OLLPIXFORMATTER_FGCTL1_FTRBYP           (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x06L) )
#define OLLPIXFORMATTER_FGCTL1_ADCDEC           (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L) )
#define OLLPIXFORMATTER_FGCTL1_ALL              OLLPIXFORMATTER_ALL
                                                
#define OLLPIXFORMATTER_FGCTL2(DevNb)           (DevNb ? 0x05L : 0x05L)    // 0x0CL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_FGCTL2_DACCLK           (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_FGCTL2_DACDATA          (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_FGCTL2_DACSEL           (((0x02L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)
#define OLLPIXFORMATTER_FGCTL2_ALL              (((0x08L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) | OLLPIXFORMATTER_DOUBLE_BUFFERED_MASK)

#define OLLPIXFORMATTER_USEROUT(DevNb)          (DevNb ? 0x06L : 0x06L)    // 0x0DL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_USEROUT_USEROUT1        ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_USEROUT_USEROUT2        ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLPIXFORMATTER_USEROUT_ALL             OLLPIXFORMATTER_ALL

#define OLLPIXFORMATTER_USERIN(DevNb)           (DevNb ? 0x07L : 0x07L)    // 0x0EL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_USERIN_USERIN1          ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_USERIN_USERIN2          ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLPIXFORMATTER_USERIN_TRIGGER          ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_USERIN_OPTOTGR          ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLPIXFORMATTER_USERIN_ALL              OLLPIXFORMATTER_ALL

                                                         //23      
#define OLLPIXFORMATTER_GBCTL(DevNb)            (DevNb ? 0x21L : 0x08L)    // 0x0FL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_GBCTL_GBMODE            ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_GBCTL_GBSTATE           ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLPIXFORMATTER_GBCTL_GBHALT            ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_GBCTL_GBSTARTMODE       ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLPIXFORMATTER_GBCTL_GBFIELDNUM        ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLPIXFORMATTER_GBCTL_GBGO              ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLPIXFORMATTER_GBCTL_ALL               OLLPIXFORMATTER_ALL
                                                
                                                         //24      
#define OLLPIXFORMATTER_TGRCTL(DevNb)           (DevNb ? 0x22L : 0x09L)    // 0x10L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_TGRCTL_TGRDETECT        ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_TGRCTL_TGRSRC           ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLPIXFORMATTER_TGRCTL_TGRHWMOD         ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_TGRCTL_TGRHWSRC         ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLPIXFORMATTER_TGRCTL_TGRSW            ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLPIXFORMATTER_TGRCTL_ALL              OLLPIXFORMATTER_ALL

                                                         //25      
#define OLLPIXFORMATTER_INTSTAT(DevNb)          (DevNb ? 0x0AL : 0x0AL)    // 0x11L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_INTSTAT_STATUS          ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_INTSTAT_ALL             OLLPIXFORMATTER_ALL

#define OLLPIXFORMATTER_INTMASK(DevNb)          (DevNb ? 0x0BL : 0x0BL)    // 0x12L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_INTMASK_MASK            ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_INTMASK_INTEXP          ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLPIXFORMATTER_INTMASK_ALL             OLLPIXFORMATTER_ALL

                                                         //26      
#define OLLPIXFORMATTER_INTOEN(DevNb)           (DevNb ? 0x0CL : 0x0CL)    // 0x13L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_INTOEN_INTEXP           ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLPIXFORMATTER_INTOEN_ENABLE           ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_INTOEN_ALL              OLLPIXFORMATTER_ALL

#define OLLPIXFORMATTER_PRODID(DevNb)           (DevNb ? 0x0DL : 0x0DL)    // 0x14L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_PRODID_BOARDREV         ((0x03L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_PRODID_PRODUCTNAME      ((0x03L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLPIXFORMATTER_PRODID_ALL              OLLPIXFORMATTER_ALL

// Orion 4Sight II
                                                         //27      
#define OLLPIXFORMATTER_AUTOI2CDATAW(DevNb)     (DevNb ? 0x23L : 0x0EL)   // 0x15L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CDATAW_ALL        ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //28      
#define OLLPIXFORMATTER_AUTOI2CDATAR(DevNb)     (DevNb ? 0x24L : 0x0FL)   // 0x16L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CDATAR_ALL        ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //29      
#define OLLPIXFORMATTER_AUTOI2CCTL(DevNb)       (DevNb ? 0x25L : 0x10L)   // 0x17L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CCTL_POLLEN       ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_AUTOI2CCTL_CANCEL       ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLPIXFORMATTER_AUTOI2CCTL_RESERVED     ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_AUTOI2CCTL_POLLINTEN    ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLPIXFORMATTER_AUTOI2CCTL_WRITEINTEN   ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLPIXFORMATTER_AUTOI2CCTL_READINTEN    ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLPIXFORMATTER_AUTOI2CCTL_ERRINTEN     ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLPIXFORMATTER_AUTOI2CCTL_ALL          ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //2A      
#define OLLPIXFORMATTER_AUTOI2CINDEX(DevNb)     (DevNb ? 0x26L : 0x11L)   // 0x18L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CINDEX_INDEX      ((0x07L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_AUTOI2CINDEX_RW         ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLPIXFORMATTER_AUTOI2CINDEX_ALL        ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //2B      
#define OLLPIXFORMATTER_AUTOI2CDEVID(DevNb)     (DevNb ? 0x27L : 0x12L)   // 0x19L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CDEVID_DEVID      ((0x07L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_AUTOI2CDEVID_RESERVED   ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLPIXFORMATTER_AUTOI2CDEVID_ALL        ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //2C      
#define OLLPIXFORMATTER_AUTOI2CEXPECVAL(DevNb)  (DevNb ? 0x28L : 0x13L)   // 0x1AL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CEXPECVAL_ALL     ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //2D      
#define OLLPIXFORMATTER_AUTOI2CEXPECMASK(DevNb) (DevNb ? 0x29L : 0x14L)   // 0x1BL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CEXPECMASK_ALL    ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //2E      
#define OLLPIXFORMATTER_AUTOI2CSTATUS(DevNb)    (DevNb ? 0x2AL : 0x15L)   // 0x1CL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CSTATUS_POLLING   ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_AUTOI2CSTATUS_READING   ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLPIXFORMATTER_AUTOI2CSTATUS_WRITING   ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_AUTOI2CSTATUS_BUSY      ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLPIXFORMATTER_AUTOI2CSTATUS_ERROR     ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLPIXFORMATTER_AUTOI2CSTATUS_RESERVED  ((0x03L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLPIXFORMATTER_AUTOI2CSTATUS_ALL       ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //2F
#define OLLPIXFORMATTER_AUTOI2CSTATEXP(DevNb)   (DevNb ? 0x16L : 0x16L)   // 0x1DL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_AUTOI2CSTATEXP_STATUS   ((0x06L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_AUTOI2CSTATEXP_RESERVED ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLPIXFORMATTER_AUTOI2CSTATEXP_ALL      ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //30      
#define OLLPIXFORMATTER_DECCTRL(DevNb)          (DevNb ? 0x2BL : 0x17L)   // 0x1DL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_DECCTRL_HIGHERREG       ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_DECCTRL_VBIEN           ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLPIXFORMATTER_DECCTRL_HLOCKRST        ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_DECCTRL_FPGABYP         ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLPIXFORMATTER_DECCTRL_CLIPLINE        ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLPIXFORMATTER_DECCTRL_FSWFIELD        ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLPIXFORMATTER_DECCTRL_FSWVALID        ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLPIXFORMATTER_DECCTRL_SIGPRES         ((0x01L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLPIXFORMATTER_DECCTRL_ALL             ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //31      
#define OLLPIXFORMATTER_HLOCKCOUNTER(DevNb)     (DevNb ? 0x2CL : 0x18L)   // 0x1DL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_HLOCKCOUNTER_ALL        ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_FSWHSYNCMIN(DevNb)      (DevNb ? 0x19L : 0x02L)   // 0x1EL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_FSWHSYNCMIN_ALL         ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_FSWHSYNCMAX(DevNb)      (DevNb ? 0x1AL : 0x03L)   // 0x1FL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_FSWHSYNCMAX_ALL         ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_HSTARTLOW(DevNb)        (DevNb ? 0x19L : 0x19L)   // 0x1EL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_HSTARTLOW_ALL           ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_HSTARTHIGH(DevNb)       (DevNb ? 0x1AL : 0x1AL)   // 0x1FL Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_HSTARTHIGH_HSTARTHIGH   ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_HSTARTHIGH_RESERVED     ((0x06L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_HSTARTHIGH_ALL          ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_HSTOPLOW(DevNb)         (DevNb ? 0x1BL : 0x1BL)   // 0x20L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_HSTOPLOW_ALL            ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_HSTOPHIGH(DevNb)        (DevNb ? 0x1CL : 0x1CL)   // 0x21L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_HSTOPHIGH_HSTOPHIGH     ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_HSTOPHIGH_RESERVED      ((0x06L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_HSTOPHIGH_ALL           ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_VSTARTLOW(DevNb)        (DevNb ? 0x1DL : 0x1DL)   // 0x22L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_VSTARTLOW_ALL           ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_VSTARTHIGH(DevNb)       (DevNb ? 0x1EL : 0x1EL)   // 0x23L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_VSTARTHIGH_VSTARTHIGH   ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_VSTARTHIGH_RESERVED     ((0x06L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_VSTARTHIGH_ALL          ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_VSTOPLOW(DevNb)         (DevNb ? 0x1FL : 0x1FL)   // 0x24L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_VSTOPLOW_ALL            ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLPIXFORMATTER_VSTOPHIGH(DevNb)        (DevNb ? 0x20L : 0x20L)   // 0x25L Need to add 0x07 to address for Orion_4SightII
#define OLLPIXFORMATTER_VSTOPHIGH_VSTOPHIGH     ((0x02L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLPIXFORMATTER_VSTOPHIGH_RESERVED      ((0x06L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLPIXFORMATTER_VSTOPHIGH_ALL           ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

                                                         //32      
#define OLLPIXFORMATTER_WRFIFOTHRES(DevNb)      (DevNb ? 0x2DL : 0x1BL)
#define OLLPIXFORMATTER_WRFIFOTHRES_THRES       (((0x03L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_WRFIFOTHRES_RESERVED    (((0x05L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x03L) )
#define OLLPIXFORMATTER_WRFIFOTHRES_ALL           OLLPIXFORMATTER_ALL  

                                                         //33      
#define OLLPIXFORMATTER_XFERTHRES(DevNb)        (DevNb ? 0x2EL : 0x1CL)
#define OLLPIXFORMATTER_XFERTHRES_THRES         (((0x07L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_XFERTHRES_WAITEND       (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x07L) )
#define OLLPIXFORMATTER_XFERTHRES_ALL            OLLPIXFORMATTER_ALL  

#define OLLPIXFORMATTER_GBOUTCTRL(DevNb)        (DevNb ? 0x1DL : 0x1DL) //1f
#define OLLPIXFORMATTER_GBOUTCTRL_OUTSEL        (((0x02L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_GBOUTCTRL_RESERVED      (((0x06L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x02L) )
#define OLLPIXFORMATTER_GBOUTCTRL_ALL            OLLPIXFORMATTER_ALL  

#define OLLPIXFORMATTER_RDFIFOTHRES(DevNb)      (DevNb ? 0x1EL : 0x1EL) //20
#define OLLPIXFORMATTER_RDFIFOTHRES_THRES       (((0x04L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_RDFIFOTHRES_RESERVED    (((0x04L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x04L) )
#define OLLPIXFORMATTER_RDFIFOTHRES_ALL          OLLPIXFORMATTER_ALL  

#define OLLPIXFORMATTER_MEMADDRESS(DevNb)      (DevNb ? 0x30L : 0x30L)
#define OLLPIXFORMATTER_MEMADDRESS_ADDRESS     (((0x12L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_MEMADDRESS_MEMACCESS   (((0x01L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x12L) )
#define OLLPIXFORMATTER_MEMADDRESS_ALL         (((0x20L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )  

#define OLLPIXFORMATTER_MEMDATA(DevNb)         (DevNb ? 0x31L : 0x31L)
#define OLLPIXFORMATTER_MEMDATA_DATA           (((0x20L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_MEMDATA_ALL            (((0x20L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )   

#define OLLPIXFORMATTER_NEWINTSTAT(DevNb)      (DevNb ? 0x32L : 0x32L)
#define OLLPIXFORMATTER_NEWINTSTAT_STATUS      (((0x20L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_NEWINTSTAT_ALL         (((0x20L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )   

#define OLLPIXFORMATTER_NEWINTOEN(DevNb)         (DevNb ? 0x33L : 0x33L)
#define OLLPIXFORMATTER_NEWINTOEN_GRABDEV0    (((0xCL << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_NEWINTOEN_GRABDEV1    (((0xCL << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x0CL) )
#define OLLPIXFORMATTER_NEWINTOEN_I2CDEV0     (((0x4L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x18L) )
#define OLLPIXFORMATTER_NEWITNOEN_POLLDEV0    (((0x1L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x18L) )
#define OLLPIXFORMATTER_NEWINTOEN_I2CDEV1     (((0x4L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x1CL) )
#define OLLPIXFORMATTER_NEWITNOEN_POLLDEV1    (((0x1L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x1CL) )

#define OLLPIXFORMATTER_FSWINTSTAT(DevNb)      (DevNb ? 0x34L : 0x34L)
#define OLLPIXFORMATTER_FSWINTSTAT_STATUS      (((0x10L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_FSWINTSTAT_ALL         (((0x20L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )   

#define OLLPIXFORMATTER_FSWINTOEN(DevNb)         (DevNb ? 0x35L : 0x35L)
#define OLLPIXFORMATTER_FSWINTOEN_FSWDEV0      (((0x8L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )
#define OLLPIXFORMATTER_FSWINTOEN_FSWDEV1      (((0x8L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x08L) )
#define OLLPIXFORMATTER_FSWITNOEN_RESERVED     (((0x10L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x10L) )
#define OLLPIXFORMATTER_FSWINTOEN_ALL          (((0x20L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x0L) )

#define OLLPIXFORMATTER_XFERINTSTAT(DevNb)      (DevNb ? 0x23L : 0x23L)
#define OLLPIXFORMATTER_XFERINTSTAT_ALL          OLLPIXFORMATTER_ALL  

#define OLLPIXFORMATTER_XFERINTOE(DevNb)        (DevNb ? 0x24L : 0x24L)
#define OLLPIXFORMATTER_XFERINTOE_ALL            OLLPIXFORMATTER_ALL  

#define OLLPIXFORMATTER_NEWINTOEN_ALL         (((0x20L << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L) )   

//===========================================================================
//
//          Definition of registers for LUT  (Registers are in PIXFORMATTER)
//
//===========================================================================
#define OLLLUT_LUTDATARED1                       0x00L
#define OLLLUT_LUTDATARED1_ALL                  ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLLUT_LUTDATAGREEN1                     0x01L
#define OLLLUT_LUTDATAGREEN1_ALL                ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLLUT_LUTDATABLUE1                      0x02L
#define OLLLUT_LUTDATABLUE1_ALL                 ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLLUT_LUTDATARED2                       0x03L
#define OLLLUT_LUTDATARED2_ALL                  ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLLUT_LUTDATAGREEN2                     0x04L
#define OLLLUT_LUTDATAGREEN2_ALL                ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLLUT_LUTDATABLUE2                      0x05L
#define OLLLUT_LUTDATABLUE2_ALL                 ((0x08L  << OLLPIXFORMATTER_SHIFT_FIELD_SIZE) | 0x00L)


//===========================================================================
//
//          Definition of registers for BIOS
//
//===========================================================================
#define OLLBIOS_SHIFT_FIELD_SIZE        0x05L
#define OLLBIOS_FIELD_OFFSET_MASK       0x1FL
#define OLLBIOS_FIELD_SIZE_MASK         0x3FL
#define OLLBIOS_MAX_NB_REGISTER         0x14L
#define OLLBIOS_ALL                    ((0x10L           << OLLBIOS_SHIFT_FIELD_SIZE) | 0x00L)

// See DOC : MGA Product information structure (PinS) release 0.6
#define OLLBIOS_PCBINFO                0x22         
#define OLLBIOS_PCBINFO_ALL            ((0x10L           << OLLBIOS_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLBIOS_BIOSREV                0x4         
#define OLLBIOS_BIOSREV_ALL            ((0x10L           << OLLBIOS_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLBIOS_SUBSYSTEMID            0xfffa       
#define OLLBIOS_SUBSYSTEMID_ALL        ((0x10L           << OLLBIOS_SHIFT_FIELD_SIZE) | 0x00L)


//===========================================================================
//
//          Definition of registers for Advance Video Decoder (ADV7185)
//
//===========================================================================
#define OLLADV7185_DEVICE_ID                0x44L  // Slave address of ADV7185
#define OLLADV7185_SHIFT_FIELD_SIZE         0x05L
#define OLLADV7185_FIELD_OFFSET_MASK        0x1FL
#define OLLADV7185_FIELD_SIZE_MASK          0x3FL
#define OLLADV7185_MAX_NB_REGISTER          0xFFL

#define OLLADV7185_WRITE_REGISTER_MASK      0x3FL  // Used in auto I2C protocol when specifing the ADV7185 index, the MSB is R/W!
#define OLLADV7185_READ_REGISTER_MASK       0x80L  // Used in auto I2C protocol when specifing the ADV7185 index, the MSB is R/W!
#define OLLADV7185_HIGHER_REGISTER_MASK     0x80L

#define OLLADV7185_INPUTCTL                 0x00L
#define OLLADV7185_INPUTCTL_INSEL         ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_INPUTCTL_INSEL0        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_INPUTCTL_INSEL1        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_INPUTCTL_INSEL2        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_INPUTCTL_INSEL3        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_INPUTCTL_VIDSEL        ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_INPUTCTL_VIDSEL0       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_INPUTCTL_VIDSEL1       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_INPUTCTL_VIDSEL2       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_INPUTCTL_VIDSEL3       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_INPUTCTL_ALL           ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_VIDEOSEL                 0x01L
#define OLLADV7185_VIDEOSEL_VIDQUAL       ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_VIDEOSEL_VIDQUAL0      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_VIDEOSEL_VIDQUAL1      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_VIDEOSEL_SQPE          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_VIDEOSEL_DIFFIN        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_VIDEOSEL_4FSC          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_VIDEOSEL_BETACAM       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_VIDEOSEL_RESERVED      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_VIDEOSEL_ASE           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_VIDEOSEL_ALL           ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_VIDEOENCTL               0x02L
#define OLLADV7185_VIDEOENCTL_YPM         ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_VIDEOENCTL_YPM0        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_VIDEOENCTL_YPM1        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_VIDEOENCTL_YMP2        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_VIDEOENCTL_COR         ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_VIDEOENCTL_COR0        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_VIDEOENCTL_COR1        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_VIDEOENCTL_RESERVED    ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_VIDEOENCTL_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_OUTPUTCTL                0x03L
#define OLLADV7185_OUTPUTCTL_OMSEL        ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_OUTPUTCTL_OMSEL0       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_OUTPUTCTL_OMSEL1       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_OUTPUTCTL_OFSEL        ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_OUTPUTCTL_OFSEL0       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_OUTPUTCTL_OFSEL1       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_OUTPUTCTL_OFSEL2       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_OUTPUTCTL_OFSEL3       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_OUTPUTCTL_TOD          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_OUTPUTCTL_VBIEN        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_OUTPUTCTL_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_EXTOUTCTL                0x04L
#define OLLADV7185_EXTOUTCTL_RANGE        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_EXTOUTCTL_RESERVED     ((0x06L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_EXTOUTCTL_BT656        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_EXTOUTCTL_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_GENPURPOUT               0x05L
#define OLLADV7185_GENPURPOUT_GPO         ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_GENPURPOUT_GPO0        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_GENPURPOUT_GPO1        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_GENPURPOUT_GPO2        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_GENPURPOUT_GPO3        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_GENPURPOUT_GPEL        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_GENPURPOUT_GPEH        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_GENPURPOUT_BLCVBI      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_GENPURPOUT_HLEN        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_GENPURPOUT_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//      OLLADV7185                          0x06L         RESERVED

#define OLLADV7185_FIFOCTL                  0x07L
#define OLLADV7185_FIFOCTL_FFM            ((0x05L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_FIFOCTL_FFM0           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_FIFOCTL_FFM1           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_FIFOCTL_FFM2           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_FIFOCTL_FFM3           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_FIFOCTL_FFM4           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_FIFOCTL_FR             ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_FIFOCTL_AFR            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_FIFOCTL_FFST           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_FIFOCTL_ALL            ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_CONTCTL                  0x08L
#define OLLADV7185_CONTCTL_CON            ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_CONTCTL_CON0           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_CONTCTL_CON1           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_CONTCTL_CON2           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_CONTCTL_CON3           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_CONTCTL_CON4           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_CONTCTL_CON5           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_CONTCTL_CON6           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_CONTCTL_CON7           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_CONTCTL_ALL            ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_SATCTL                  0x09L
#define OLLADV7185_SATCTL_SAT             ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_SATCTL_SAT0            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_SATCTL_SAT1            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_SATCTL_SAT2            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_SATCTL_SAT3            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_SATCTL_SAT4            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_SATCTL_SAT5            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_SATCTL_SAT6            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_SATCTL_SAT7            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_SATCTL_ALL             ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_BRIGHTCTL                0x0AL
#define OLLADV7185_BRIGHTCTL_BRI          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_BRIGHTCTL_BRI0         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_BRIGHTCTL_BRI1         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_BRIGHTCTL_BRI2         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_BRIGHTCTL_BRI3         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_BRIGHTCTL_BRI4         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_BRIGHTCTL_BRI5         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_BRIGHTCTL_BRI6         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_BRIGHTCTL_BRI7         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_BRIGHTCTL_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_HUECTL                  0x0BL
#define OLLADV7185_HUECTL_HUE             ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HUECTL_HUE0            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HUECTL_HUE1            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_HUECTL_HUE2            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_HUECTL_HUE3            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_HUECTL_HUE4            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_HUECTL_HUE5            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_HUECTL_HUE6            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_HUECTL_HUE7            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_HUECTL_ALL             ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_DEFVALY                  0x0CL
#define OLLADV7185_DEFVALY_DEFVALEN       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_DEFVALY_DEFAUTOEN      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_DEFVALY_DEFY           ((0x06L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_DEFVALY_DEFY0          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_DEFVALY_DEFY1          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_DEFVALY_DEFY2          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_DEFVALY_DEFY3          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_DEFVALY_DEFY4          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_DEFVALY_DEFY5          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_DEFVALY_ALL            ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_DEFVALC                  0x0DL
#define OLLADV7185_DEFVALC_DEFC           ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_DEFVALC_DEFC0          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_DEFVALC_DEFC1          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_DEFVALC_DEFC2          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_DEFVALC_DEFC3          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_DEFVALC_DEFC4          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_DEFVALC_DEFC5          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_DEFVALC_DEFC6          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_DEFVALC_DEFC7          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_DEFVALC_ALL            ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_TEMPDEC                  0x0EL
#define OLLADV7185_TEMPDEC_TDE            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_TEMPDEC_TDC            ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_TEMPDEC_TDC0           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_TEMPDEC_TDC1           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_TEMPDEC_TDR            ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_TEMPDEC_TDR0           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_TEMPDEC_TDR1           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_TEMPDEC_TDR2           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_TEMPDEC_TDR3           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_TEMPDEC_RESERVED       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_TEMPDEC_ALL            ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_POWERMAN                 0x0FL
#define OLLADV7185_POWERMAN_PSC           ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_POWERMAN_PSC0          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_POWERMAN_PSC1          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_POWERMAN_PDBP          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_POWERMAN_PSREF         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_POWERMAN_PSCG          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_POWERMAN_PWRDN         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_POWERMAN_TRAQ          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_POWERMAN_RES           ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_POWERMAN_ALL           ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_STATUSREG                0x10L
#define OLLADV7185_STATUSREG_STATUS       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_STATUSREG_STATUS0      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_STATUSREG_STATUS1      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_STATUSREG_STATUS2      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_STATUSREG_STATUS3      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_STATUSREG_STATUS4      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_STATUSREG_STATUS5      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_STATUSREG_STATUS6      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_STATUSREG_STATUS7      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_STATUSREG_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_INFOREG                  0x11L
#define OLLADV7185_INFOREG_IDENT          ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_INFOREG_IDENT0         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_INFOREG_IDENT1         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_INFOREG_IDENT2         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_INFOREG_IDENT3         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_INFOREG_IDENT4         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_INFOREG_IDENT5         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_INFOREG_IDENT6         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_INFOREG_IDENT7         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_INFOREG_ALL            ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//      OLLADV7185                          0x12L         RESERVED
//      OLLADV7185                          0x13L         RESERVED
#define OLLADV7185_EXTOUTPUTCTL                0x13L
#define OLLADV7185_EXTOUTPUTCTL_RESERVED1    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_EXTOUTPUTCTL_NOTRICTLSIG  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_EXTOUTPUTCTL_RESERVED2    ((0x06L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_EXTOUTPUTCTL_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_ANACLCTL                 0x14L
#define OLLADV7185_ANACLCTL_FICL          ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ANACLCTL_FICL0         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ANACLCTL_FICL1         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_ANACLCTL_FACL          ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_ANACLCTL_FACL0         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_ANACLCTL_FACL1         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_ANACLCTL_CCLEN         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_ANACLCTL_VCLEN         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_ANACLCTL_RESERVED      ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_ANACLCTL_ALL           ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_DIGCLCTL1                0x15L
#define OLLADV7185_DIGCLCTL1_DCCO         ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_DIGCLCTL1_DCCO8        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_DIGCLCTL1_DCCO9        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_DIGCLCTL1_DCCO10       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_DIGCLCTL1_DCCO11       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_DIGCLCTL1_DCFE         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_DIGCLCTL1_DCT          ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_DIGCLCTL1_DCT0         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_DIGCLCTL1_DCT1         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_DIGCLCTL1_DCCM         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_DIGCLCTL1_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_DIGCLCTL2                0x16L
#define OLLADV7185_DIGCLCTL2_DDCO         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_DIGCLCTL2_DDCO0        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_DIGCLCTL2_DDCO1        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_DIGCLCTL2_DDCO2        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_DIGCLCTL2_DDCO3        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_DIGCLCTL2_DDCO4        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_DIGCLCTL2_DDCO5        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_DIGCLCTL2_DDCO6        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_DIGCLCTL2_DDCO7        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_DIGCLCTL2_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_SHAPFILCTL               0x17L
#define OLLADV7185_SHAPFILCTL_YSFM        ((0x05L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_SHAPFILCTL_YSFM0       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_SHAPFILCTL_YSFM1       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_SHAPFILCTL_YSFM2       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_SHAPFILCTL_YSFM3       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_SHAPFILCTL_YSFM4       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_SHAPFILCTL_CSFM        ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_SHAPFILCTL_CSFM0       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_SHAPFILCTL_CSFM1       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_SHAPFILCTL_CSFM2       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_SHAPFILCTL_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//      OLLADV7185                          0x18L         RESERVED

/*
#define OLLADV7185_COMBFILCTL               0x19L
#define OLLADV7185_COMBFILCTL_LCM         ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COMBFILCTL_LCM0        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COMBFILCTL_LCM1        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_COMBFILCTL_CCM         ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_COMBFILCTL_CCM0        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_COMBFILCTL_CCM1        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_COMBFILCTL_CCMBAD      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_COMBFILCTL_RESERVED    ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_COMBFILCTL_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
*/

#define OLLADV7185_MISCCTL                  0x19L
#define OLLADV7185_MISCCTL_RESERVED       ((0x07L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MISCCTL_MVE            ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MISCCTL_ALL            ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//!!!!!! TO BE VERIFIED !!!!!!
#define OLLADV7185_SCACROMSB                0x1AL      
#define OLLADV7185_SCACROMSB_SCE          ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_SCACROMSB_RESERVED     ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_SCACROMSB_AVDP         ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_SCACROMSB_AVDP8        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_SCACROMSB_AVDP9        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_SCACROMSB_AVHB9        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_SCACROMSB_AVVB8        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_SCACROMSB_AVDL8        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_SCACROMSB_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//!!!!!! TO BE VERIFIED !!!!!!
#define OLLADV7185_ACTVIDDESLINES           0x1BL
#define OLLADV7185_ACTVIDDESLINES_AVDL    ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ACTVIDDESLINES_AVDL0   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ACTVIDDESLINES_AVDL1   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_ACTVIDDESLINES_AVDL2   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_ACTVIDDESLINES_AVDL3   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_ACTVIDDESLINES_AVDL4   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_ACTVIDDESLINES_AVDL5   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_ACTVIDDESLINES_AVDL6   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_ACTVIDDESLINES_AVDL7   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_ACTVIDDESLINES_ALL     ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//!!!!!! TO BE VERIFIED !!!!!!
#define OLLADV7185_ACTVIDVERTBEG            0x1CL
#define OLLADV7185_ACTVIDVERTBEG_AVVB     ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ACTVIDVERTBEG_AVVB0    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ACTVIDVERTBEG_AVVB1    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_ACTVIDVERTBEG_AVVB2    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_ACTVIDVERTBEG_AVVB3    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_ACTVIDVERTBEG_AVVB4    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_ACTVIDVERTBEG_AVVB5    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_ACTVIDVERTBEG_AVVB6    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_ACTVIDVERTBEG_AVVB7    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_ACTVIDVERTBEG_ALL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_VERTSCALEVAL1            0x1DL
#define OLLADV7185_VERTSCALEVAL1_VSCV     ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_VERTSCALEVAL1_VSCV8    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_VERTSCALEVAL1_VSCV9    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_VERTSCALEVAL1_VSCV10   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_VERTSCALEVAL1_RESERVED ((0x05L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_VERTSCALEVAL1_ALL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_VERTSCALEVAL2            0x1EL
#define OLLADV7185_VERTSCALEVAL2_VSCV     ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_VERTSCALEVAL2_VSCV0    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_VERTSCALEVAL2_VSCV1    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_VERTSCALEVAL2_VSCV2    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_VERTSCALEVAL2_VSCV3    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_VERTSCALEVAL2_VSCV4    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_VERTSCALEVAL2_VSCV5    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_VERTSCALEVAL2_VSCV6    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_VERTSCALEVAL2_VSCV7    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_VERTSCALEVAL2_ALL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//!!!!!! TO BE VERIFIED !!!!!!
#define OLLADV7185_ACTVIDHORBEG             0x1FL
#define OLLADV7185_ACTVIDHORBEG_AVHB      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ACTVIDHORBEG_AVHB1     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ACTVIDHORBEG_AVHB2     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_ACTVIDHORBEG_AVHB3     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_ACTVIDHORBEG_AVHB4     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_ACTVIDHORBEG_AVHB5     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_ACTVIDHORBEG_AVHB6     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_ACTVIDHORBEG_AVHB7     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_ACTVIDHORBEG_AVHB8     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_ACTVIDHORBEG_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_ACTVIDDESPIX             0x20L
#define OLLADV7185_ACTVIDDESPIX_AVDP      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ACTVIDDESPIX_AVDP0     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_ACTVIDDESPIX_AVDP1     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_ACTVIDDESPIX_AVDP2     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_ACTVIDDESPIX_AVDP3     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_ACTVIDDESPIX_AVDP4     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_ACTVIDDESPIX_AVDP5     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_ACTVIDDESPIX_AVDP6     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_ACTVIDDESPIX_AVDP7     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_ACTVIDDESPIX_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_HORSCALEVAL1             0x21L
#define OLLADV7185_HORSCALEVAL1_HSCV      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HORSCALEVAL1_HSCV8     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HORSCALEVAL1_HSCV9     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_HORSCALEVAL1_HSCV10    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_HORSCALEVAL1_HSCV11    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_HORSCALEVAL1_HSCV12    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_HORSCALEVAL1_HSCV13    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_HORSCALEVAL1_HSCV14    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_HORSCALEVAL1_HSCV15    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_HORSCALEVAL1_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_HORSCALEVAL2            0x22L
#define OLLADV7185_HORSCALEVAL2_HSCV      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HORSCALEVAL2_HSCV0     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HORSCALEVAL2_HSCV1     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_HORSCALEVAL2_HSCV2     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_HORSCALEVAL2_HSCV3     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_HORSCALEVAL2_HSCV4     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_HORSCALEVAL2_HSCV5     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_HORSCALEVAL2_HSCV6     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_HORSCALEVAL2_HSCV7     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_HORSCALEVAL2_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_COLSUBCARCTL1            0x23L
#define OLLADV7185_COLSUBCARCTL1_CSMF     ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COLSUBCARCTL1_CSMF24   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COLSUBCARCTL1_CSMF25   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_COLSUBCARCTL1_CSMF26   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_COLSUBCARCTL1_CSMF27   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_COLSUBCARCTL1_CSM      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_COLSUBCARCTL1_RESERVED ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_COLSUBCARCTL1_ALL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)


#define OLLADV7185_COLSUBCARCTL2            0x24L
#define OLLADV7185_COLSUBCARCTL2_CSMF     ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COLSUBCARCTL2_CSMF16   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COLSUBCARCTL2_CSMF17   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_COLSUBCARCTL2_CSMF18   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_COLSUBCARCTL2_CSMF19   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_COLSUBCARCTL2_CSMF20   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_COLSUBCARCTL2_CSMF21   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_COLSUBCARCTL2_CSMF22   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_COLSUBCARCTL2_CSMF23   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_COLSUBCARCTL2_ALL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_COLSUBCARCTL3            0x25L
#define OLLADV7185_COLSUBCARCTL3_CSMF     ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COLSUBCARCTL3_CSMF8    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COLSUBCARCTL3_CSMF9    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_COLSUBCARCTL3_CSMF10   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_COLSUBCARCTL3_CSMF11   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_COLSUBCARCTL3_CSMF12   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_COLSUBCARCTL3_CSMF13   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_COLSUBCARCTL3_CSMF14   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_COLSUBCARCTL3_CSMF15   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_COLSUBCARCTL3_ALL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_COLSUBCARCTL4            0x26L
#define OLLADV7185_COLSUBCARCTL4_CSMF     ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COLSUBCARCTL4_CSMF0    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_COLSUBCARCTL4_CSMF1    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_COLSUBCARCTL4_CSMF2    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_COLSUBCARCTL4_CSMF3    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_COLSUBCARCTL4_CSMF4    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_COLSUBCARCTL4_CSMF5    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_COLSUBCARCTL4_CSMF6    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_COLSUBCARCTL4_CSMF7    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_COLSUBCARCTL4_ALL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_PIXDELAYCTL              0x27L
#define OLLADV7185_PIXDELAYCTL_RESERVED   ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_PIXDELAYCTL_CTA        ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_PIXDELAYCTL_CTA0       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_PIXDELAYCTL_CTA1       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_PIXDELAYCTL_CTA2       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_PIXDELAYCTL_RESERVED2  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_PIXDELAYCTL_SWPC       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_PIXDELAYCTL_ALL        ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_MANCLKCTL1               0x28L
#define OLLADV7185_MANCLKCTL1_CLKVAL      ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANCLKCTL1_CLKVAL16    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANCLKCTL1_CLKVAL17    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_MANCLKCTL1_RESERVED    ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MANCLKCTL1_CLKMANE     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_MANCLKCTL1_FIX27E      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MANCLKCTL1_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_MANCLKCTL2               0x29L
#define OLLADV7185_MANCLKCTL2_CLKVAL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANCLKCTL2_CLKVAL8     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANCLKCTL2_CLKVAL9     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_MANCLKCTL2_CLKVAL10    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MANCLKCTL2_CLKVAL11    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_MANCLKCTL2_CLKVAL12    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_MANCLKCTL2_CLKVAL13    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_MANCLKCTL2_CLKVAL14    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_MANCLKCTL2_CLKVAL15    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MANCLKCTL2_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_MANCLKCTL3               0x2AL
#define OLLADV7185_MANCLKCTL3_CLKVAL      ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANCLKCTL3_CLKVAL0     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANCLKCTL3_CLKVAL1     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_MANCLKCTL3_CLKVAL2     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MANCLKCTL3_CLKVAL3     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_MANCLKCTL3_CLKVAL4     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_MANCLKCTL3_CLKVAL5     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_MANCLKCTL3_CLKVAL6     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_MANCLKCTL3_CLKVAL7     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MANCLKCTL3_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//      OLLADV7185                          0x2BL         RESERVED
#define OLLADV7185_AUTOCLKCTL               0x2BL
#define OLLADV7185_AUTOCLKCTL_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_AGCMODECTL               0x2CL
#define OLLADV7185_AGCMODECTL_CAGC        ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_AGCMODECTL_CAGC0       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_AGCMODECTL_CAGC1       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_AGCMODECTL_RESERVED    ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_AGCMODECTL_LAGC        ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_AGCMODECTL_LAGC0       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_AGCMODECTL_LAGC1       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_AGCMODECTL_LAGC2       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_AGCMODECTL_RESERVED2   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_AGCMODECTL_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_CHROGAINCTL1            0x2DL
#define OLLADV7185_CHROGAINCTL1_CMG       ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_CHROGAINCTL1_CMG8      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_CHROGAINCTL1_CMG9      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_CHROGAINCTL1_CMG10     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_CHROGAINCTL1_CMG11     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_CHROGAINCTL1_RESERVED  ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_CHROGAINCTL1_CAGT      ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_CHROGAINCTL1_CAGT0     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_CHROGAINCTL1_CAGT1     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_CHROGAINCTL1_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_CHROGAINCTL2             0x2EL
#define OLLADV7185_CHROGAINCTL2_CMG       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_CHROGAINCTL2_CMG0      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_CHROGAINCTL2_CMG1      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_CHROGAINCTL2_CMG2      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_CHROGAINCTL2_CMG3      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_CHROGAINCTL2_CMG4      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_CHROGAINCTL2_CMG5      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_CHROGAINCTL2_CMG6      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_CHROGAINCTL2_CMG7      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_CHROGAINCTL2_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_LUMAGAINCTL1            0x2FL
#define OLLADV7185_LUMAGAINCTL1_LMG       ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_LUMAGAINCTL1_LMG8      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_LUMAGAINCTL1_LMG9      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_LUMAGAINCTL1_LMG10     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_LUMAGAINCTL1_LMG11     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_LUMAGAINCTL1_RESERVED  ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_LUMAGAINCTL1_LAGT      ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_LUMAGAINCTL1_LAGT0     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_LUMAGAINCTL1_LAGT1     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_LUMAGAINCTL1_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_LUMAGAINCTL2             0x30L
#define OLLADV7185_LUMAGAINCTL2_LMG       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_LUMAGAINCTL2_LMG0      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_LUMAGAINCTL2_LMG1      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_LUMAGAINCTL2_LMG2      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_LUMAGAINCTL2_LMG3      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_LUMAGAINCTL2_LMG4      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_LUMAGAINCTL2_LMG5      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_LUMAGAINCTL2_LMG6      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_LUMAGAINCTL2_LMG7      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_LUMAGAINCTL2_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_MANGAINSHADCTL1          0x31L
#define OLLADV7185_MANGAINSHADCTL1_LMGS   ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANGAINSHADCTL1_LMGS8  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANGAINSHADCTL1_LMGS9  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_MANGAINSHADCTL1_LMGS10 ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MANGAINSHADCTL1_LMGS11 ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_MANGAINSHADCTL1_RESERVED  ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_MANGAINSHADCTL1_SGUE   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MANGAINSHADCTL1_ALL    ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_MANGAINSHADCTL2          0x32L
#define OLLADV7185_MANGAINSHADCTL2_LMGS   ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANGAINSHADCTL2_LMGS0  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANGAINSHADCTL2_LMGS1  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_MANGAINSHADCTL2_LMGS2  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MANGAINSHADCTL2_LMGS3  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_MANGAINSHADCTL2_LMGS4  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_MANGAINSHADCTL2_LMGS5  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_MANGAINSHADCTL2_LMGS6  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_MANGAINSHADCTL2_LMGS7  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MANGAINSHADCTL2_ALL    ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_MISCGAINCTL              0x33L
#define OLLADV7185_MISCGAINCTL_PWUPD      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MISCGAINCTL_AVAL       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_MISCGAINCTL_MIRE       ((0x03L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MISCGAINCTL_MIRE0      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MISCGAINCTL_MIRE1      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_MISCGAINCTL_MIRE2      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_MISCGAINCTL_RESERVED   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_MISCGAINCTL_CKE        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_MISCGAINCTL_RESERVED2  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MISCGAINCTL_ALL        ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_HSYNCPOSCTL1             0x34L
#define OLLADV7185_HSYNCPOSCTL1_RESERVED  ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HSYNCPOSCTL1_HSE       ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_HSYNCPOSCTL1_HSE8      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_HSYNCPOSCTL1_HSE9      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_HSYNCPOSCTL1_HSB       ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_HSYNCPOSCTL1_HSB8      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_HSYNCPOSCTL1_HSB9      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_HSYNCPOSCTL1_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_HSYNCPOSCTL2             0x35L
#define OLLADV7185_HSYNCPOSCTL2_HSB       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HSYNCPOSCTL2_HSB0      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HSYNCPOSCTL2_HSB1      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_HSYNCPOSCTL2_HSB2      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_HSYNCPOSCTL2_HSB3      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_HSYNCPOSCTL2_HSB4      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_HSYNCPOSCTL2_HSB5      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_HSYNCPOSCTL2_HSB6      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_HSYNCPOSCTL2_HSB7      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_HSYNCPOSCTL2_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_HSYNCPOSCTL3             0x36L
#define OLLADV7185_HSYNCPOSCTL3_HSE       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HSYNCPOSCTL3_HSE0      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_HSYNCPOSCTL3_HSE1      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_HSYNCPOSCTL3_HSE2      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_HSYNCPOSCTL3_HSE3      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_HSYNCPOSCTL3_HSE4      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_HSYNCPOSCTL3_HSE5      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_HSYNCPOSCTL3_HSE6      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_HSYNCPOSCTL3_HSE7      ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_HSYNCPOSCTL3_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//!!!!!TO BE VERIFIED !!!!!
#define OLLADV7185_POLARITYCTL             0x37L
#define OLLADV7185_POLARITYCTL_PCLK       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_POLARITYCTL_PFF        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_POLARITYCTL_PDV        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_POLARITYCTL_PF         ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_POLARITYCTL_PLLCREF    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_POLARITYCTL_PVS        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_POLARITYCTL_PHVR       ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_POLARITYCTL_PHS        ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_POLARITYCTL_ALL        ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//      OLLADV7185                          0x38L         RESERVED
//      OLLADV7185                          0x39L         RESERVED
//      OLLADV7185                          0x3AL         RESERVED

#define OLLADV7185_CHROMACOMBFILTER        0x45L
#define OLLADV7185_CHROMACOMBFILTER_ALL   ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_AUTOLOCKMASK             0xF0L 
#define OLLADV7185_AUTOLOCKMASK_RESERVED  ((0x02L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_AUTOLOCKMASK_FSCUNLOCK ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_AUTOLOCKMASK_625UNLOCK ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_AUTOLOCKMASK_ADUNLOCK  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_AUTOLOCKMASK_FSCLOCK   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_AUTOLOCKMASK_625LOCK   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_AUTOLOCKMASK_ADLOCK    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_AUTOLOCKMASK_ALL       ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_MANLOCKMASK               0xF1L               // DEFAULT should be 0xEF
#define OLLADV7185_MANLOCKMASK_RESERVED    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANLOCKMASK_MISSING     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_MANLOCKMASK_VOLTWINLOCK ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MANLOCKMASK_TIMELOCK    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_MANLOCKMASK_TIMEWINLOCK ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_MANLOCKMASK_SLICELEVOUT ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_MANLOCKMASK_CLAMPERROR  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_MANLOCKMASK_GAINERROR   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MANLOCKMASK_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLADV7185_MANUNLOCKMASK               0xF2L             // DEFAULT should be 0x10
#define OLLADV7185_MANUNLOCKMASK_RESERVED    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLADV7185_MANUNLOCKMASK_MISSING     ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLADV7185_MANUNLOCKMASK_VOLTWINLOCK ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLADV7185_MANUNLOCKMASK_TIMELOCK    ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLADV7185_MANUNLOCKMASK_TIMEWINLOCK ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLADV7185_MANUNLOCKMASK_SLICELEVOUT ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLADV7185_MANUNLOCKMASK_CLAMPERROR  ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLADV7185_MANUNLOCKMASK_GAINERROR   ((0x01L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x07L)
#define OLLADV7185_MANUNLOCKMASK_ALL         ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//////////////////////////////////////////////////////////////////////////////////////////////////////
//       #LINES FOR IN LOCK   # LINES FOR OUT LOCK
// 0              1                    10
// 1              2                    30
// 2              3                    50
// 3              5                    80
// 4             10                   100
// 5             20                   300
// 6             50                   400
// 7            100                   500
// 8            300                   800
// 9            500                  1000
// 10           600                  1500
// 11           800                  2000
// 12          1000                  2500
// 13          2000                  3000
// 14          3000                  3500
// 15          4000                  4000
//////////////////////////////////////////////////////////////////////////////////////////////////////
#define OLLADV7185_LOCKCOUNT                0xF3L             // DEFAULT should be 0x07
#define OLLADV7185_LOCKCOUNT_INLOCKCNT    ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L) // 0x7 = 10 lines
#define OLLADV7185_LOCKCOUNT_OUTLOCKCNT   ((0x04L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x04L) // 0x0 = 10 lines
#define OLLADV7185_LOCKCOUNT_ALL          ((0x08L   <<    OLLADV7185_SHIFT_FIELD_SIZE) | 0x00L)

//===========================================================================
//
//          Definition of registers for Condor TVE
//
//===========================================================================
#define OLLTVE_SHIFT_FIELD_SIZE             0x05L
#define OLLTVE_FIELD_OFFSET_MASK            0x1FL
#define OLLTVE_SHIFT_WRITE_ONLY             0x10L
#define OLLTVE_WRITE_ONLY                   0x01L
#define OLLTVE_WRITE_ONLY_MASK              (OLLTVE_WRITE_ONLY << OLLTVE_SHIFT_WRITE_ONLY)
#define OLLTVE_FIELD_SIZE_MASK              0x3FL
#define OLLTVE_MAX_NB_REGISTER              0x86L

#define OLLTVE_ACTIVELINE0                  0x32L
#define OLLTVE_ACTIVELINE0_ALL              ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_ACTIVELINE1                  0x31L
#define OLLTVE_ACTIVELINE1_ALL              ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_AGC_PULSE_LEVEL              0x37L
#define OLLTVE_AGC_PULSE_LEVEL_ALL          ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_BACK_PORCH                   0x0AL
#define OLLTVE_BACK_PORCH_ALL               ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_BLACK_LEVEL0                 0x0FL
#define OLLTVE_BLACK_LEVEL0_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_BLACK_LEVEL1                 0x0EL
#define OLLTVE_BLACK_LEVEL1_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_BLANK_LEVEL0                 0x11L
#define OLLTVE_BLANK_LEVEL0_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_BLANK_LEVEL1                 0x10L
#define OLLTVE_BLANK_LEVEL1_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_BP_PULSE_LEVEL               0x38L
#define OLLTVE_BP_PULSE_LEVEL_ALL           ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_BREEZE_WAY                   0x29L
#define OLLTVE_BREEZE_WAY_ALL               ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CB_BURST_LEVEL               0x0BL
#define OLLTVE_CB_BURST_LEVEL_ALL           ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CB_GAIN                      0x20L
#define OLLTVE_CB_GAIN_ALL                  ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_BURST_WIDTH                  0x09L
#define OLLTVE_BURST_WIDTH_ALL              ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CHROMA_FREQ0                 0x03L
#define OLLTVE_CHROMA_FREQ0_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CHROMA_FREQ1                 0x02L
#define OLLTVE_CHROMA_FREQ1_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CHROMA_FREQ2                 0x01L
#define OLLTVE_CHROMA_FREQ2_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CHROMA_FREQ3                 0x00L
#define OLLTVE_CHROMA_FREQ3_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CHROMA_PHASE                 0x04L
#define OLLTVE_CHROMA_PHASE_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CVE2CTL0                     0x05L
#define OLLTVE_CVE2CTL0_ALL                 ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL0_BYPASS_YCLAMP       ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL0_CLRBAR_MODE         ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x01L)

#define OLLTVE_CVE2CTL1                     0x06L
#define OLLTVE_CVE2CTL1_ALL                 ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL1_CVBS_ENABLE         ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL1_YC_DELAY            ((0x03L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLTVE_CVE2CTL1_RGB_SYNC            ((0x03L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLTVE_CVE2CTL1_RGB_SETUP           ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x07L)

#define OLLTVE_CVE2CTL2                     0x07L
#define OLLTVE_CVE2CTL2_ALL                 ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL2_COMPCHGAIN          ((0x02L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL2_COMP_YUV            ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLTVE_CVE2CTL2_CHROMA_BW           ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x03L)

#define OLLTVE_CVE2CTL3                     0x0DL
#define OLLTVE_CVE2CTL3_ALL                 ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL3_SLAVE_THRESH        ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL3_SLAVE_MODE          ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x01L)

#define OLLTVE_CVE2CTL4                     0x34L
#define OLLTVE_CVE2CTL4_ALL                 ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL4_VSYNC5              ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_CVE2CTL4_CPHASE_RST          ((0x02L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLTVE_CVE2CTL4_SYS625_50           ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x03L)
#define OLLTVE_CVE2CTL4_INVERT_TOP          ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x04L)
#define OLLTVE_CVE2CTL4_CHROMA_BW           ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x05L)
#define OLLTVE_CVE2CTL4_PAL_MODE            ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x06L)
#define OLLTVE_CVE2CTL4_UV_ORDER            ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x07L)

#define OLLTVE_CR_BURST_LEVEL               0x0CL
#define OLLTVE_CR_BURST_LEVEL_ALL           ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_CR_GAIN                      0x22L
#define OLLTVE_CR_GAIN_ALL                  ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_FIRSTVIDEOLINE               0x33L
#define OLLTVE_FIRSTVIDEOLINE_ALL           ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_FRONT_PORCH                  0x2CL
#define OLLTVE_FRONT_PORCH_ALL              ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_HSYNC_WIDTH                  0x08L
#define OLLTVE_HSYNC_WIDTH_ALL              ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N0                           0x19L
#define OLLTVE_N0_ALL                       ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N1                           0x12L
#define OLLTVE_N1_ALL                       ((0x06L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N2                           0x3BL
#define OLLTVE_N2_ALL                       ((0x07L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N3                           0x13L
#define OLLTVE_N3_ALL                       ((0x06L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N4                           0x39L
#define OLLTVE_N4_ALL                       ((0x07L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N5                           0x1DL
#define OLLTVE_N5_ALL                       ((0x03L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N6                           0x3AL
#define OLLTVE_N6_ALL                       ((0x03L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N7                           0x24L
#define OLLTVE_N7_ALL                       ((0x02L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N8                           0x14L
#define OLLTVE_N8_ALL                       ((0x06L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N9                           0x15L
#define OLLTVE_N9_ALL                       ((0x06L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N10                          0x16L
#define OLLTVE_N10_ALL                      ((0x06L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N11_L                        0x2EL
#define OLLTVE_N11_L_ALL                    ((0x07L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N11_H                        0x2DL
#define OLLTVE_N11_H_ALL                    ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N12_L                        0x30L
#define OLLTVE_N12_L_ALL                    ((0x07L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N12_H                        0x2FL
#define OLLTVE_N12_H_ALL                    ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N13                          0x1AL
#define OLLTVE_N13_ALL                      ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N14                          0x1BL
#define OLLTVE_N14_ALL                      ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N15                          0x1CL
#define OLLTVE_N15_ALL                      ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N16                          0x23L
#define OLLTVE_N16_ALL                      ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N17                          0x26L
#define OLLTVE_N17_ALL                      ((0x04L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N18                          0x28L
#define OLLTVE_N18_ALL                      ((0x04L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N19                          0x27L
#define OLLTVE_N19_ALL                      ((0x04L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N20                          0x21L
#define OLLTVE_N20_ALL                      ((0x03L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N21_L                        0x2BL
#define OLLTVE_N21_L_ALL                    ((0x02L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N21_H                        0x2AL
#define OLLTVE_N21_H_ALL                    ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_N22                          0x36L
#define OLLTVE_N22_ALL                      ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_NUM_LINES0                   0x18L
#define OLLTVE_NUM_LINES0_ALL               ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_NUM_LINES1                   0x17L
#define OLLTVE_NUM_LINES1_ALL               ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_PRODUCT_VERSION              0x3FL
#define OLLTVE_PRODUCT_VERSION_ALL          ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_SOFT_RESET                   0x3EL
#define OLLTVE_SOFT_RESET_ALL               ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_SYNC_LEVEL                   0x35L
#define OLLTVE_SYNC_LEVEL_ALL               ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_TINT                         0x25L
#define OLLTVE_TINT_ALL                     ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_VBI_BLANK_LEVEL0             0x3DL
#define OLLTVE_VBI_BLANK_LEVEL0_ALL         ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_VBI_BLANK_LEVEL1             0x3CL
#define OLLTVE_VBI_BLANK_LEVEL1_ALL         ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_WHITE_LEVEL0                 0x1FL
#define OLLTVE_WHITE_LEVEL0_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_WHITE_LEVEL1                 0x1EL
#define OLLTVE_WHITE_LEVEL1_ALL             ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_TVEGLOBCTL                   0x80L
#define OLLTVE_TVEGLOBCTL_ALL               ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_TVEGLOBCTL_CVE2ENABLE        ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)
#define OLLTVE_TVEGLOBCTL_TVEFIELDBITPOL    ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x01L)
#define OLLTVE_TVEGLOBCTL_MV_DISABLE        ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x02L)
#define OLLTVE_TVEGLOBCTL_RESYNC_FIELD      ((0x01L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x03L)

#define OLLTVE_RESYNC_LINENUM0              0x82L
#define OLLTVE_RESYNC_LINENUM0_ALL          ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_RESYNC_LINENUM1              0x83L
#define OLLTVE_RESYNC_LINENUM1_ALL          ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_RESYNC_PIXEL0                0x84L
#define OLLTVE_RESYNC_PIXEL0_ALL            ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#define OLLTVE_RESYNC_PIXEL1                0x85L
#define OLLTVE_RESYNC_PIXEL1_ALL            ((0x08L   <<    OLLTVE_SHIFT_FIELD_SIZE) | 0x00L)

#endif //#if !M_MIL_USE_QNX && !M_MIL_USE_PPC
