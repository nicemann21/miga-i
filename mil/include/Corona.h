//==============================================================================
//
// Filename:  CORONA.H
// Owner   :  Matrox Imaging dept.
// Rev     :
// Content :  This file contains the new defines that are needed by the user
//            to use the MIL current library with the CORONA.
//
// COPYRIGHT (c) Matrox Electronic Systems Ltd.
// All Rights Reserved
//==============================================================================

#ifndef __MIL_H
#include "mil.h"
#endif


#if !M_MIL_USE_QNX && !M_MIL_USE_PPC

#ifndef __CORONA_H
#define __CORONA_H

//==============================================================================
//                    CORONA DRIVER RELEASE (5.00)
//
//    These are the specifics or not yet released defines for the CORONA
//==============================================================================
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

// Corona board type redefinition
#define M_DEVICE_CORONA             M_CORONA         
#define M_DEVICE_CORONA_LC          M_CORONA_LC
#define M_DEVICE_CORONA_VIA         M_CORONA_VIA     
#define M_DEVICE_CORONA_RR          M_CORONA_RR      
#define M_DEVICE_CORONA_II          M_CORONA_II
#define M_DEVICE_METEOR_II_MC       M_METEOR_II_MC
#define M_DEVICE_METEOR_II_STD      M_METEOR_II_STD
#define M_NB_CORONA_BOARD_TYPE      7L
#define M_CORONA_MAX_DIG            17L


// Corona board type redefinition
#define RAINBOW_RUNNER  0x00000001
#define SAA7111A        0x00000002
#define KS0127          0x00000004
#define VIA             0x00000008
#define LUT             0x00000010
#define TVP3033         0x00000020
#define PIXPACK         0x00000040
#define BT254           0x00000080
#define MISTRAL         0x00000100
#define PSG             0x00000200
#define ICS1522         0x00000400
#define ENCODER         0x00000800


 // Not really a board type but just a way to allocate either a M_DEVICE_METEOR_II_MC or M_DEVICE_METEOR_II_STD
#define M_DEVICE_METEOR_II          M_METEOR_II

/* User Hook identification*/
/******************************************************************************/
#define CLL_IRQ_TYPE_FIELD_START_RELATED_MASK     0x0000000FL                              
#define CLLISR_START_OF_GRAB_FRAME_BIT            0x00000001L  // When grabbing
#define CLLISR_START_OF_GRAB_FIELD_BIT            0x00000002L  // When grabbing
#define CLLISR_START_OF_GRAB_FIELD_ODD_BIT        0x00000004L  // When grabbing
#define CLLISR_START_OF_GRAB_FIELD_EVEN_BIT       0x00000008L  // When grabbing

#define CLL_IRQ_TYPE_GRAB_START_RELATED_MASK      0x00000010L
#define CLLISR_START_OF_GRAB_BIT                  0x00000010L  // When grabbing

#define CLL_IRQ_TYPE_VSYNC_START_RELATED_MASK     0x000008E0L
#define CLLISR_START_OF_FIELD_ODD_BIT             0x00000020L  // When odd vsync rising
#define CLLISR_START_OF_FIELD_EVEN_BIT            0x00000040L  // When even vsync rising
#define CLLISR_START_OF_FIELD_BIT                 0x00000080L  // When vsync rising
#define CLLISR_START_OF_FRAME_BIT                 0x00000800L  // without grabbing

#define CLL_IRQ_TYPE_FIELD_END_RELATED_MASK       0x00000700L
#define CLLISR_END_OF_GRAB_FIELD_EVEN_BIT         0x00000100L  // When grabbing
#define CLLISR_END_OF_GRAB_FIELD_ODD_BIT          0x00000200L  // When grabbing
#define CLLISR_END_OF_GRAB_FIELD_BIT              0x00000400L  // When grabbing

#define CLL_IRQ_TYPE_GRAB_FRAME_END_RELATED_MASK  0x00003000L
#define CLLISR_END_OF_GRAB_FRAME_BIT              0x00001000L  // When grabbing

#define CLL_IRQ_TYPE_CAMDTEC_RELATED_MASK         0x00004000L
#define CLLISR_CAMDTEC_IRQ_BIT                    0x00004000L  // A camera is connected

#define CLL_IRQ_TYPE_LOCKDTEC_RELATED_MASK        0x00008000L
#define CLLISR_LOCKDTEC_IRQ_BIT                   0x00008000L  // Sync is stable

