//==============================================================================
//
// Filename:  CRONOS.H
// Owner   :  Matrox Imaging dept.
// Rev     :
// Content :  This file contains the new defines that are needed by the user
//            to use the MIL current library with the CRONOS.
//
// COPYRIGHT (c) Matrox Electronic Systems Ltd.
// All Rights Reserved
//==============================================================================
#if !M_MIL_USE_QNX && !M_MIL_USE_PPC

#ifndef __CRONOS_H
#define __CRONOS_H

#define M_IRQ_GLOBAL_OBJECT           125L

// Cronos board type definition
#define M_CRONOS_MAX_DIG            17L        // If this value is changed, make sure the Table in InthdlerOb.h is of the proper size

//==============================================================================
//
// CRONOS Lib prototypes
//
//==============================================================================
#ifdef __cplusplus
extern "C"
{
#endif

typedef long (MFTYPE *CRAPPHOOKFCTPTR)(long   FHookType, 
                                       void  *FExpansionFlagPtr);
                                      
long MFTYPE 
CrappAlloc(                  long            InitFlag, 
                             MIL_ID   *ApplicationID,
                             void     *ThreadContextPtr);
                                     
void MFTYPE 
CrappControl(                long            ControlType, 
                             long            ControlFlag,
                             void     *ThreadContextPtr);

long MFTYPE 
CrappInquire(                long            InquireType, 
                             long     *UserVarPtr,
                             void     *ThreadContextPtr);

long MFTYPE 
CrappGetError(               long            ErrorType, 
                             void     *UserPtr,
                             void     *ThreadContextPtr);

void MFTYPE 
CrappFree(                   MIL_ID          ApplicationID,
                             void     *ThreadContextPtr);

long MFTYPE 
CrsysAlloc(                  long            SystemType, 
                             long            Number, 
                             long            InitFlag, 
                             MIL_ID   *SystemID,
                             void     *ThreadContextPtr);
                                     
long MFTYPE 
CrsysInquire(                MIL_ID          SystemID,
                             long            InquireType, 
                             long     *UserVarPtr,
                             void     *ThreadContextPtr);

long MFTYPE 
CrsysControl(                MIL_ID          SystemID, 
                             long            ControlType, 
                             long            ControlFlag,
                             void     *ThreadContextPtr);
                                     
void MFTYPE 
CrsysConfigAccess(           MIL_ID          SystemID,
                             long            VendorId,      
                             long            DeviceId,      
                             long            DeviceNum,     
                             long            OperationFlag, 
                             long            OperationType, 
                             long            Offset,        
                             long            Size,
                             void           *UserArrayPtr,          
                             void     *ThreadContext);

void MFTYPE 
CrsysFree(                   MIL_ID          SystemID,
                             void     *ThreadContextPtr);

long MFTYPE 
CrdigAlloc(                  MIL_ID          SystemID, 
                             long            DeviceNum, 
                             MIL_TEXT_PTR        DataFormat, 
                             long            InitFlag, 
                             MIL_ID   *IdVarPtr,
                             void     *ThreadContextPtr);
                                        
void MFTYPE
CrdigFastAlloc(              MIL_ID          DigitizerID,
                             long            InitFlag,
                             void     *ThreadContextPtr);

void MFTYPE 
CrdigFree(                   MIL_ID          DigitizerID,
                             void     *ThreadContextPtr);

void MFTYPE 
CrdigFastFree(               MIL_ID          DigitizerID,
                             void     *ThreadContextPtr);

void MFTYPE 
CrdigGrabContinuous(         MIL_ID          DigitizerID, 
                             MIL_ID          BufferID,
                             void     *ThreadContextPtr);

void MFTYPE 
CrdigGrab(                   MIL_ID          DigitizerID, 
                             MIL_ID          BufferID,
                             long            NbIteration,
                             void     *ThreadContextPtr);
                                        
void MFTYPE 
CrdigHalt(                   MIL_ID          DigitizerID,
                             void     *ThreadContextPtr);

void MFTYPE 
CrdigGrabWait(               MIL_ID          DigitizerID,
                             long            Flag,
                             void     *ThreadContextPtr);
                                        
void MFTYPE 
CrdigControl(                MIL_ID          DigitizerID,
                             long            ControlType, 
                             double          ControlValue,
                             void     *ThreadContextPtr);
                                        
long MFTYPE 
CrdigInquire(                MIL_ID          DigitizerID,
                             long            InquireType, 
                             void     *UserVarPtr,
                             void     *ThreadContextPtr);
                                        
void MFTYPE 
CrdigReference(               MIL_ID          DigitizerID,
                             long            ReferenceType, 
                             long            ReferenceLevel,
                             void     *ThreadContextPtr);
                                        
void MFTYPE 
CrdigChannel(                MIL_ID          DigitizerID,
                             long            Channel,
                             void     *ThreadContextPtr);

MDIGHOOKFCTPTR MFTYPE 
CrdigHookFunction(           MIL_ID          DigitizerID,
                             long            HookType,
                             MDIGHOOKFCTPTR  HookHandlerPtr,
                             void     *UserDataPtr,
                             void     *ThreadContextPtr);

MSYSHOOKFCTPTR MFTYPE 
CrSysHookFunction(           MIL_ID          SystemId,
                             long            HookType,
                             MSYSHOOKFCTPTR  HookHandlerPtr,
                             void           *UserDataPtr,
                             void           *ThreadContextPtr);

CRAPPHOOKFCTPTR MFTYPE 
CrappHookFunction(           long            HookType,
                             CRAPPHOOKFCTPTR  HookHandlerPtr,
                             void     *UserDataPtr,
                             void     *ThreadContextPtr);

long MFTYPE 
CrdispAlloc(                 MIL_ID          SystemID, 
                             long            DeviceNum, 
                             MIL_TEXT_CHAR  *DispFormat, 
                             long            InitFlag, 
                             MIL_ID         *IdVarPtr,
                             void           *ThreadContextPtr);


void MFTYPE
CrdispSetLut(                 MIL_ID          DisplayID, 
                             void           *LutData, 
                             void     *ThreadContextPtr);

void MFTYPE 
CrdispOverlayKey(             MIL_ID          DisplayID, 
                             long            KeyMode, 
                             long            KeyCond, 
                             long            KeyMask,
                             long            KeyColor,
                             void     *ThreadContextPtr);
                                        
void MFTYPE 
CrdispControl(                MIL_ID          DisplayID,
                             long            ControlType, 
                             long            Value,
                             void     *ThreadContextPtr);

void MFTYPE 
CrdispSelect(                 MIL_ID         DisplayID,
                             MIL_ID         BufferID,
                             void     *ThreadContextPtr);
                                        
long MFTYPE 
CrdispInquire(                MIL_ID          DisplayID, 
                             long            InquireType, 
                             void     *UserVarPtr,
                             void     *ThreadContextPtr);
                                        
void MFTYPE 
CrdispFree(                   MIL_ID          DisplayID,
                             void     *ThreadContextPtr);
                                                 
#ifndef MDISPHOOKFCTPTR

typedef long (MFTYPE  *MDISPHOOKFCTPTR)(long         HookType,
                                        MIL_ID       EventId,
                                        void  *UserPtr);
#endif


MDISPHOOKFCTPTR MFTYPE 
CrdispHookFunction(           MIL_ID          DisplayID,
                             long            HookType,
                             MDISPHOOKFCTPTR HookHandlerPtr,
                             void     *UserDataPtr,
                             void     *ThreadContextPtr);

void MFTYPE 
CrdispZoom(                   MIL_ID          DisplayID, 
                             long            XFactor, 
                             long            YFactor,
                             void     *ThreadContextPtr);

void MFTYPE 
CrdispPan(                    MIL_ID          DisplayID, 
                             long            XOffset, 
                             long            YOffset,
                             void     *ThreadContextPtr);

long MFTYPE 
CExtGrabHandler(             long            FHookType, 
                             MIL_ID          EventId, 
                             void     *FExpansionFlagPtr);

long MFTYPE 
CrbufCreateColor(             MIL_ID         SystemID,
                              MILBUFFERINFO  BufInfo,
                              MIL_ID   *IdVarPtr,
                              void     *ThreadContextPtr);

void MFTYPE 
CrbufFree(                    MIL_ID         BufferID,
                              void     *ThreadContextPtr);

void MFTYPE 
CrbufControl(                 MIL_ID         BufferID,
                              long           ControlType, 
                              long           Value,
                              void     *ThreadContextPtr);

void MFTYPE 
CrbufInquire(                 MIL_ID         BufferID,
                              long           InquireType, 
                              void     *UserVarPtr,
                              void     *ThreadContextPtr);


#ifdef __cplusplus
}
#endif

#endif //#if !M_MIL_USE_QNX && !M_MIL_USE_PPC
#endif