#define CLL_IRQ_TYPE_GRAB_END_RELATED_MASK        0x000F0000L
#define CLLISR_END_OF_GRAB_BIT                    0x00010000L  // When grabbing
#define CLLISR_END_OF_GRAB_INFO_0                 0x00020000L  // When grabbing
#define CLLISR_END_OF_GRAB_INFO_1                 0x00040000L  // When grabbing
#define CLLISR_END_OF_GRAB_INFO_2                 0x00080000L  // When grabbing
                                                  
#define CLLISR_GRAB_LINE_IRQ_BIT                  0x00100000L  // When grabbing
#define CLLISR_XFER_LINE_IRQ_BIT                  0x00200000L  // When grabbing
#define CLLISR_END_OF_XFER_BIT                    0x00400000L  // When xfering
#define CLLISR_START_OF_XFER_BIT                  0x00800000L  // When xfering

#define CLL_IRQ_TYPE_JPEG_RELATED_MASK            0x01000000L      
#define CLLISR_JPEG_VSYNC_BIT                     0x01000000L  // When vsync rising
#define CLLISR_JPEG_END_OF_FIELD_BIT              0x02000000L  // When end of field 
#define CLLISR_JPEG_DCOMP_RDY                     0x04000000L  // When grab command must be send to grab decompressed data 
#define CLLISR_JPEG_DONT_COMPLETE_IO_REQ_START    0x08000000L  // Set at start of grab preceding a progressive compression sequence (with interlaced timings)

#define CLL_IRQ_TYPE_UART_RELATED_MASK            0x10000000L
#define CLLISR_UART_IRQ_BIT                       0x10000000L

#define CLL_IRQ_TYPE_TIMER_RELATED_MASK           0x20000000L
#define CLLISR_TIMER_IRQ_BIT                      0x20000000L

#define CLLISR_JPEG_DONT_COMPLETE_IO_REQ_END      0x40000000L  // Set at end of grab preceding a progressive compression sequence (with interlaced timings)
#define CLL_IRQ_TYPE_DONT_COMPLETE_IO_REQ_MASK    0x48000000L

#define CLLISR_MUST_ALWAYS_BE_ENABLE_MASK         (CLLISR_END_OF_GRAB_INFO_0 | CLLISR_END_OF_GRAB_INFO_1 | CLLISR_END_OF_GRAB_INFO_2 | CLLISR_UART_IRQ_BIT)
                                                   
//==============================================================================
// Internal use only
//==============================================================================
#define M_SYS_DEBUG_ACTION_0        300000L
#define M_SYS_DEBUG_ACTION_1        300001L
#define M_SYS_DEBUG_ACTION_2        300002L
#define M_SYS_DEBUG_ACTION_3        300003L
#define M_SYS_DEBUG_ACTION_4        300004L
#define M_SYS_DEBUG_ACTION_5        300005L
#define M_SYS_DEBUG_ACTION_6        300006L
#define M_SYS_DEBUG_ACTION_7        300007L
#define M_SYS_DEBUG_ACTION_8        300008L
#define M_SYS_DEBUG_ACTION_9        300009L
#define M_SYS_DEBUG_ACTION_10       300010L
#define M_SYS_DEBUG_ACTION_11       300011L
#define M_SYS_DEBUG_ACTION_12       300012L

// SysInquire()
#define C_COMPRESSION_IN_PROGRESS     4120L  // reserved in mil.h
#define C_DECOMPRESSION_IN_PROGRESS   4121L  // reserved in mil.h
#define M_YUV16_GRAB_SUPPORTED        4122L  // reserved in mil.h

// Seeprom 256 bytes
// First 128 (0x80) bytes are free
// Next 120 bytes used for licence
// Last 8 bytes unique identifier
#define M_SEEPROM_SPACE             M_RESERVED_FOR_INTERNAL_USE_SYS_CONFIG
#define CORONA_LICENSECODE_DATA_OFFSET 128L
#define CORONA_UNIQUE_ID_OFFSET1       248L
#define CORONA_UNIQUE_ID_OFFSET2       252L
#define MAX_LENGTH_LICENSE             120L

//==============================================================================
// MIL OPTIONAL COMPILE DEFINES prefixes
//==============================================================================
#if M_MIL_USE_DOS_32
   #define CORONAFARTYPE
#endif

#if M_MIL_USE_WINDOWS
   #define CORONAFARTYPE                      
#endif


//==============================================================================
//
// JPEG Markers structure
//
//==============================================================================
#define M_JPEG_NB_MARKERS    960L
typedef struct _MARKERS_STRUC
   {
   //
   // ZORAN 36050 MARKERS
   //
   unsigned char Table[M_JPEG_NB_MARKERS];

   } MARKERS_STRUC, *PMARKERS_STRUC;

typedef struct _MJPEG_STRUC
   {
   MARKERS_STRUC Markers;
   unsigned long CompressionType;
   unsigned long SrcBufferAdr;
   unsigned long DstBufferAdr;
   unsigned long JpegFirstFieldSizeByte;
   unsigned long JpegSecondFieldSizeByte;
   unsigned long CurrentJpegBufferPhyAdr;
   unsigned long GrabBeforeJpegCompression;
   unsigned long UserBufferSize;
   unsigned long UserBufferAdr;
   MIL_ID        UserBufferID;
   } MJPEG_STRUC, *PMJPEG_STRUC;

//==============================================================================
// CORONA Lib prototypes
//==============================================================================
#ifdef __cplusplus
extern "C"
{
#endif

typedef MFTYPE32 long (MFTYPE MPTYPE *CAPPHOOKFCTPTR)(long         FHookType, 
                                                      void MPTYPE *FExpansionFlagPtr);
                                      
MFTYPE32 long MFTYPE 
CappAlloc(                   long            InitFlag, 
                             MIL_ID MPTYPE  *ApplicationID,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
CappControl(                 long            ControlType, 
                             long            ControlFlag,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CappInquire(                 long            InquireType, 
                             long MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CappGetError(                long            ErrorType, 
                             void MPTYPE    *UserPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CappFree(                    MIL_ID          ApplicationID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CsysAlloc(                   long            SystemType, 
                             long            Number, 
                             long            InitFlag, 
                             MIL_ID MPTYPE  *SystemID,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 long MFTYPE 
CsysInquire(                 MIL_ID          SystemID,
                             long            InquireType, 
                             long MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CsysControl(                 MIL_ID          SystemID, 
                             long            ControlType, 
                             long            ControlFlag,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
CsysConfigAccess(            MIL_ID          SystemID,
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
CsysFree(                    MIL_ID          SystemID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE  
CbufAllocColor(              MIL_ID          SystemID, 
                             long            SizeBand,
                             long            SizeX,
                             long            SizeY,
                             long            Type,
                             long            Attribute,
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CbufAlloc2d(                 MIL_ID          SystemID, 
                             long            SizeX,
                             long            SizeY,
                             long            Type,
                             long            Attribute,
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE
CbufCreateColor(             MIL_ID          SystemID, 
                             long            SizeBand,
                             long            SizeX,
                             long            SizeY,
                             long            Type,
                             long            Attribute,
                             long            ControlFlag,  
                             long            Pitch,        
                             void           *UserArrayPtr,
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CbufCreate2d(                MIL_ID          SystemID, 
                             long            SizeX,
                             long            SizeY,
                             long            Type,
                             long            Attribute,
                             void           *UserArrayPtr,
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CbufChildColor(              MIL_ID          BufferID, 
                             long            Band, 
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 long MFTYPE 
CbufChild2d(                 MIL_ID          BufferID, 
                             long            OffsetX, 
                             long            OffsetY, 
                             long            SizeX, 
                             long            SizeY,
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CbufPut(                     MIL_ID          BufferID, 
                             void MPTYPE    *UserArrayPtr,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
CbufPut1d(                   MIL_ID          BufferID, 
                             long            OffsetX, 
                             long            SizeX, 
                             void MPTYPE    *UserArrayPtr,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
CbufPut2d(                   MIL_ID          BufferID, 
                             long            OffsetX, 
                             long            OffsetY, 
                             long            SizeX, 
                             long            SizeY, 
                             void MPTYPE    *UserArrayPtr,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
CbufPutColor(                MIL_ID          BufferID, 
                             long            Format, 
                             long            Band, 
                             void MPTYPE    *UserArrayPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CbufGet(                     MIL_ID          BufferID, 
                             void MPTYPE    *UserArrayPtr,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
CbufGet1d(                   MIL_ID          BufferID, 
                             long            OffsetX, 
                             long            SizeX, 
                             void MPTYPE    *UserArrayPtr,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
CbufGet2d(                   MIL_ID          BufferID, 
                             long            OffsetX, 
                             long            OffsetY, 
                             long            SizeX, 
                             long            SizeY, 
                             void MPTYPE    *UserArrayPtr,
                             void MPTYPE    *ThreadContextPtr);
                                     
MFTYPE32 void MFTYPE 
CbufGetColor(                MIL_ID          BufferID, 
                             long            Format, 
                             long            Band, 
                             void MPTYPE    *UserArrayPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CbufCopyColor(               MIL_ID          SrcBufferID, 
                             MIL_ID          DstBufferID, 
                             long            Band, 
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CbufCompression(             MIL_ID          SrcBufferID, 
                             MIL_ID          DstBufferID, 
                             long            QualityFactor,
                             long            Flag,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CbufInquire(                 MIL_ID          BufferID,
                             long            InquireType, 
                             long MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CbufControl(                 MIL_ID          BufferID,
                             long            ControlType, 
                             double          ControlValue,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CbufFree(                    MIL_ID          BufferID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CdigAlloc(                   MIL_ID          SystemID, 
                             long            DeviceNum, 
                             LPMILSTR        DataFormat, 
                             long            InitFlag, 
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE
CdigFastAlloc(               MIL_ID          DigitizerID,
                             long            InitFlag,
                             void   MPTYPE  *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CdigFree(                    MIL_ID          DigitizerID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdigFastFree(                MIL_ID          DigitizerID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdigGrabContinuous(          MIL_ID          DigitizerID, 
                             MIL_ID          BufferID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdigGrab(                    MIL_ID          DigitizerID, 
                             MIL_ID          BufferID,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CdigHalt(                    MIL_ID          DigitizerID,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdigGrabWait(                MIL_ID          DigitizerID,
                             long            Flag,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CdigControl(                 MIL_ID          DigitizerID,
                             long            ControlType, 
                             double          ControlValue,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 long MFTYPE 
CdigInquire(                 MIL_ID          DigitizerID,
                             long            InquireType, 
                             void MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CdigReference(               MIL_ID          DigitizerID,
                             long            ReferenceType, 
                             long            ReferenceLevel,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CdigChannel(                 MIL_ID          DigitizerID,
                             long            Channel,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdigSetLut(                  MIL_ID          DigitizerID, 
                             long            LutType, 
                             long            Start, 
                             long            NbElem, 
                             void MPTYPE    *LutData, 
                             long            SizeBit, 
                             long            LutResetType,
                             void MPTYPE    *ThreadContextPtr);


MFTYPE32 MDIGHOOKFCTPTR MFTYPE 
CdigHookFunction(            MIL_ID          DigitizerID,
                             long            HookType,
                             MDIGHOOKFCTPTR  HookHandlerPtr,
                             void MPTYPE    *UserDataPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 CAPPHOOKFCTPTR MFTYPE 
CappHookFunction(            long            HookType,
                             CAPPHOOKFCTPTR  HookHandlerPtr,
                             void MPTYPE    *UserDataPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 long MFTYPE 
CdispAlloc(                  MIL_ID          SystemID, 
                             long            DeviceNum, 
                             LPMILSTR        DispFormat, 
                             long            InitFlag, 
                             MIL_ID MPTYPE  *IdVarPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdispSetLut(                 MIL_ID          DisplayID, 
                             long            LutType, 
                             long            Start,
                             long            NbElem, 
                             void           *LutData,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdispOverlayKey(             MIL_ID          DisplayID, 
                             long            KeyMode, 
                             long            KeyCond, 
                             long            KeyMask,
                             long            KeyColor,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CdispControl(                MIL_ID          DisplayID,
                             long            ControlType, 
                             long            Value,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 long MFTYPE 
CdispInquire(                MIL_ID          DisplayID, 
                             long            InquireType, 
                             void MPTYPE    *UserVarPtr,
                             void MPTYPE    *ThreadContextPtr);
                                        
MFTYPE32 void MFTYPE 
CdispFree(                   MIL_ID          DisplayID,
                             void MPTYPE    *ThreadContextPtr);
                                                 
MFTYPE32 void MFTYPE 
CdispSelect(                 MIL_ID          DisplayID,
                             MIL_ID          BufferID,
                             void MPTYPE    *ThreadContextPtr);

#ifndef MDISPHOOKFCTPTR

typedef MFTYPE32 long (MFTYPE MPTYPE *MDISPHOOKFCTPTR)(long         HookType,
                                                       MIL_ID       EventId,
                                                       void MPTYPE *UserPtr);
#endif


MFTYPE32 MDISPHOOKFCTPTR MFTYPE 
CdispHookFunction(           MIL_ID          DisplayID,
                             long            HookType,
                             MDISPHOOKFCTPTR HookHandlerPtr,
                             void MPTYPE    *UserDataPtr,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdispZoom(                   MIL_ID          DisplayID, 
                             long            XFactor, 
                             long            YFactor,
                             void MPTYPE    *ThreadContextPtr);

MFTYPE32 void MFTYPE 
CdispPan(                    MIL_ID          DisplayID, 
                             long            XOffset, 
                             long            YOffset,
                             void MPTYPE    *ThreadContextPtr);

long MINTFTYPE 
CExtGrabHandler(             long            FHookType, 
                             MIL_ID          EventId, 
                             void MPTYPE    *FExpansionFlagPtr);

//==============================================================================
// CORONA LowLevel prototypes
//==============================================================================

MFTYPE32 long MFTYPE 
CLLinit(                     MIL_ID          SystemId,
                             long            InitMode,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLjpegInit(                 MIL_ID          SystemId,
                             long            InitMode,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLsysAlloc(                 long            SystemType,
                             long            SystemNum,
                             long            InitFlag,
                             MIL_ID         *SystemIdPtr, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLsysFree(                  MIL_ID          SystemId, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLsysLutSelectPalette(      MIL_ID          SystemId,
                             unsigned long   palette, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLsysLutSelectMode(         MIL_ID          SystemId,
                             unsigned long   mode, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLsysLutWrite(              MIL_ID                SystemId,
                             unsigned long         palette,
                             unsigned long         lut,
                             unsigned long         mode,
                             unsigned char MPTYPE *pBuffer,
                             unsigned long         length,
                             unsigned long         offset, 
                             void                 *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigSetLut(                MIL_ID                SystemId,
                             long                  LutType,     
                             long                  Start,       
                             long                  NbElem,      
                             void                 *LutData,    
                             long                  SizeBits,    
                             long                  LutResetType,
                             void                 *OverlappedStruct);
   
MFTYPE32 long MFTYPE 
CLLdispOverlayKey(           MIL_ID          SystemId, 
                             long            lKeyMode, 
                             long            lKeyCond,
                             long            nKeyColorHigh, 
                             long            nKeyColorLow, 
                             void           *OverlappedStruct);
   
MFTYPE32 long MFTYPE 
CLLsysControl(               MIL_ID          SystemId,  
                             long            ControlType, 
                             long            ControlValue, 
                             void           *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLsysConfigAccess(          MIL_ID          SystemId, 
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
CLLdigAlloc(                 MIL_ID          SystemId, 
                             LPMILSTR        DataFormat, 
                             long            InitFlag, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE
CLLdigFastAlloc ( MIL_ID       SystemId,
                  long         InitFlag,
                  void        *OverlappedStruct);
 
MFTYPE32 long MFTYPE 
CLLGetDcfFromDisk(           MIL_ID          SystemId, 
                             LPMILSTR        DataFormat, 
                             long            InitFlag, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLSetDcfToHardWare(         MIL_ID          SystemId, 
                             long            InitFlag, 
                             void           *OverlappedStruct);


MFTYPE32 void MFTYPE 
CLLdigFree(                  MIL_ID          SystemId,
                             void           *OverlappedStruct);

MFTYPE32 void MFTYPE
CLLdigFastFree(              MIL_ID          SystemId,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigControl(               MIL_ID          SystemId, 
                             long            ControlType, 
                             double          ControlValue,  
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLjpegControl(              MIL_ID          SystemId, 
                             long            ControlType, 
                             double          ControlValue,  
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLjpegProgramMarkers(       MIL_ID          SystemId, 
                             void           *MarkersPtr,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigChannel(               MIL_ID          SystemId, 
                             long            Channel, 
                             void           *OverlappedStruct);    

MFTYPE32 long MFTYPE 
CLLdigReference(             MIL_ID          SystemId, 
                             long            ReferenceType, 
                             long            ReferenceLevel, 
                             void           *OverlappedStruct);

MFTYPE32 void MFTYPE 
CLLdigGrabContinuous(        MIL_ID          SystemId, 
                             void           *OverlappedStruct);   

MFTYPE32 void MFTYPE 
CLLdigChangeIntStat(	        MIL_ID          SystemId, 
                             long			   Enable, 
                             void		     *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigHookInterruptFromKernel(MIL_ID         SystemId, 
                              long           Enable, 
                              void          *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigHookFunction(          MIL_ID          SystemId,
                             long            HookType,
                             MDIGHOOKFCTPTR  HookFunctionPtr,
                             void MPTYPE    *UserDataPtr, 
                             void           *OverlappedStruct);
                                                
MFTYPE32 long MFTYPE 
CLLdigGrabPosition(          MIL_ID          SystemId,   
                             long            SrcOffX,   
                             long            SrcOffY,   
                             long            SrcSizeX,   
                             long            SrcSizeY,  
                             long            DestSizeX,   
                             long            DestSizeY,   
                             long            DestPhysAddr, 
                             long            DestPitchX,  
                             long            DestPhysAddrU,   
                             long            DestPitchXU,   
                             long            DestPhysAddrV,  
                             long            DestPitchXV, 
                             void           *OverlappedStruct);
                                                
MFTYPE32 void MFTYPE 
CLLdigGrabSingle(            MIL_ID          SystemId, 
                             void           *OverlappedStruct);       

MFTYPE32 long MFTYPE 
CLLdigGrabStop(              MIL_ID          SystemId,
                             long            ImmediateStop,
                             long            TransferStop,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigGrabWait(              MIL_ID          SystemId,
                             long            WaitFlag,
                             long            WaitMode,
                             long            WaitTimeout,
                             void           *OverlappedStruct);


MFTYPE32 long MFTYPE 
CLLsysInquire(               MIL_ID          SystemId,
                             long            InquireType, 
                             long           *UserDataPtr,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigInquire(               MIL_ID          SystemId,
                             long            InquireType, 
                             void           *pInquireValue,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLjpegInquire(              MIL_ID          SystemId,
                             long            InquireType, 
                             void           *pInquireValue,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigGrabStatus(            MIL_ID          SystemId, 
                             long            StatusFlag, 
                             void           *OverlappedStruct); 

MFTYPE32 long MFTYPE 
CLLdigGrab(                  MIL_ID          SystemId,       
                             //GENERAL
                             unsigned long   ViaSubSamplingX,    
                             unsigned long   ViaSubSamplingY,    
                             unsigned long   IrgHandling,
                             unsigned long   ViaBlockSize,
                             unsigned long   GrabDirectionX,
                             unsigned long   GrabDirectionY,
                             // SRC
                             unsigned long   SrcFormat,     
                             unsigned long   SrcSizeX,       
                             unsigned long   SrcSizeY,       
                             unsigned long   SrcBufferAdrs,      
                             unsigned long   SrcBufferAdrsOff1,
                             unsigned long   SrcBufferAdrsOff2,
                             unsigned long   SrcPitch,
                             unsigned long   SrcChildOffsetX,
                             unsigned long   SrcChildOffsetY,
                             unsigned long   SrcChildSizeX,  
                             unsigned long   SrcChildSizeY,  
                             // DST
                             unsigned long   DestFormat[],     
                             unsigned long   DestAttribute[],     
                             unsigned long   DestSizeX[],       
                             unsigned long   DestSizeY[],       
                             unsigned long   DestBufferAdrs1[],      
                             unsigned long   DestBufferAdrs2[],      
                             unsigned long   DestBufferAdrs3[],      
                             unsigned long   DestPitch[],
                             unsigned long   DestChildOffsetX[],
                             unsigned long   DestChildOffsetY[],
                             unsigned long   DestChildSizeX[],  
                             unsigned long   DestChildSizeY[],  
                             // CONTROL
                             unsigned long   SynchronousMode,         
                             unsigned long   LutPalette,      
                             unsigned long   GrabMode,        
                             unsigned long   GrabFlag,        
                             unsigned long   GrabPath,        
                             unsigned long   GrabField,       
                             unsigned long   StartOnField,         
                             // RAINBOW RUNNER
                             unsigned long   RRInpCtrl_PixFmt,
                             unsigned long   RROutPitch,      
                             unsigned long   RROutAddr,       
                             unsigned long   RROutModeFormat ,
                             unsigned long   RRCscBlueV,      
                             unsigned long   RRCscBlueU,      
                             unsigned long   RRCscGreenV,     
                             unsigned long   RRCscGreenU,     
                             unsigned long   RRCscRedV,       
                             unsigned long   RRCscRedU,       
                             unsigned long   RRHScale,        
                             unsigned long   RRVScale,        
                             unsigned long   RRCropLeft,      
                             unsigned long   RRCropRight,     
                             unsigned long   RRCropTop,       
                             unsigned long   RRCropBottom,    
                             unsigned long   RRHqScaleEn,     
                             // MODULE JPEG
                             MJPEG_STRUC     MjpegInfo,
                             //MARKERS_STRUC   Markers,
                             //unsigned long   CompressionType,
                             //unsigned long   SizeByteFirstField,
                             //unsigned long   SizeByteSecondField,
                             //MIL_ID          DestBufferId,
                             //
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdigGrabSetup(             MIL_ID        SystemId,
                             unsigned long GrabMode, 
                             unsigned long GrabFlag, 
                             unsigned long GrabPath,
                             unsigned long DestFormatVia, 
                             unsigned long DestFormatRR, 
                             void         *OverlappedStruct);

MFTYPE32 short MFTYPE 
CLLDmaInit(                  void);

MFTYPE32 short MFTYPE 
CLLDmaClose(                 void);

MFTYPE32 long MFTYPE 
CLLDmaBufferAlloc(           MIL_ID          SystemId,
                             unsigned long   xsize, 
                             unsigned long   ysize,
                             unsigned char   pixelsize, 
                             unsigned long   Alignment,
                             unsigned long   Prefetch,
                             unsigned long   Frontier,
                             unsigned long   AllocFlags,
                             unsigned long   *AllocFlagsOk,
                             void           *OverlappedStruct);
                                        
MFTYPE32 long MFTYPE 
CLLDmaBufferCreateId(        MIL_ID          SystemId, 
                             unsigned long   physaddr, 
                             unsigned long   xsize,
                             unsigned long   ysize, 
                             unsigned char   pixelsize, 
                             unsigned long   Alignment,
                             unsigned long   Prefetch,
                             unsigned long   Frontier,
                             unsigned long   AllocFlags,
                             unsigned long   *AllocFlagsOk,
                             void           *OverlappedStruct);
                                            
MFTYPE32 void  MPTYPE * MFTYPE 
CLLDmaBufferGetPtr(          MIL_ID          SystemId, 
                             long            bufid, 
                             void           *OverlappedStruct);
                                                  
MFTYPE32 short MFTYPE 
CLLDmaBufferFree(            MIL_ID          SystemId, 
                             long            bufid, 
                             void           *OverlappedStruct);

MFTYPE32 short MFTYPE  
CLLDmaBufferLock(            short           bufid);

MFTYPE32 short MFTYPE  
CLLDmaBufferUnlock(          short           bufid);

MFTYPE32 unsigned long MFTYPE 
CLLDmaBufferGetPhysAdr(      MIL_ID          SystemId, 
                             long            bufid, 
                             void           *OverlappedStruct);
                                                     
MFTYPE32 short MFTYPE  
CLLDmaBufferFreeId(          MIL_ID          SystemId, 
                             long            bufid, 
                             void           *OverlappedStruct);
                                             
MFTYPE32 long MFTYPE  
CLLDmaBufferAssignId(        MIL_ID                SystemId,
                             unsigned char MPTYPE *virtptr,
                             unsigned long         physaddr, 
                             unsigned long         xsize,
                             unsigned long         ysize, 
                             unsigned char         pixelsize, 
                             unsigned long         Alignment,
                             unsigned long         Prefetch,
                             unsigned long         Frontier,
                             unsigned long         AllocFlags,
                             unsigned long         *AllocFlagsOk,
                             void                 *OverlappedStruct);


MFTYPE32 long MFTYPE 
CLLdispAlloc (               MIL_ID          SystemId,
                             LPMILSTR        DataFormat,
                             long            InitFlag, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdispControl(              MIL_ID          SystemId, 
                             long            ControlType, 
                             long            Value, 
                             void           *OverlappedStruct);

MFTYPE32 void MFTYPE 
CLLdispFree(                 MIL_ID          SystemId,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdispSelect(               MIL_ID          SystemId, 
                             void           *EncoderParam, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLencoderInit(              MIL_ID          SystemId, 
                             long            ControlType,
                             long            Value, 
                             long            Format, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdispInquire(              MIL_ID          SystemId, 
                             long            InquireType,
                             void           *InquiredValue,
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdispSetLut(               MIL_ID                SystemId,
                             unsigned long         LutType, 
                             unsigned long MPTYPE *LutData, 
                             void                 *OverlappedStruct);
                                                
MFTYPE32 long MFTYPE 
CLLdispZoom(                 MIL_ID          SystemId, 
                             unsigned long   XFactor, 
                             unsigned long   YFactor, 
                             void           *OverlappedStruct);
                                              
MFTYPE32 long MFTYPE 
CLLdispPan(                  MIL_ID          SystemId, 
                             unsigned long   XOffset, 
                             unsigned long   YOffset, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLdispKeyLut(               MIL_ID                SystemId,
                             unsigned long         LutType, 
                             void           *OverlappedStruct);

MFTYPE32 long MFTYPE 
CLLencoderAlloc(             MIL_ID          SystemId,
                             LPMILSTR        DataFormat,
                             long            InitFlag, 
                             void           *OverlappedStruct);

//==============================================================================
// internal prototype
//==============================================================================

MFTYPE32 unsigned long MFTYPE 
CLLPciBridge(                MIL_ID          SystemId,
                             void           *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLFindPCIDevice(            MIL_ID                SystemId,
                             unsigned long         DeviceID, 
                             unsigned long         VendorID, 
                             unsigned long         Index, 
                             unsigned long MPTYPE *PciId, 
                             void                 *OverlappedStruct);

MFTYPE32 void * MFTYPE 
CLLFindCoronaStruc(          MIL_ID          SystemId, 
                             void           *OverlappedStruct);
   
MFTYPE32 long MFTYPE 
CLLFindCoronaId(             long            SystemNum);

MFTYPE32 long MFTYPE 
CLLMapPhysicalMemory(        unsigned long                PciId,
                             unsigned long                PhysAddr,
                             unsigned long                Limit,
                             void CORONAFARTYPE * MPTYPE *PointerToMemory,
                             void MPTYPE                 *Handle);
   
MFTYPE32 long MFTYPE 
CLLGeneralUnmapPhysicalMemory(void CORONAFARTYPE *PointerToMemory,
                              void MPTYPE        *Handle);

MFTYPE32 long MFTYPE 
CLLUnmapPhysicalMemory(      void MPTYPE    *Handle);

MFTYPE32 void MPTYPE * MFTYPE 
CLLMemGetPhysAddrFromLinearAddr(MIL_ID                SystemId, 
                                void MPTYPE          *LinearAddr,
                                unsigned long         LinearSize,
                                unsigned long MPTYPE *LinearStatus,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLPciReadConfiguration(        MIL_ID                SystemID,
                                unsigned long         BusDevFunNum,
                                unsigned long         RegNum,
                                unsigned long        *UserPtr,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLPciWriteConfiguration(       MIL_ID                SystemID,
                                unsigned long         BusDevFunNum, 
                                unsigned long         RegNum,
                                unsigned long         Data,
                                void                 *OverlappedStruct);
                                                        
MFTYPE32 unsigned long MFTYPE 
CLLsysWait(                     unsigned long         value);

MFTYPE32 unsigned long MFTYPE 
CLLregReadMga_32(               MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);

MFTYPE32 void MFTYPE 
CLLregWriteMga_32(              MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned long         data, 
                                void                 *OverlappedStruct);
   
MFTYPE32 unsigned short MFTYPE 
CLLregReadMga_16(               MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);

MFTYPE32 void MFTYPE 
CLLregWriteMga_16(              MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned short        data, 
                                void                 *OverlappedStruct);
   
MFTYPE32 unsigned char MFTYPE 
CLLregReadMga_8(                MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);

MFTYPE32 void MFTYPE
CLLregWriteMga_8(               MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned char         data, 
                                void                 *OverlappedStruct);
   
MFTYPE32 unsigned long MFTYPE 
CLLregReadVia_32(               MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);

MFTYPE32 void MFTYPE 
CLLregWriteVia_32(              MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned long         data, 
                                void                 *OverlappedStruct);
   
MFTYPE32 unsigned short MFTYPE 
CLLregReadVia_16(               MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);

MFTYPE32 void MFTYPE 
CLLregWriteVia_16(              MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned short        data, 
                                void                 *OverlappedStruct);
   
MFTYPE32 unsigned char MFTYPE 
CLLregReadVia_8(                MIL_ID                SystemId,
                                unsigned long         offset,
                                short                 flag, 
                                void                 *OverlappedStruct);
   
MFTYPE32 void MFTYPE 
CLLregWriteVia_8(               MIL_ID                SystemId,
                                unsigned long         offset, 
                                unsigned char         data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLLutEmulate(                  unsigned long         Register, 
                                unsigned long        *ShadowPtr); 

MFTYPE32 unsigned long MFTYPE 
CLLMGAWriteRegister(            MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLMGAReadRegister(             MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
CLLsysFPGAWrite(                MIL_ID                SystemId, 
                                char                 *BinFile, 
                                long                  Size, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE    
CLLrestoreShadowRegister(       MIL_ID                SystemId,                      
                                unsigned long         Chip, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLrestoreShadowChip(           MIL_ID                SystemId, 
                                unsigned long         Chip, 
                                void                 *OverlappedStruct);
MFTYPE32 unsigned long MFTYPE 
CLLReadAllRegister(             MIL_ID                SystemId, 
                                unsigned long         Chip, 
                                void                 *OverlappedStruct);
MFTYPE32 unsigned long MFTYPE 
CLLReadAllRegister(             MIL_ID                SystemId, 
                                unsigned long         Chip, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLresetRR              (       MIL_ID                SystemId, 
                                void                 *OverlappedStruct);


#ifdef __cplusplus
}
#endif


#endif

#endif //#if !M_MIL_USE_QNX && !M_MIL_USE_PPC
