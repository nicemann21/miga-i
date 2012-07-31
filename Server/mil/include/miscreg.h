//==============================================================================
//
// Filename     :  miscreg.h
// Owner        :  Matrox Imaging dept.
// Rev          :
// Content      :  corona low level structure description
// Compile flag :                                                           
//
// COPYRIGHT (c) Matrox Electronic Systems Ltd.
// All Rights Reserved
//==============================================================================

#ifndef __MISCREG_H__
#define __MISCREG_H__

//===========================================================================
//
//       Prototypes for access functions
//
//===========================================================================
#ifdef __cplusplus
extern "C"
{
#endif

MFTYPE32 unsigned long MFTYPE 
CLLRRWriteRegister(             MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLRRReadRegister(              MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLSAA7111AWriteRegister(       MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLSAA7111AReadRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLKS0127WriteRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLKS0127ReadRegister(          MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLIC2061WriteRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLVIAWriteRegister(            MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLVIAReadRegister(             MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLLUTWriteRegister(            MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLLUTReadRegister(             MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLTVP3033WriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLTVP3033ReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLPixPackWriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLPixPackReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLBT254WriteRegister(          MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLBT254ReadRegister(           MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field,  
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLSerialWriteRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE  
CLLSerialReadRegister(          MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLFriedrichWriteRegister(      MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE  
CLLFriedrichReadRegister(       MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLZR36016WriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE  
CLLZR36016ReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLZR36050WriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE  
CLLZR36050ReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLMistralWriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLMistralReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
CLLPSGWriteRegister(            MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
CLLPSGReadRegister(             MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLICS1522WriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
CLLICS1522ReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                void                 *OverlappedStruct);


MFTYPE32 unsigned long MFTYPE 
CLLDigModuleWriteRegister(      MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
CLLDigModuleReadRegister(       MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);


MFTYPE32 unsigned long MFTYPE 
CLLDAC8800WriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
CLLDAC8800ReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLDS1020WriteRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);
                        
MFTYPE32 unsigned long MFTYPE 
CLLDS1020ReadRegister(          MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                void                 *OverlappedStruct);


MFTYPE32 unsigned long MFTYPE 
CLLEncoderWriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLEncoderReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLPCF8574WriteRegister(        MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                unsigned long         Mode, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLPCF8574ReadRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLEEPromLicenseWriteRegister(  MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Mode,
                                unsigned long         NbData, 
                                void                 *UserDataPtr,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLEEPromLicenseReadRegister(   MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Mode,
                                unsigned long         NbData, 
                                void                 *UserDataPtr,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLToucanWriteRegister(         MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLToucanReadRegister(          MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLToucanDacWriteRegister(      MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long         Data, 
                                void                 *OverlappedStruct);

MFTYPE32 unsigned long MFTYPE 
CLLToucanDacReadRegister(       MIL_ID                SystemId, 
                                unsigned long         Register, 
                                unsigned long         Field, 
                                unsigned long        *Data, 
                                unsigned long         Mode,
                                void                 *OverlappedStruct);
#ifdef __cplusplus
}
#endif

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

//===========================================================================
//
//          Definition of registers for TVP3033
//
//===========================================================================

#define CLLTVP3033_EXPANSION              0x3C00L
#define CLLTVP3033_SHIFT_DATA_INDEX       0x08L
#define CLLTVP3033_SHIFT_DATA_INDEX_MASK  0xFFL
#define CLLTVP3033_SHIFT_WRITE_ONLY       0x10L
#define CLLTVP3033_SHIFT_PLL              0x11L
#define CLLTVP3033_SHIFT_VGA              0x12L
#define CLLTVP3033_SHIFT_VALUE            0x13L
#define CLLTVP3033_SHIFT_FIELD_SIZE       0x05L
#define CLLTVP3033_FIELD_OFFSET_MASK      0x1FL
#define CLLTVP3033_FIELD_SIZE_MASK        0x3FL
#define CLLTVP3033_WRITE_ONLY             0x01L
#define CLLTVP3033_PLL                    0x01L
#define CLLTVP3033_VGA                    0x01L
#define CLLTVP3033_WRITE_ONLY_MASK        (CLLTVP3033_WRITE_ONLY << CLLTVP3033_SHIFT_WRITE_ONLY)
#define CLLTVP3033_NB_INDEXED_REG         0x100L
#define CLLTVP3033_NB_NON_INDEXED_REG     0x10L
#define CLLTVP3033_PLL_MASK               (CLLTVP3033_PLL << CLLTVP3033_SHIFT_PLL)
#define CLLTVP3033_VGA_MASK               (CLLTVP3033_VGA << CLLTVP3033_SHIFT_VGA)

// Non-indexed registers
//===========================================================================

#define CLLTVP3033_PRAMWAD                     0x00L
#define CLLTVP3033_PRAMWAD_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_PRAMWAD_PRAMWAD           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_PRAMDAT                     0x01L        
#define CLLTVP3033_PRAMDAT_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_PRAMDAT_PRAMDAT           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_PIXMASK                     0x02L        
#define CLLTVP3033_PIXMASK_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_PIXMASK_PIXMASK           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_PRAMRAD                     0x03L        
#define CLLTVP3033_PRAMRAD_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_PRAMRAD_PRAMRAD           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_COLRWAD                     0x04L        
#define CLLTVP3033_COLRWAD_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_COLRWAD_COLRWAD           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_COLRWAD_PTRCLR            ((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_COLRDAT                     0x05L        
#define CLLTVP3033_COLRDAT_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_COLRDAT_COLRDAT           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_COLRRAD                     0x07L        
#define CLLTVP3033_COLRRAD_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_COLRRAD_COLRRAD           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_COLRRAD_PTRCLR            ((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_CURDCTL                     0x09L        
#define CLLTVP3033_CURDCTL_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_CURDCTL_CURDCTL           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_CURDCTL_MODESEL           ((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_INDXDAT                     0x0AL        
#define CLLTVP3033_INDXDAT_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_INDXDAT_INDXDAT           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_CRAMDAT                     0x0BL        
#define CLLTVP3033_CRAMDAT_ALL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_CRAMDAT_CRAMDAT           ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_CURXL                       0x0CL        
#define CLLTVP3033_CURXL_ALL                 ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_CURXL_CURXL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_CURXH                       0x0DL        
#define CLLTVP3033_CURXH_ALL                 ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_CURXH_CURXH               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_CURYL                       0x0EL        
#define CLLTVP3033_CURYL_ALL                 ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_CURYL_CURYL               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
                                                            
#define CLLTVP3033_CURYH                       0x0FL        
#define CLLTVP3033_CURYH_ALL                 ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLTVP3033_CURYH_CURYH               ((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)


// Indexed registers
//===========================================================================

#define CLLTVP3033_SILCREV                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x01L))
#define CLLTVP3033_SILCREV_SILCREV          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_SILCREV_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_CURICTL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x06L))
#define CLLTVP3033_CURICTL_CURICTL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CURICTL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CURICTL_MODESEL          (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CURICTL_CRAMA98          (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_CURICTL_VDETECT          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_CURICTL_INTRLACE         (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_CURICTL_FIELDINV         (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_CURICTL_REGSEL           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_LTCHCTL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x0FL))
#define CLLTVP3033_LTCHCTL_LTCHCTL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_LTCHCTL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_SYSCNFG                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x10L))
#define CLLTVP3033_SYSCNFG_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_SYSCNFG_BUSCNFG          (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_SYSCNFG_GAMMA            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_SYSCNFG_ENDIAN           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_SYSCNFG_RSVD             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_SYSCNFG_OLAYSEL          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_SYSCNFG_RAMINPUT         (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_SYSCNFG_VGAMODE          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_ITLVCTL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x11L))
#define CLLTVP3033_ITLVCTL_ITLVCTL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_ITLVCTL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_PPACTL1                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x18L))
#define CLLTVP3033_PPACTL1_PPACTL1          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PPACTL1_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PPACTL1_BUSWIDTH         (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PPACTL1_COLDEPTH         (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_PPACTL1_HZOOM            (((0x03L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))

#define CLLTVP3033_PPACTL2                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x19L))
#define CLLTVP3033_PPACTL2_PPACTL2          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PPACTL2_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_CLKCNTL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x1AL))
#define CLLTVP3033_CLKCNTL_CLKCNTL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CLKCNTL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CLKCNTL_CLKSRC           (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CLKCNTL_LCLKSRC          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_CLKCNTL_MCLKSTB          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_CLKCNTL_MCLKSIG          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_CLKCNTL_MCLKSIGSTB       (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_CLKCNTL_RCKASIG          (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))

#define CLLTVP3033_PALPAGE                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x1CL))
#define CLLTVP3033_PALPAGE_PALPAGE          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PALPAGE_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GENCTL1                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x1DL))
#define CLLTVP3033_GENCTL1_GENCTL1          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GENCTL1_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GENCTL1_HSINV            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GENCTL1_VSINV            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_GENCTL1_DACBITS          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_GENCTL1_PEDESTAL         (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_GENCTL1_SOGENBL          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_GENCTL1_OVSENBL          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))

#define CLLTVP3033_PWRCNTL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x1EL))
#define CLLTVP3033_PWRCNTL_PWRCNTL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PWRCNTL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PWRCNTL_DACPWR           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_PWRCNTL_RAMPWR           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_PWRCNTL_PULLUPS          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_VEICNTL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x1FL))
#define CLLTVP3033_VEICNTL_VEICNTL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VEICNTL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VEICNTL_HSINVRT          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VEICNTL_VSINVRT          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_VEICNTL_VEIENBL          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_CSCJ1                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x20L))
#define CLLTVP3033_CSCJ1_CSCJ1              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ1_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ1_B0                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ1_B1                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_CSCJ1_B2                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_CSCJ1_B3                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_CSCJ1_B4                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_CSCJ1_B5                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_CSCJ1_B6                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_CSCJ1_B7                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_CSCJ2                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x21L))
#define CLLTVP3033_CSCJ2_CSCJ2              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ2_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ2_B0                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ2_B1                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_CSCJ2_B2                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_CSCJ2_B3                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_CSCJ2_B4                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_CSCJ2_B5                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_CSCJ2_B6                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_CSCJ2_B7                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_CSCJ3                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x22L))
#define CLLTVP3033_CSCJ3_CSCJ3              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ3_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ3_B0                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ3_B1                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_CSCJ3_B2                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_CSCJ3_B3                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_CSCJ3_B4                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_CSCJ3_B5                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_CSCJ3_B6                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_CSCJ3_B7                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_CSCJ4                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x23L))
#define CLLTVP3033_CSCJ4_CSCJ4              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ4_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ4_B0                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CSCJ4_B1                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_CSCJ4_B2                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_CSCJ4_B3                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_CSCJ4_B4                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_CSCJ4_B5                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_CSCJ4_B6                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_CSCJ4_B7                 (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_BRCTL1                   (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x24L))
#define CLLTVP3033_BRCTL1_BRCTL1            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_BRCTL1_ALL               (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_BRCTL1_UVORDER           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_BRCTL1_YCORDER           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_BRCTL1_NUMYBITS          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_BRCTL1_BLUSEL1           (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_BRCTL1_GRNSEL1           (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))

#define CLLTVP3033_BRCTL2                   (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x25L))
#define CLLTVP3033_BRCTL2_BRCTL2            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_BRCTL2_ALL               (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_BRCTL2_REDSEL1           (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_BRCTL2_BLUSEL2           (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_BRCTL2_GRNSEL2           (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_BRCTL2_REDSEL2           (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))

#define CLLTVP3033_PLLSNCB                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x2BL))
#define CLLTVP3033_PLLSNCB_PLLSNCB          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLSNCB_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLSNCB_N              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0x00 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLSNCB_M              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0x55 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLSNCB_P              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0xaa << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLSNCB_S              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0xff << CLLTVP3033_SHIFT_VALUE )

#define CLLTVP3033_PLLADDR                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x2CL))
#define CLLTVP3033_PLLADDR_PLLADDR          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLADDR_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLADDR_PTRPCLK          (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLADDR_PTRMCLK          (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_PLLADDR_PTRSNCA          (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_PLLADDR_PTRSNCB          (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))

#define CLLTVP3033_PLLPCLK                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x2DL))
#define CLLTVP3033_PLLPCLK_PLLPCLK          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLPCLK_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLPCLK_N              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0x00 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLPCLK_M              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0x55 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLPCLK_P              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0xaa << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLPCLK_S              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0xff << CLLTVP3033_SHIFT_VALUE )

#define CLLTVP3033_PLLMCLK                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x2EL))
#define CLLTVP3033_PLLMCLK_PLLMCLK          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLMCLK_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLMCLK_N              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0x00 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLMCLK_M              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0x55 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLMCLK_P              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0xaa << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLMCLK_S              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0xff << CLLTVP3033_SHIFT_VALUE )

#define CLLTVP3033_PLLSNCA                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x2FL))
#define CLLTVP3033_PLLSNCA_PLLSNCA          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLSNCA_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PLLSNCA_N              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0x00 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLSNCA_M              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0x55 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLSNCA_P              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0xaa << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_PLLSNCA_S              (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_PLL_MASK ) | 0xff << CLLTVP3033_SHIFT_VALUE )

#define CLLTVP3033_VIDMASK                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x30L))
#define CLLTVP3033_VIDMASK_VIDMASK          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VIDMASK_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_VIDKEY                   (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x31L))
#define CLLTVP3033_VIDKEY_VIDKEY            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VIDKEY_ALL               (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_REDRNGL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x32L))
#define CLLTVP3033_REDRNGL_REDRNGL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_REDRNGL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_REDRNGH                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x33L))
#define CLLTVP3033_REDRNGH_REGRNGH          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_REDRNGH_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GRNRNGL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x34L))
#define CLLTVP3033_GRNRNGL_GRNRNGL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GRNRNGL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GRNRNGH                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x35L))
#define CLLTVP3033_GRNRNGH_GRNRNGH          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GRNRNGH_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_BLURNGL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x36L))
#define CLLTVP3033_BLURNGL_BLURNGL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_BLURNGL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_BLURNGH                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x37L))
#define CLLTVP3033_BLURNGH_BLURNGH          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_BLURNGH_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_KEYCTL1                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x38L))
#define CLLTVP3033_KEYCTL1_KEYCTL1          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_KEYCTL1_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_KEYCTL2                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x39L))
#define CLLTVP3033_KEYCTL2_KEYCTL2          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_KEYCTL2_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_KEYCTL2_K4CLK            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_KEYCTL2_K3MUX            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_KEYCTL2_K2MUX            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_KEYCTL2_K1MUX            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_KEYCTL2_PAIRSEL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_SENSTST                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x3AL))
#define CLLTVP3033_SENSTST_SENSTST          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_SENSTST_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_SENSTST_BLUCMP           (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_SENSTST_GRNCMP           (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_SENSTST_REDCMP           (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_SENSTST_DISABLE          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_TSTDATA                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x3BL))
#define CLLTVP3033_TSTDATA_TSTDATA          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_TSTDATA_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_CRCLSB                   (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x3CL))
#define CLLTVP3033_CRCLSB_CRCLSB            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CRCLSB_ALL               (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_CRCMSB                   (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x3DL))
#define CLLTVP3033_CRCMSB_CRCMSB            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_CRCMSB_ALL               (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_CRCSEL                   (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x3EL) | CLLTVP3033_WRITE_ONLY_MASK)
#define CLLTVP3033_CRCSEL_CRCSEL            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L) | CLLTVP3033_WRITE_ONLY_MASK)
#define CLLTVP3033_CRCSEL_ALL               (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L) | CLLTVP3033_WRITE_ONLY_MASK)

#define CLLTVP3033_DEVID                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x3FL))
#define CLLTVP3033_DEVID_DEVID              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_DEVID_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GMRED                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x40L))
#define CLLTVP3033_GMRED_GMRED              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GMRED_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GMGRN                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x41L))
#define CLLTVP3033_GMGRN_GMGRN              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GMGRN_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GMBLU                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x42L))
#define CLLTVP3033_GMBLU_GMBLU              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GMBLU_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GKRED                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x44L))
#define CLLTVP3033_GKRED_GKRED              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GKRED_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GKGRN                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x45L))
#define CLLTVP3033_GKGRN_GKGRN              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GKGRN_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_GKBLU                    (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x46L))
#define CLLTVP3033_GKBLU_GKBLU              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_GKBLU_ALL                (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_PPBCTL1                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x48L))
#define CLLTVP3033_PPBCTL1_PPBCTL1          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PPBCTL1_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PPBCTL1_BUSWIDTH         (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PPBCTL1_COLDEPTH         (((0x02L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_PPBCTL1_HZOOM            (((0x03L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))

#define CLLTVP3033_PPBCTL2                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x49L))
#define CLLTVP3033_PPBCTL2_PPBCTL2          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_PPBCTL2_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_VGAADDR                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x4CL))
#define CLLTVP3033_VGAADDR_VGAADDR          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VGAADDR_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VGAADDR_VGAPPTR          (((0x03L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VGAADDR_VGASPTR          (((0x03L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))

#define CLLTVP3033_VGAPCLK                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x4DL))
#define CLLTVP3033_VGAPCLK_VGAPCLK          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VGAPCLK_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VGAPCLK_0N             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x00 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGAPCLK_0M             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x09 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGAPCLK_0P             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x12 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGAPCLK_0S             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x1b << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGAPCLK_1N             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x24 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGAPCLK_1M             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x2d << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGAPCLK_1P             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x36 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGAPCLK_1S             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x3f << CLLTVP3033_SHIFT_VALUE )

#define CLLTVP3033_VGASNCA                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x4FL))
#define CLLTVP3033_VGASNCA_VGASNCA          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VGASNCA_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_VGASNCA_0N             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x00 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGASNCA_0M             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x09 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGASNCA_0P             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x12 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGASNCA_0S             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x1b << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGASNCA_1N             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x24 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGASNCA_1M             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x2d << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGASNCA_1P             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x36 << CLLTVP3033_SHIFT_VALUE )
#define CLLTVP3033_VGASNCA_1S             (((((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L)) | CLLTVP3033_VGA_MASK ) | 0x3f << CLLTVP3033_SHIFT_VALUE )

#define CLLTVP3033_WINSTXL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x50L))
#define CLLTVP3033_WINSTXL_WINSTXL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTXL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTXL_STARTXL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_WINSTXM                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x51L))
#define CLLTVP3033_WINSTXM_WINSTXM          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTXM_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTXM_STARTXM          (((0x04L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_WINWIDL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x52L))
#define CLLTVP3033_WINWIDL_WINWIDL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINWIDL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINWIDL_WIDTHL           (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_WINWIDM                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x53L))
#define CLLTVP3033_WINWIDM_WINWIDM          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINWIDM_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINWIDM_WIDTHM           (((0x04L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_WINSTYL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x54L))
#define CLLTVP3033_WINSTYL_WINSTYL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTYL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTYL_STRATYL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_WINSTYM                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x55L))
#define CLLTVP3033_WINSTYM_WINSTYM          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTYM_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTYM_STARTYM          (((0x04L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINSTYM_WINENBL          (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_WINHGTL                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x56L))
#define CLLTVP3033_WINHGTL_WINHGTL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINHGTL_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINHGTL_HEIGHTL          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_WINHDTM                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x57L))
#define CLLTVP3033_WINHDTM_WINHDTM          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINHDTM_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_WINHDTM_HEIGHTM          (((0x04L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_TAGKEY                   (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x59L))
#define CLLTVP3033_TAGKEY_TAGKEY            (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_TAGKEY_ALL               (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))

#define CLLTVP3033_DACFCN1                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x5AL))
#define CLLTVP3033_DACFCN1_DACFCN1          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_DACFCN1_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_DACFCN1_INVERT           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_DACFCN1_ANDOR            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_DACFCN1_P2INV            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_DACFCN1_P1INV            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_DACFCN1_K41              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_DACFCN1_K31              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_DACFCN1_K21              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_DACFCN1_K11              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_DACFCN2                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x5BL))
#define CLLTVP3033_DACFCN2_DACFCN2          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_DACFCN2_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_DACFCN2_K4M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_DACFCN2_K3M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_DACFCN2_K2M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_DACFCN2_K1M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_DACFCN2_K4M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_DACFCN2_K3M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_DACFCN2_K2M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_DACFCN2_K1M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_ITPFCN1                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x5CL))
#define CLLTVP3033_ITPFCN1_ITPFCN1          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_ITPFCN1_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_ITPFCN1_INVERT           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_ITPFCN1_ANDOR            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_ITPFCN1_P2INV            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_ITPFCN1_P1INV            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_ITPFCN1_K41              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_ITPFCN1_K31              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_ITPFCN1_K21              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_ITPFCN1_K11              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_ITPFCN2                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x5DL))
#define CLLTVP3033_ITPFCN2_ITPFCN2          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_ITPFCN2_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_ITPFCN2_K4M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_ITPFCN2_K3M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_ITPFCN2_K2M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_ITPFCN2_K1M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_ITPFCN2_K4M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_ITPFCN2_K3M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_ITPFCN2_K2M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_ITPFCN2_K1M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_AMXFCN1                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x5EL))
#define CLLTVP3033_AMXFCN1_AMXFCN1          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_AMXFCN1_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_AMXFCN1_INVERT           (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_AMXFCN1_ANDOR            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_AMXFCN1_P2INV            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_AMXFCN1_P1INV            (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_AMXFCN1_K41              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_AMXFCN1_K31              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_AMXFCN1_K21              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_AMXFCN1_K11              (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_AMXFCN2                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0x5FL))
#define CLLTVP3033_AMXFCN2_AMXFCN2          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_AMXFCN2_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_AMXFCN2_K4M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L))
#define CLLTVP3033_AMXFCN2_K3M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x01L))
#define CLLTVP3033_AMXFCN2_K2M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x02L))
#define CLLTVP3033_AMXFCN2_K1M2             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x03L))
#define CLLTVP3033_AMXFCN2_K4M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x04L))
#define CLLTVP3033_AMXFCN2_K3M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x05L))
#define CLLTVP3033_AMXFCN2_K2M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x06L))
#define CLLTVP3033_AMXFCN2_K1M1             (((0x01L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x07L))

#define CLLTVP3033_SOFTRST                  (((CLLTVP3033_INDXDAT    << CLLTVP3033_SHIFT_DATA_INDEX) | 0xFFL) | CLLTVP3033_WRITE_ONLY_MASK)
#define CLLTVP3033_SOFTRST_SOFTRST          (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L) | CLLTVP3033_WRITE_ONLY_MASK)
#define CLLTVP3033_SOFTRST_ALL              (((0x08L                 << CLLTVP3033_SHIFT_FIELD_SIZE) | 0x00L) | CLLTVP3033_WRITE_ONLY_MASK)

//===========================================================================
//
//          Definition of registers for IC2061
//
//===========================================================================

#define CLLIC2061_SHIFT_FIELD_SIZE        0x05L
#define CLLIC2061_FIELD_OFFSET_MASK       0x1FL
#define CLLIC2061_FIELD_SIZE_MASK         0x3FL
#define CLLIC2061_SHIFT_WRITE_ONLY        0x10L
#define CLLIC2061_SHIFT_FIELD_SIZE        0x05L
#define CLLIC2061_FIELD_OFFSET_MASK       0x1FL
#define CLLIC2061_FIELD_SIZE_MASK         0x3FL
#define CLLIC2061_WRITE_ONLY              0x01L
#define CLLIC2061_WRITE_ONLY_MASK         (CLLIC2061_WRITE_ONLY << CLLIC2061_SHIFT_WRITE_ONLY)

#define CLLIC2061_MAX_NB_REGISTER         0x07L

#define CLLIC2061_REG0                    0x00L
#define CLLIC2061_REG0_ALL              (((0x15L           << CLLIC2061_SHIFT_FIELD_SIZE) | 0x00L) | CLLIC2061_WRITE_ONLY_MASK)

#define CLLIC2061_REG1                    0x01L
#define CLLIC2061_REG1_ALL              (((0x15L           << CLLIC2061_SHIFT_FIELD_SIZE) | 0x00L) | CLLIC2061_WRITE_ONLY_MASK)

#define CLLIC2061_REG2                    0x02L
#define CLLIC2061_REG2_ALL              (((0x15L           << CLLIC2061_SHIFT_FIELD_SIZE) | 0x00L) | CLLIC2061_WRITE_ONLY_MASK)

#define CLLIC2061_MREG                    0x03L
#define CLLIC2061_MREG_ALL              (((0x15L           << CLLIC2061_SHIFT_FIELD_SIZE) | 0x00L) | CLLIC2061_WRITE_ONLY_MASK)

#define CLLIC2061_PWRDWN                  0x04L
#define CLLIC2061_PWRDWN_ALL            (((0x15L           << CLLIC2061_SHIFT_FIELD_SIZE) | 0x00L) | CLLIC2061_WRITE_ONLY_MASK)

#define CLLIC2061_CNTL                    0x06L
#define CLLIC2061_CNTL_ALL              (((0x15L           << CLLIC2061_SHIFT_FIELD_SIZE) | 0x00L) | CLLIC2061_WRITE_ONLY_MASK)

//===========================================================================
//
//          Definition of registers for Rainbow Runner
//
//===========================================================================

#define CLLRR_EXPANSION            0x3E00L
#define CLLRR_SHIFT_DATA_INDEX       0x08L
#define CLLRR_SHIFT_DATA_INDEX_MASK  0xFFL
#define CLLRR_SHIFT_WRITE_ONLY       0x10L
#define CLLRR_SHIFT_FIELD_SIZE       0x05L
#define CLLRR_FIELD_OFFSET_MASK      0x1FL
#define CLLRR_FIELD_SIZE_MASK        0x3FL
#define CLLRR_WRITE_ONLY             0x01L
#define CLLRR_WRITE_ONLY_MASK        (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY)

#define CLLRR_INTSTAT                0x00L // ShadowInstStat
#define CLLRR_INDEX                  0x02L // ShadowIndex
#define CLLRR_ARBITERDAT             0x04L // Shadow index 0
#define CLLRR_DMADAT                 0x08L // Shadow index 1
#define CLLRR_MCTLDAT                0x0CL // Shadow index 2
#define CLLRR_MPEGDAT                0x10L // Shadow index 3
#define CLLRR_SCALERDAT              0x14L // Shadow index 4
#define CLLRR_VIDEODAT               0x18L // Shadow index 5
#define CLLRR_NB_SECTION             0x06L
#define CLLRR_MAX_NB_REGISTER        0x100L

// INTSTAT register
#define CLLRR_INTSTAT_VSYNCINT          ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_INTSTAT_MEMCMDSTAT        ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLRR_INTSTAT_BLEVELSTAT        ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLRR_INTSTAT_RESERVED          ((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLRR_INTSTAT_PLLLOCK           ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLRR_INTSTAT_ALL               ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

// INTDEX register
#define CLLRR_INDEX_INDEX              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INDEX_ALL                (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

// ARBITERDAT registers
#define CLLRR_PRIORTIM                 (((CLLRR_ARBITERDAT << CLLRR_SHIFT_DATA_INDEX) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PRIORTIM_PRIORTIM        (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PRIORTIM_ALL             (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

// DMADAT registers
#define CLLRR_CHIPREV                   ((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x10L)
#define CLLRR_CHIPREV_CHIPID            ((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_CHIPREV_REGVERIFY         ((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLRR_CHIPREV_ALL               ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_DMAADDR                  (((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMAADDR_DMAADDR          (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMAADDR_RESERVED         (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMAADDR_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_DMACTRL                  (((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_DMAEN            (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_DMAMODE          (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_CMDEXECTRIG      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_DATADIR          (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_RESERVED4        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_STOPDMA          (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x05L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_DMATRANSEN       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x06L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_RESERVED7        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMACTRL_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_DMAHARDPTR                ((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x08L)
#define CLLRR_DMAHARDPTR_DMAHARDPTR     ((0x0FL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_DMAHARDPTR_RESERVED       ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0FL)
#define CLLRR_DMAHARDPTR_ALL            ((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_DMAHOSTPTR               (((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x0AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMAHOSTPTR_DMAHOSTPTR    (((0x0EL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMAHOSTPTR_RESERVED      (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_DMAHOSTPTR_ALL           (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_DMALCODE                  ((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x06L)
#define CLLRR_DMALCODE_DMAHARDPTR       ((0x0FL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_DMALCODE_RESERVED         ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0FL)
#define CLLRR_DMALCODE_ALL              ((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_IDMAEN                   (((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IDMAEN_MEMCMDEN          (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IDMAEN_BLEVELEN          (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IDMAEN_RESERVED          (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IDMAEN_ALL               (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_IDMAMSK                  (((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IDMAMSK_MEMCMDMSK        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IDMAMSK_BLEVELMSK        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IDMAMSK_RESERVED         (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IDMAMSK_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_IDMASTAT                  ((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x01L)
#define CLLRR_IDMASTAT_MEMCMDSTAT       ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_IDMASTAT_BLEVELSTAT       ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLRR_IDMASTAT_RESERVED         ((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLRR_IDMASTAT_ALL              ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_MISCIO                    ((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x0EL)
#define CLLRR_MISCIO_MISCIO0            ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_MISCIO_MISCIO1            ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLRR_MISCIO_MISCIO2            ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLRR_MISCIO_MISCIO3            ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLRR_MISCIO_RESERVED           ((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLRR_MISCIO_MISCIO01           ((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_MISCIO_ALL                ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_MISCIOEN                 (((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x0FL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCIOEN_MISCIO0         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCIOEN_MISCIO1         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCIOEN_MISCIO2         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCIOEN_MISCIO3         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCIOEN_RESERVED        (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCIOEN_MISCIO01        (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCIOEN_ALL             (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_MISCOUT                  (((CLLRR_DMADAT     << CLLRR_SHIFT_DATA_INDEX) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_MISCOUT0         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_MISCOUT1         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_MISCOUT2         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_MISCOUT3         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_MISCOUT4         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_MISCOUT5         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x05L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_MISCOUT6         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x06L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_MISCOUT7         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MISCOUT_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

// MCTLDAT registers
#define CLLRR_MEMCONFIG                (((CLLRR_MCTLDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_MEMTYPE        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_MEMORG         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_SPLITMOD       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_INTLEAVEEN     (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_ADDRMSK        (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_RESERVED7      (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_CASLATEN       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x10L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_TRAS           (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x11L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_TWR            (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x13L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_TRRD           (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x14L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_TRP            (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x15L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_RESERVED22     (((0x0AL            << CLLRR_SHIFT_FIELD_SIZE) | 0x16L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MEMCONFIG_ALL            (((0x20L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

// MPEGDAT registers
#define CLLRR_MPEGRST                   ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x28L)
#define CLLRR_MPEGRST_MPEGRST           ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_MPEGRST_RESERVED          ((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLRR_MPEGRST_MPEGEN            ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLRR_MPEGRST_ALL               ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_AUDCTRL                  (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x48L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDCTRL_USEDMA           (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDCTRL_RESERVED         (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDCTRL_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_AUDSTAT                   ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x08L)
#define CLLRR_AUDSTAT_AUDHEAD           ((0x14L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_AUDSTAT_RESERVED20        ((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x14L)
#define CLLRR_AUDSTAT_AUDIDLE           ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x18L)
#define CLLRR_AUDSTAT_SYNCOK            ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x19L)
#define CLLRR_AUDSTAT_CRCERR            ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x1AL)
#define CLLRR_AUDSTAT_RESERVED27        ((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x1BL)
#define CLLRR_AUDSTAT_ALL               ((0x20L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_AUDADDR                  (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDADDR_AUDADDR          (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDADDR_RESERVED         (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDADDR_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_AUDRD                     ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x05L)
#define CLLRR_AUDRD_AUDRD               ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_AUDRD_ALL                 ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_AUDWR                    (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDWR_AUDWR              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDWR_ALL                (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_PCMRD                    (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PCMRD_PCMRD              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PCMRD_ALL                (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_PCMWR                     ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x04L)
#define CLLRR_PCMWR_PCMWR               ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_PCMWR_ALL                 ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_AUDPTSREF                (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDPTSREF_AUDPTSREF      (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_AUDPTSREF_ALL            (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_AUDPTSSTAT                ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x01L)
#define CLLRR_AUDPTSSTAT_AUDPTSSTAT     ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_AUDPTSSTAT_RESERVED       ((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLRR_AUDPTSSTAT_ALL            ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_PCMPTSREF                 ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x06L)
#define CLLRR_PCMPTSREF_PCMPTSREF       ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_PCMPTSREF_ALL             ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_VIDCMPRSADDR              ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x34L)
#define CLLRR_VIDCMPRSADDR_VIDCMPRSADDR ((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_VIDCMPRSADDR_RESERVED     ((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL)
#define CLLRR_VIDCMPRSADDR_ALL          ((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_VIDCMPRSSIZ               ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x38L)
#define CLLRR_VIDCMPRSSIZ_VIDCMPRSSIZ   ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_VIDCMPRSSIZ_ALL           ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_VIDADDR                  (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x36L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDADDR_VIDADDR          (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDADDR_RESERVED         (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDADDR_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VIDPICSIZ                (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x3AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDPICSIZ_VIDPICSIZ      (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDPICSIZ_RESERVED       (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDPICSIZ_ALL            (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VIDCMPRSRDL               ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x3CL)
#define CLLRR_VIDCMPRSRDL_VIDCMPRSRDL   ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_VIDCMPRSRDL_ALL           ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_VIDCMPRSRDH               ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x3EL)
#define CLLRR_VIDCMPRSRDH_VIDCMPRSRDH   ((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_VIDCMPRSRDH_RESERVED      ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLRR_VIDCMPRSRDH_ALL           ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_VIDCMPRSWRH               ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x42L)
#define CLLRR_VIDCMPRSWRH_VIDCMPRSRDH   ((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_VIDCMPRSWRH_RESERVED      ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLRR_VIDCMPRSWRH_ALL           ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_VIDCMPRSWRL               ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x40L)
#define CLLRR_VIDCMPRSWRL_VIDCMPRSWRL   ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_VIDCMPRSWRL_ALL           ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_SCRL                      ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x2CL)
#define CLLRR_SCRL_SCRL                 ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_SCRL_ALL                  ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_SCRM                      ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x2EL)
#define CLLRR_SCRM_SCRM                 ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_SCRM_ALL                  ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_SCRH                      ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x30L)
#define CLLRR_SCRH_SCRH                 ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_SCRH_ALL                  ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_SYNCWAIT                  ((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x44L)
#define CLLRR_SYNCWAIT_SYNCWAIT         ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_SYNCWAIT_ALL              ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_PLLM                     (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x10L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLM_PLLM                (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLM_RESERVED            (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x05L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLM_ALL                 (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_PLLN                     (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x12L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLN_PLLN                (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLN_RESERVED            (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLN_ALL                 (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_PLLCTRL                  (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x14L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLCTRL_PLLP             (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLCTRL_PLLS             (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLCTRL_BGEN             (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x05L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLCTRL_BGPDN            (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x06L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLCTRL_PLLEN            (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PLLCTRL_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CLKCTRL                  (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x21L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKCTRL_CLKSEL           (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKCTRL_VINCLKEN         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKCTRL_VOUTCLKEN        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKCTRL_SCALDIV3         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKCTRL_MPEGDIV          (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKCTRL_RESERVED         (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x06L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKCTRL_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_PCMDIV                   (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x20L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PCMDIV_PCMDIV            (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_PCMDIV_ALL               (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_R90KDIV                  (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x22L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_R90KDIV_R90KDIV          (((0x0EL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_R90KDIV_RESERVED         (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_R90KDIV_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CLKEN                    (((CLLRR_MPEGDAT    << CLLRR_SHIFT_DATA_INDEX) | 0x24L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKEN_CLKEN              (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKEN_RESERVED           (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CLKEN_ALL                (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

// SCALERDAT registers
#define CLLRR_SCALRST                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALRST_SCALRST          (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALRST_RESERVED         (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALRST_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPADDR0                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPADDR0_INPADDR0        (((0x0FL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPADDR0_RESERVED        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0FL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPADDR0_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPPITCH0                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPPITCH0_INPPITCH0      (((0x0CL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPPITCH0_RESERVED       (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPPITCH0_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPUOFFSET0              (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x06L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPUOFFSET0_INPUOFFSET0  (((0x0CL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPUOFFSET0_RESERVED     (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPUOFFSET0_ALL          (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPVOFFSET0              (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x08L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPVOFFSET0_INPVOFFSET0  (((0x14L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPVOFFSET0_RESERVED     (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x14L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPVOFFSET0_ALL          (((0x18L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPCTRL0                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_INSRC0          (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_PIXFMT0         (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_VITCCCDAT0      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_FRAMMODE0       (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x08L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_GRABMOD0        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_WINCTRL0        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_VBIPASSTHRU     (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_RESERVED        (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL0_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CROPLEFT0                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x10L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPLEFT0_CROPLEFT0      (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPLEFT0_RESERVED       (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPLEFT0_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CROPRIGHT0               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x12L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPRIGHT0_CROPRIGHT0    (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPRIGHT0_RESERVED      (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPRIGHT0_ALL           (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CROPTOP0                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x14L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPTOP0_CROPTOP0        (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPTOP0_RESERVED        (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPTOP0_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CROPBOTTOM0              (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x16L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPBOTTOM0_CROPBOTTOM0  (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPBOTTOM0_RESERVED     (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPBOTTOM0_ALL          (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VSCALE0                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x18L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VSCALE0_VSCALE0          (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VSCALE0_VSCALDIR0        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VSCALE0_RESERVED         (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VSCALE0_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_HSCALE0                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x1AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSCALE0_HSCALE0          (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSCALE0_HSCALDIR0        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSCALE0_RESERVED         (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSCALE0_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_SCALERCTRL0              (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x1CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALERCTRL0_SCALORD0     (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALERCTRL0_HQSCALEN0	   (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALERCTRL0_RESERVED     (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALERCTRL0_ALL          (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCBRIGHT0               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x1EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBRIGHT0_CSCBRIGHT0    (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBRIGHT0_ALL           (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCY0                    (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x1FL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCY0_CSCY0              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCY0_ALL                (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCBLUEV0                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x20L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEV0_CSCBLUEV0      (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEV0_RESERVED       (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEV0_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCBLUEU0                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x22L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEU0_CSCBLUEU0      (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEU0_RESERVED       (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEU0_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCGREENV0               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x24L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENV0_CSCGREENV0    (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENV0_RESERVED      (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENV0_ALL           (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCGREENU0               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x26L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENU0_CSCGREENU0    (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENU0_RESERVED      (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENU0_ALL           (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCREDV0                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x28L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDV0_CSCREDV0        (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDV0_RESERVED        (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDV0_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCREDU0                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x2AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDU0_CSCREDU0        (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDU0_RESERVED        (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDU0_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_OUTMODE0                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x2CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_RESERVED0       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_HMIRROR0        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_VMIRROR0        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_INTERLACED0     (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_FORMAT0         (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_GAMMADIS0       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x08L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_OCCLUDEN0       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_DITHEN0         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_TEXTOUTEN0      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_VBIPASSTHRU0    (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_RESERVED13      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_FLOWEN0         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_RESERVED15      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0FL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_KEYBEN0         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x10L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_KEYALPHA0       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x11L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_RESERVED18      (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x12L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE0_ALL             (((0x18L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_OUTADDR0                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x30L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTADDR0_OUTADDR0        (((0x17L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTADDR0_RESERVED        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x17L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTADDR0_ALL             (((0x18L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_OUTPITCH0                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x34L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTPITCH0_OUTPITCH0      (((0x0AL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTPITCH0_RESERVED       (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTPITCH0_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_MASKADDR0                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x36L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MASKADDR0_MASKADDR0      (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MASKADDR0_RESERVED       (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MASKADDR0_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VBIEADDR                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x38L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VBIEADDR_VBIEADDR        (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VBIEADDR_RESERVED        (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VBIEADDR_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VBIOADDR                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x3AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VBIOADDR_VBIOADDR        (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VBIOADDR_RESERVED        (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VBIOADDR_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VBICMP                   (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x3CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VBICMP_VBICMP            (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VBICMP_ALL               (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPADDR1                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x42L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPADDR1_INPADDR1        (((0x0FL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPADDR1_RESERVED        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0FL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPADDR1_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPPITCH1                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x44L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPPITCH1_INPPITCH1      (((0x0CL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPPITCH1_RESERVED       (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPPITCH1_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPUOFFSET1              (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x48L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPUOFFSET1_INPUOFFSET1  (((0x0CL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPUOFFSET1_RESERVED     (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPUOFFSET1_ALL          (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPVOFFSET1              (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x48L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPVOFFSET1_INPVOFFSET1  (((0x14L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPVOFFSET1_RESERVED     (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x14L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPVOFFSET1_ALL          (((0x18L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPCTRL1                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x4CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL1_INSRC1          (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL1_PIXFMT1         (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL1_RESERVED7       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL1_FRAMMODE1       (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x08L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL1_GRABMOD1        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL1_WINCTRL1        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL1_RESERVED12      (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPCTRL1_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CROPLEFT1                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x50L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPLEFT1_CROPLEFT1      (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPLEFT1_RESERVED       (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPLEFT1_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CROPRIGHT1               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x52L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPRIGHT1_CROPRIGHT1    (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPRIGHT1_RESERVED      (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPRIGHT1_ALL           (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CROPTOP1                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x54L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPTOP1_CROPTOP1        (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPTOP1_RESERVED        (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPTOP1_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CROPBOTTOM1              (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x56L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPBOTTOM1_CROPBOTTOM1  (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPBOTTOM1_RESERVED     (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CROPBOTTOM1_ALL          (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VSCALE1                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x58L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VSCALE1_VSCALE1          (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VSCALE1_VSCALDIR1        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VSCALE1_RESERVED         (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VSCALE1_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_HSCALE1                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x5AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSCALE1_HSCALE1          (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSCALE1_HSCALDIR1        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSCALE1_RESERVED         (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSCALE1_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_SCALERCTRL1              (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x5CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALERCTRL1_SCALORD1     (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALERCTRL1_HQSCALEN1    (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALERCTRL1_RESERVED     (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_SCALERCTRL1_ALL          (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCBRIGHT1               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x5EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBRIGHT1_CSCBRIGHT1    (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBRIGHT1_ALL           (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCY1                    (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x5FL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCY1_CSCY1              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCY1_ALL                (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCBLUEV1                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x60L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEV1_CSCBLUEV1      (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEV1_RESERVED       (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEV1_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCBLUEU1                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x62L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEU1_CSCBLUEU1      (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEU1_RESERVED       (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCBLUEU1_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCGREENV1               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x64L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENV1_CSCGREENV1    (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENV1_RESERVED      (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENV1_ALL           (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCGREENU1               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x66L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENU1_CSCGREENU1    (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENU1_RESERVED      (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCGREENU1_ALL           (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCREDV1                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x68L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDV1_CSCREDV1        (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDV1_RESERVED        (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDV1_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCREDU1                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x6AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDU1_CSCREDU1        (((0x09L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDU1_RESERVED        (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCREDU1_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_OUTMODE1                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x6CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_RESERVED0       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_HMIRROR1        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_VMIRROR1        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_INTERLACED1     (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_FORMAT1         (((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_GAMMADIS1       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x08L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_OCCLUDEN1       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x09L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_DITHEN1         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_TEXTOUTEN1      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_VBIPASSTHRU1    (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_RESERVED13      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_FLOWEN1         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_RESERVED15      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0FL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_KEYBEN1         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x10L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_KEYALPHA1       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x11L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_RESERVED18      (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x12L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTMODE1_ALL             (((0x18L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_OUTADDR1                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x70L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTADDR1_OUTADDR1        (((0x17L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTADDR1_RESERVED        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x17L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTADDR1_ALL             (((0x18L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_OUTPITCH1                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x74L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTPITCH1_OUTPITCH1      (((0x0AL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTPITCH1_RESERVED       (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_OUTPITCH1_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_MASKADDR1                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x76L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MASKADDR1_MASKADDR1      (((0x0DL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MASKADDR1_RESERVED       (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0DL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_MASKADDR1_ALL            (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_KEYBMIN                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x80L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYBMIN_KEYBMIN          (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYBMIN_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_KEYBMAX                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x81L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYBMAX_KEYBMAX          (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYBMAX_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_KEYGMIN                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x82L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYGMIN_KEYGMIN          (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYGMIN_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_KEYGMAX                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x83L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYGMAX_KEYGMAX          (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYGMAX_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_KEYRMIN                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x84L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYRMIN_KEYRMIN          (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYRMIN_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_KEYRMAX                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x85L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYRMAX_KEYRMAX          (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_KEYRMAX_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_RDPACING                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x89L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_RDPACING_RDPACING        (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_RDPACING_RESERVED        (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x05L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_RDPACING_ALL             (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_HSYNCDEL                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x8CL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSYNCDEL_HSYNCDEL        (((0x0AL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSYNCDEL_RESERVED        (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSYNCDEL_ALL             (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_HSYNCSTART               (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x8EL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSYNCSTART_HSYNCSTART    (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSYNCSTART_RESERVED      (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_HSYNCSTART_ALL           (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_CSCCTRL                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x92L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCCTRL_BYPASSEN0        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCCTRL_BYPASSEN1        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCCTRL_RESERVED         (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_CSCCTRL_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPMODE                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x93L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPMODE_VSYNCSRC         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPMODE_VIDINMASTSEL     (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPMODE_RESERVED         (((0x06L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_INPMODE_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_NEXTWIN                  (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x94L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_NEXTWIN_NEXTWIN          (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_NEXTWIN_RESERVED         (((0x07L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_NEXTWIN_ALL              (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_INPSTAT                   ((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x98L)
#define CLLRR_INPSTAT_WINACTV0          ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_INPSTAT_WINACTV1          ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLRR_INPSTAT_VSYNCINT          ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLRR_INPSTAT_VSYNCACC          ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLRR_INPSTAT_RESERVED          ((0x04L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLRR_INPSTAT_ALL               ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLRR_IVSYNCCLR                (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x99L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IVSYNCCLR_RESERVED0      (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IVSYNCCLR_IVSYNCCLR      (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IVSYNCCLR_RESERVED3      (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IVSYNCCLR_ALL            (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_IVSYNCEN                 (((CLLRR_SCALERDAT  << CLLRR_SHIFT_DATA_INDEX) | 0x9AL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IVSYNCEN_RESERVED0       (((0x02L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IVSYNCEN_IVSYNCINTEN     (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IVSYNCEN_RESERVED3       (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_IVSYNCEN_ALL             (((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

// VIDEODAT registers
#define CLLRR_VIDCTRL                  (((CLLRR_VIDEODAT   << CLLRR_SHIFT_DATA_INDEX) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_VIDOUTEN         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_SOFTRESET        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_FLICKREDEN       (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_SYNCDIR          (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_CLKDIR           (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_FIELDSEL         (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x05L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_SELPIX           (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x06L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_RESERVED7        (((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x07L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_PIXCLKXTEN       (((0x03L            << CLLRR_SHIFT_FIELD_SIZE) | 0x08L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_RESERVED11       (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDCTRL_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VIDHDEL                  (((CLLRR_VIDEODAT   << CLLRR_SHIFT_DATA_INDEX) | 0x04L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDHDEL_VIDHDEL          (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDHDEL_RESERVED         (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDHDEL_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VIDVDEL                  (((CLLRR_VIDEODAT   << CLLRR_SHIFT_DATA_INDEX) | 0x06L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDVDEL_VIDVDEL          (((0x0BL            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDVDEL_RESERVED         (((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x0BL) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))
#define CLLRR_VIDVDEL_ALL              (((0x10L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L) | (CLLRR_WRITE_ONLY << CLLRR_SHIFT_WRITE_ONLY))

#define CLLRR_VIDSTRAP                  ((CLLRR_VIDEODAT   << CLLRR_SHIFT_DATA_INDEX) | 0x08L)
#define CLLRR_VIDSTRAP_MPEGVIDEN        ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLRR_VIDSTRAP_MPEGAUDEN        ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLRR_VIDSTRAP_RAMTYPE          ((0x01L            << CLLRR_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLRR_VIDSTRAP_RESERVED         ((0x05L            << CLLRR_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLRR_VIDSTRAP_ALL              ((0x08L            << CLLRR_SHIFT_FIELD_SIZE) | 0x00L)

//===========================================================================
//
//          Definition of registers for SAA7111A
//
//===========================================================================


#define CLLSAA7111A_SHIFT_FIELD_SIZE      0x05L
#define CLLSAA7111A_FIELD_OFFSET_MASK     0x1FL
#define CLLSAA7111A_FIELD_SIZE_MASK       0x3FL
#define CLLSAA7111A_MAX_NB_REGISTER       0x20L
#define CLLSAA7111A_ALL                 ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_DEVICE_ID             0x48L

#define CLLSAA7111A_CHIPVER               0x00L
#define CLLSAA7111A_CHIPVER_ID          ((0x04L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_CHIPVER_ALL         ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_RESERVED1             0x01L
#define CLLSAA7111A_RESERVED1_UNUSED    ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_RESERVED1_ALL       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_INCTRL1               0x02L
#define CLLSAA7111A_INCTRL1_MODE        ((0x03L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_INCTRL1_GUDL        ((0x03L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_INCTRL1_FUSE        ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_INCTRL1_ALL         ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_INCTRL2               0x03L
#define CLLSAA7111A_INCTRL2_GAI1        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_INCTRL2_GAI2        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLSAA7111A_INCTRL2_GAFIX       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_INCTRL2_HOLDG       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_INCTRL2_WPOFF       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_INCTRL2_VBSL        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLSAA7111A_INCTRL2_HLNRS       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_INCTRL2_UNUSED      ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLSAA7111A_INCTRL2_ALL         ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_INCTRL3               0x04L
#define CLLSAA7111A_INCTRL3_GAI1        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_INCTRL3_ALL         ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_INCTRL4               0x05L
#define CLLSAA7111A_INCTRL4_GAI2        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_INCTRL4_ALL         ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_HSYNCSTART            0x06L
#define CLLSAA7111A_HSYNCSTART_HSB      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_HSYNCSTART_ALL      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_HSYNCSTOP             0x07L
#define CLLSAA7111A_HSYNCSTOP_HSS       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_HSYNCSTOP_ALL       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_SYNCCTRL              0x08L
#define CLLSAA7111A_SYNCCTRL_VNOI       ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_SYNCCTRL_HPLL       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_SYNCCTRL_VTRC       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_SYNCCTRL_UNUSED     ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_SYNCCTRL_EXFIL      ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLSAA7111A_SYNCCTRL_FSEL       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_SYNCCTRL_AUFD       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLSAA7111A_SYNCCTRL_ALL        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_LUMCTRL               0x09L
#define CLLSAA7111A_LUMCTRL_APER        ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_LUMCTRL_UPTCV       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_LUMCTRL_VBLB        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_LUMCTRL_BPSS        ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_LUMCTRL_PREF        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_LUMCTRL_BYPS        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLSAA7111A_LUMCTRL_ALL         ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_LUMBRIGHT             0x0AL
#define CLLSAA7111A_LUMBRIGHT_BRIG      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_LUMBRIGHT_ALL       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_LUMCONT               0x0BL
#define CLLSAA7111A_LUMCONT_CONT        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_LUMCONT_ALL         ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_CHROMSAT              0x0CL
#define CLLSAA7111A_CHROMSAT_SATN       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_CHROMSAT_ALL        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_CHROMHUE              0x0DL
#define CLLSAA7111A_CHROMHUE_HUEC       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_CHROMHUE_ALL        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_CHROMCTRL             0x0EL
#define CLLSAA7111A_CHROMCTRL_CHBW      ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_CHROMCTRL_FCTC      ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_CHROMCTRL_DCCF      ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_CHROMCTRL_CSTD      ((0x03L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_CHROMCTRL_CDT       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLSAA7111A_CHROMCTRL_ALL       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_RESERVED15            0x0FL
#define CLLSAA7111A_RESERVED15_UNUSED   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_RESERVED15_ALL      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_FORMATDELCTRL         0x10L
#define CLLSAA7111A_FORMATDELCTRL_YDEL  ((0x03L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_FORMATDELCTRL_VRLN  ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_FORMATDELCTRL_HDEL  ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_FORMATDELCTRL_OFTS  ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_FORMATDELCTRL_ALL   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_OUTCTRL1              0x11L
#define CLLSAA7111A_OUTCTRL1_COLO       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_OUTCTRL1_VIPB       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLSAA7111A_OUTCTRL1_OEHV       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_OUTCTRL1_OEYC       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_OUTCTRL1_COMPO      ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_OUTCTRL1_FECO       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLSAA7111A_OUTCTRL1_CM99       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_OUTCTRL1_GPSW       ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLSAA7111A_OUTCTRL1_ALL        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_OUTCTRL2              0x12L
#define CLLSAA7111A_OUTCTRL2_AOSL       ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_OUTCTRL2_DIT        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_OUTCTRL2_RGB888     ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_OUTCTRL2_CBR        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_OUTCTRL2_UNUSED     ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLSAA7111A_OUTCTRL2_RTSE       ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_OUTCTRL2_ALL        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_OUTCTRL3              0x13L
#define CLLSAA7111A_OUTCTRL3_BCLO       ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_OUTCTRL3_BCHI       ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_OUTCTRL3_CCTRO      ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_OUTCTRL3_VCTR       ((0x02L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_OUTCTRL3_ALL        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_RESERVED20            0x14L
#define CLLSAA7111A_RESERVED20_UNUSED   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_RESERVED20_ALL      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_VBISTART              0x15L
#define CLLSAA7111A_VBISTART_VSTA       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_VBISTART_ALL        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_VBISTOP               0x16L
#define CLLSAA7111A_VBISTOP_VSTO        ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_VBISTOP_ALL         ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_VBIMSB                0x17L
#define CLLSAA7111A_VBIMSB_VSTA         ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_VBIMSB_VSTO         ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLSAA7111A_VBIMSB_UNUSED       ((0x06L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_VBIMSB_ALL          ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_RESERVED24            0x18L
#define CLLSAA7111A_RESERVED24_UNUSED   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_RESERVED24_ALL      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_RESERVED25            0x19L
#define CLLSAA7111A_RESERVED25_UNUSED   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_RESERVED25_ALL      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_TEXTSLICE             0x1AL
#define CLLSAA7111A_TEXTSLICE_F1RDY     ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_TEXTSLICE_F1VAL     ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLSAA7111A_TEXTSLICE_F2RDY     ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_TEXTSLICE_F2VAL     ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_TEXTSLICE_UNUSED    ((0x04L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_TEXTSLICE_ALL       ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_DECTEXTSLICE1         0x1BL
#define CLLSAA7111A_DECTEXTSLICE1_BYTE1 ((0x07L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_DECTEXTSLICE1_P1    ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLSAA7111A_DECTEXTSLICE1_ALL   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_DECTEXTSLICE2         0x1CL
#define CLLSAA7111A_DECTEXTSLICE2_BYTE2 ((0x07L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_DECTEXTSLICE2_P2    ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLSAA7111A_DECTEXTSLICE2_ALL   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_RESERVED29            0x1DL
#define CLLSAA7111A_RESERVED29_UNUSED   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_RESERVED29_ALL      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_RESERVED30            0x1EL
#define CLLSAA7111A_RESERVED30_UNUSED   ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_RESERVED30_ALL      ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLSAA7111A_STATUS                0x1FL
#define CLLSAA7111A_STATUS_CODE         ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLSAA7111A_STATUS_SLTCA        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLSAA7111A_STATUS_WIPA         ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLSAA7111A_STATUS_GLIMB        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLSAA7111A_STATUS_GLIMT        ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLSAA7111A_STATUS_FIDT         ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLSAA7111A_STATUS_HLCK         ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLSAA7111A_STATUS_STTC         ((0x01L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLSAA7111A_STATUS_ALL          ((0x08L           << CLLSAA7111A_SHIFT_FIELD_SIZE) | 0x00L)

//===========================================================================
//
//          Definition of registers for KS0127
//
//===========================================================================

#define CLLKS0127_SHIFT_FIELD_SIZE        0x05L
#define CLLKS0127_FIELD_OFFSET_MASK       0x1FL
#define CLLKS0127_FIELD_SIZE_MASK         0x3FL
#define CLLKS0127_MAX_NB_REGISTER         0x80L
#define CLLKS0127_ALL                   ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_DEVICE_ID               0xD8L

#define CLLKS0127_STAT                    0x00L
#define CLLKS0127_STAT_CLOCK            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_STAT_HLOCK            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_STAT_CDET             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_STAT_PALDET           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_STAT_FFRDET           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_STAT_NOVID            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_STAT_VBIFG            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_STAT_CHIPID           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_STAT_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CMDA                    0x01L
#define CLLKS0127_CMDA_IFMT             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CMDA_MNFMT            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_CMDA_PIXSEL           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_CMDA_XT24             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_CMDA_HFSEL            ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_CMDA_VSE              ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CMDA_POWDN            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_CMDA_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CMDB                    0x02L
#define CLLKS0127_CMDB_INSEL            ((0x04L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CMDB_AGCFRZ           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_CMDB_AGCOVF           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_CMDB_VALIGN           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CMDB_AGCGN            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_CMDB_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CMDC                    0x03L
#define CLLKS0127_CMDC_TSTGEN           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CMDC_TSTGFR           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_CMDC_TSTGPH           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_CMDC_TSTGPK           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_CMDC_UNUSED           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_CMDC_TSTGE1           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CMDC_VMEN             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_CMDC_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CMDD                    0x04L
#define CLLKS0127_CMDD_GPPORT           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CMDD_Y1MHZ            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_CMDD_SYNDIR           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_CMDD_INPSL            ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_CMDD_CKDIR            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_CMDD_UNUSED6          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CMDD_EAV              ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_CMDD_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HAVB                    0x05L
#define CLLKS0127_HAVB_HAVB             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HAVB_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HAVE                    0x06L
#define CLLKS0127_HAVE_HAVE             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HAVE_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HS1B                    0x07L
#define CLLKS0127_HS1B_HS1B             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HS1B_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HS1E                    0x08L
#define CLLKS0127_HS1E_HS1E             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HS1E_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HS2B                    0x09L
#define CLLKS0127_HS2B_HS2B             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HS2B_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HS2E                    0x0AL
#define CLLKS0127_HS2E_HS2E             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HS2E_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_AGC                     0x0BL
#define CLLKS0127_AGC_AGC               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_AGC_ALL               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HXTRA                   0x0CL
#define CLLKS0127_HXTRA_HS2B            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HXTRA_HS1B            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_HXTRA_HAVE            ((0x03L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_HXTRA_HAVB            ((0x03L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_HXTRA_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CDEM                    0x0DL
#define CLLKS0127_CDEM_CIFCMP           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_CDEM_FSEC             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CDEM_OUTHIZ           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_CDEM_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_PORTAB                  0x0EL
#define CLLKS0127_PORTAB_DATAA          ((0x03L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_PORTAB_DIRA           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_PORTAB_DATAB          ((0x03L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_PORTAB_DIRB           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_PORTAB_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_LUMA                    0x0FL
#define CLLKS0127_LUMA_HYPK             ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_LUMA_CTRAP            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_LUMA_HYBWR            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_LUMA_PED              ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_LUMA_RGBH             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_LUMA_UNIT             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_LUMA_UNUSED           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_LUMA_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CON                     0x10L
#define CLLKS0127_CON_CONT              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CON_ALL               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_BRT                     0x11L
#define CLLKS0127_BRT_BRT               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_BRT_ALL               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CHROMA                  0x12L
#define CLLKS0127_CHROMA_CKILL          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CHROMA_CORE           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_CHROMA_CBW            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_CHROMA_PALN           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_CHROMA_PALM           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CHROMA_ACCFRZ         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_CHROMA_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CHROMB                  0x13L
#define CLLKS0127_CHROMB_SCHCMP         ((0x04L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CHROMB_CDLY           ((0x04L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_CHROMB_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_DEMOD                   0x14L
#define CLLKS0127_DEMOD_MNSEC           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_DEMOD_MNFSC           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_DEMOD_CFC             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_DEMOD_CDMLPF          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_DEMOD_SECDET          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_DEMOD_FSCDET          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_DEMOD_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_SAT                     0x15L
#define CLLKS0127_SAT_SAT               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_SAT_ALL               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HUE                     0x16L
#define CLLKS0127_HUE_HUE               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HUE_ALL               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VERTIA                  0x17L
#define CLLKS0127_VERTIA_VFLTR          ((0x03L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VERTIA_VRT2X          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_VERTIA_YCMBCO         ((0x03L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_VERTIA_MNYCMB         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_VERTIA_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VERTIB                  0x18L
#define CLLKS0127_VERTIB_UNUSED         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VERTIB_VSCLEN         ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_VERTIB_HYDEC          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_VERTIB_HYBWI          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_VERTIB_HYLPF          ((0x03L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_VERTIB_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VERTIC                  0x19L
#define CLLKS0127_VERTIC_EVAVOD         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VERTIC_EVAVEV         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_VERTIC_VYBW           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_VERTIC_ACMBEN         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_VERTIC_CCMBCO         ((0x03L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_VERTIC_MNCCMB         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_VERTIC_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HSCLL                   0x1AL
#define CLLKS0127_HSCLL_CMBMOD          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HSCLL_HSCL            ((0x07L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_HSCLL_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_HSCLH                   0x1BL
#define CLLKS0127_HSCLH_HSCL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_HSCLH_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VSCLL                   0x1CL
#define CLLKS0127_VSCLL_ACMBRE          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VSCLL_ACMBCO          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_VSCLL_VSCL            ((0x06L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_VSCLL_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VSCLH                   0x1DL
#define CLLKS0127_VSCLH_VSCL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VSCLH_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_OFMTA                   0x1EL
#define CLLKS0127_OFMTA_OFMT            ((0x04L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_OFMTA_OENC            ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_OFMTA_GAMEN           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_OFMTA_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_OFMTB                   0x1FL
#define CLLKS0127_OFMTB_EVCK2           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_OFMTB_EVCK            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_OFMTB_EVEHAV          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_OFMTB_EVHAV           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_OFMTB_EVHS1           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_OFMTB_EVAND           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_OFMTB_VSVAV           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_OFMTB_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VBICTL                  0x20L
#define CLLKS0127_VBICTL_ODDOS          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VBICTL_EVENEN         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_VBICTL_ODDEN          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_VBICTL_VBINSRT        ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_VBICTL_VYFMT          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_VBICTL_VBCVBS         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_VBICTL_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CCDAT1                  0x21L
#define CLLKS0127_CCDAT1_CCDAT1         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CCDAT1_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CCDAT2                  0x22L
#define CLLKS0127_CCDAT2_CCDAT2         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CCDAT2_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VBIL30                  0x23L
#define CLLKS0127_VBIL30_VBIL0          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VBIL30_VBIL1          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_VBIL30_VBIL2          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_VBIL30_VBIL3          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_VBIL30_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VBIL74                  0x24L
#define CLLKS0127_VBIL74_VBIL4          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VBIL74_VBIL5          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_VBIL74_VBIL6          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_VBIL74_VBIL7          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_VBIL74_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VBIL118                 0x25L
#define CLLKS0127_VBIL118_VBIL8         ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VBIL118_VBIL9         ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_VBIL118_VBIL10        ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_VBIL118_VBIL11        ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_VBIL118_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VBIL1512                0x26L
#define CLLKS0127_VBIL1512_VBIL12       ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VBIL1512_VBIL13       ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_VBIL1512_VBIL14       ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_VBIL1512_VBIL15       ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_VBIL1512_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_TTFRAM                  0x27L
#define CLLKS0127_TTFRAM_TTFRAM         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_TTFRAM_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_TESTA                   0x28L
#define CLLKS0127_TESTA_UNUSED          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_TESTA_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_UVOFFH                  0x29L
#define CLLKS0127_UVOFFH_VOFFST         ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_UVOFFH_UOFFST         ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_UVOFFH_UNUSED         ((0x04L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_UVOFFH_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_UVOFFL                  0x2AL
#define CLLKS0127_UVOFFL_VOFFST         ((0x04L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_UVOFFL_UOFFST         ((0x04L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_UVOFFL_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_UGAIN                   0x2BL
#define CLLKS0127_UGAIN_UGAIN           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_UGAIN_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VGAIN                   0x2CL
#define CLLKS0127_VGAIN_VGAIN           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VGAIN_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VAVB                    0x2DL
#define CLLKS0127_VAVB_VAVEV0           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VAVB_VAVOD0           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_VAVB_VAVB             ((0x06L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_VAVB_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VAVE                    0x2EL
#define CLLKS0127_VAVE_VAVE             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VAVE_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CTRACK                  0x2FL
#define CLLKS0127_CTRACK_CFTC           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CTRACK_CGTC           ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_CTRACK_DMCTL          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_CTRACK_UNUSED         ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CTRACK_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_POLCTL                  0x30L
#define CLLKS0127_POLCTL_HS1PL          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_POLCTL_VAVPL          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_POLCTL_HS2PL          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_POLCTL_EHAVPL         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_POLCTL_HAVPL          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_POLCTL_ODDPL          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_POLCTL_VSPL           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_POLCTL_EVAVPL         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_POLCTL_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_REFCOD                  0x31L
#define CLLKS0127_REFCOD_GENLIM         ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_REFCOD_YCRANG         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_REFCOD_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_INVALY                  0x32L
#define CLLKS0127_INVALY_INVALY         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_INVALY_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_INVALU                  0x33L
#define CLLKS0127_INVALU_INVALU         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_INVALU_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_INVALV                  0x34L
#define CLLKS0127_INVALV_INVALV         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_INVALV_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_UNUSEY                  0x35L
#define CLLKS0127_UNUSEY_UNUSEY         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_UNUSEY_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_UNUSEU                  0x36L
#define CLLKS0127_UNUSEU_UNUSEU         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_UNUSEU_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_UNUSEV                  0x37L
#define CLLKS0127_UNUSEV_UNUSEV         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_UNUSEV_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_EXCTRL                  0x38L
#define CLLKS0127_EXCTRL_CLEVEL          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_EXCTRL_BISTE           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_EXCTRL_BISTM           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_EXCTRL_AUCPWD          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_EXCTRL_ALTHAV          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_EXCTRL_TREE            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_EXCTRL_ENINCST         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_EXCTRL_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_TRACKA                 0x39L
#define CLLKS0127_TRACKA_AGCLSB          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_TRACKA_VBCTRAP         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_TRACKA_ATCTRAP         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_TRACKA_VCRLEV          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_TRACKA_VCRDET          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_TRACKA_MACDET          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_TRACKA_STCTRL          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_TRACKA_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_SHS1A                  0x3AL
#define CLLKS0127_SHS1A_COFFENB          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_SHS1A_YOFFENB          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_SHS1A_CCOVFL           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_SHS1A_NEWCC            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_SHS1A_VBIMID           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_SHS1A_TTSYS            ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_SHS1A_VBISWAP          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_SHS1A_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_TRACKB                 0x3BL
#define CLLKS0127_TRACKB_AGCLKG          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_TRACKB_AGCLPG          ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_TRACKB_VNOISCT         ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_TRACKB_PHCTRL          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_TRACKB_VBIFR           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_TRACKB_VBIPH           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_TRACKB_ALT656          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_TRACKB_ALL             ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_RTC                    0x3CL
#define CLLKS0127_RTC_TDMOD              ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_RTC_EN                 ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_RTC_PID                ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_RTC_DTO                ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_RTC_ALL                ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CMDE                    0x3DL
#define CLLKS0127_CMDE_CHIPREVID         ((0x04L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CMDE_HCORE             ((0x02L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_CMDE_VSALG             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CMDE_ODFST             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_CMDE_ALL               ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_VSDEL                   0x3EL
#define CLLKS0127_VSDEL_VSDEL            ((0x06L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_VSDEL_NOVIDC           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_VSDEL_TRMS             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_VSDEL_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_CMDF                    0x3FL
#define CLLKS0127_CMDF_CBWI             ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_CMDF_TASKB            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLKS0127_CMDF_REGUD            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLKS0127_CMDF_UVDLSL           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLKS0127_CMDF_UVDLEN           ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLKS0127_CMDF_EVAVY            ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLKS0127_CMDF_VIPMODE          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLKS0127_CMDF_TRAPFSC          ((0x01L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLKS0127_CMDF_ALL              ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA0                  0x40L
#define CLLKS0127_GAMMA0_GAMMA0         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA0_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA1                  0x41L
#define CLLKS0127_GAMMA1_GAMMA1         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA1_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA2                  0x42L
#define CLLKS0127_GAMMA2_GAMMA2         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA2_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA3                  0x43L
#define CLLKS0127_GAMMA3_GAMMA3         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA3_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA4                  0x44L
#define CLLKS0127_GAMMA4_GAMMA4         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA4_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA5                  0x45L
#define CLLKS0127_GAMMA5_GAMMA5         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA5_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA6                  0x46L
#define CLLKS0127_GAMMA6_GAMMA6         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA6_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA7                  0x47L
#define CLLKS0127_GAMMA7_GAMMA7         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA7_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA8                  0x48L
#define CLLKS0127_GAMMA8_GAMMA8         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA8_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA9                  0x49L
#define CLLKS0127_GAMMA9_GAMMA9         ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA9_ALL            ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA10                 0x4AL
#define CLLKS0127_GAMMA10_GAMMA10       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA10_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA11                 0x4BL
#define CLLKS0127_GAMMA11_GAMMA11       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA11_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA12                 0x4CL
#define CLLKS0127_GAMMA12_GAMMA12       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA12_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA13                 0x4DL
#define CLLKS0127_GAMMA13_GAMMA13       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA13_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA14                 0x4EL
#define CLLKS0127_GAMMA14_GAMMA14       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA14_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA15                 0x4FL
#define CLLKS0127_GAMMA15_GAMMA15       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA15_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA16                 0x50L
#define CLLKS0127_GAMMA16_GAMMA16       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA16_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA17                 0x51L
#define CLLKS0127_GAMMA17_GAMMA17       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA17_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA18                 0x52L
#define CLLKS0127_GAMMA18_GAMMA18       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA18_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA19                 0x53L
#define CLLKS0127_GAMMA19_GAMMA19       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA19_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA20                 0x54L
#define CLLKS0127_GAMMA20_GAMMA20       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA20_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA21                 0x55L
#define CLLKS0127_GAMMA21_GAMMA21       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA21_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA22                 0x56L
#define CLLKS0127_GAMMA22_GAMMA22       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA22_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA23                 0x57L
#define CLLKS0127_GAMMA23_GAMMA23       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA23_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA24                 0x58L
#define CLLKS0127_GAMMA24_GAMMA24       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA24_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA25                 0x59L
#define CLLKS0127_GAMMA25_GAMMA25       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA25_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA26                 0x5AL
#define CLLKS0127_GAMMA26_GAMMA26       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA26_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA27                 0x5BL
#define CLLKS0127_GAMMA27_GAMMA27       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA27_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA28                 0x5CL
#define CLLKS0127_GAMMA28_GAMMA28       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA28_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA29                 0x5DL
#define CLLKS0127_GAMMA29_GAMMA29       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA29_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA30                 0x5EL
#define CLLKS0127_GAMMA30_GAMMA30       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA30_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMA31                 0x5FL
#define CLLKS0127_GAMMA31_GAMMA31       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMA31_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD0                 0x60L
#define CLLKS0127_GAMMAD0_GAMMAD0       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD0_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD1                 0x61L
#define CLLKS0127_GAMMAD1_GAMMAD1       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD1_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD2                 0x62L
#define CLLKS0127_GAMMAD2_GAMMAD2       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD2_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD3                 0x63L
#define CLLKS0127_GAMMAD3_GAMMAD3       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD3_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD4                 0x64L
#define CLLKS0127_GAMMAD4_GAMMAD4       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD4_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD5                 0x65L
#define CLLKS0127_GAMMAD5_GAMMAD5       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD5_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD6                 0x66L
#define CLLKS0127_GAMMAD6_GAMMAD6       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD6_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD7                 0x67L
#define CLLKS0127_GAMMAD7_GAMMAD7       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD7_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD8                 0x68L
#define CLLKS0127_GAMMAD8_GAMMAD8       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD8_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD9                 0x69L
#define CLLKS0127_GAMMAD9_GAMMAD9       ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD9_ALL           ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD10                0x6AL
#define CLLKS0127_GAMMAD10_GAMMAD10     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD10_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD11                0x6BL
#define CLLKS0127_GAMMAD11_GAMMAD11     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD11_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD12                0x6CL
#define CLLKS0127_GAMMAD12_GAMMAD12     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD12_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD13                0x6DL
#define CLLKS0127_GAMMAD13_GAMMAD13     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD13_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD14                0x6EL
#define CLLKS0127_GAMMAD14_GAMMAD14     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD14_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD15                0x6FL
#define CLLKS0127_GAMMAD15_GAMMAD15     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD15_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD16                0x70L
#define CLLKS0127_GAMMAD16_GAMMAD16     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD16_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD17                0x71L
#define CLLKS0127_GAMMAD17_GAMMAD17     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD17_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD18                0x72L
#define CLLKS0127_GAMMAD18_GAMMAD18     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD18_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD19                0x73L
#define CLLKS0127_GAMMAD19_GAMMAD19     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD19_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD20                0x74L
#define CLLKS0127_GAMMAD20_GAMMAD20     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD20_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD21                0x75L
#define CLLKS0127_GAMMAD21_GAMMAD21     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD21_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD22                0x76L
#define CLLKS0127_GAMMAD22_GAMMAD22     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD22_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD23                0x77L
#define CLLKS0127_GAMMAD23_GAMMAD23     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD23_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD24                0x78L
#define CLLKS0127_GAMMAD24_GAMMAD24     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD24_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD25                0x79L
#define CLLKS0127_GAMMAD25_GAMMAD25     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD25_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD26                0x7AL
#define CLLKS0127_GAMMAD26_GAMMAD26     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD26_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD27                0x7BL
#define CLLKS0127_GAMMAD27_GAMMAD27     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD27_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD28                0x7CL
#define CLLKS0127_GAMMAD28_GAMMAD28     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD28_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD29                0x7DL
#define CLLKS0127_GAMMAD29_GAMMAD29     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD29_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD30                0x7EL
#define CLLKS0127_GAMMAD30_GAMMAD30     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD30_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLKS0127_GAMMAD31                0x7FL
#define CLLKS0127_GAMMAD31_GAMMAD31     ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLKS0127_GAMMAD31_ALL          ((0x08L           << CLLKS0127_SHIFT_FIELD_SIZE) | 0x00L)

//===========================================================================
//
//          Definition of registers for Mistral
//
//===========================================================================

#define CLLMISTRAL_DATA_MASK                0x3FFF
#define CLLMISTRAL_SHIFT_WRITE_ONLY         0x001D
#define CLLMISTRAL_WRITE_ONLY               0x0001
#define CLLMISTRAL_WRITE_ONLY_MASK          (CLLMISTRAL_WRITE_ONLY << CLLMISTRAL_SHIFT_WRITE_ONLY)
#define CLLMISTRAL_SHIFT_FIELD              0x0005
#define CLLMISTRAL_FIELD_OFFSET_MASK        0x001F
#define CLLMISTRAL_FIELD_MASK               0x003F
#define CLLMISTRAL_SHIFT_FIELD_MASK         (CLLMISTRAL_FIELD_MASK << CLLMISTRAL_SHIFT_FIELD)

#define CLLMISTRAL_SHIFT_ATTR               0x11L
#define CLLMISTRAL_SHIFT_SEQ                0x12L
#define CLLMISTRAL_SHIFT_GCTL               0x13L
#define CLLMISTRAL_SHIFT_CRTC               0x14L
#define CLLMISTRAL_SHIFT_CRTCEXT            0x15L
#define CLLMISTRAL_SHIFT_VALUE              0x16L
#define CLLMISTRAL_ATTR_MASK                (0x01 << CLLMISTRAL_SHIFT_ATTR)
#define CLLMISTRAL_SEQ_MASK                 (0x01 << CLLMISTRAL_SHIFT_SEQ)
#define CLLMISTRAL_GCTL_MASK                (0x01 << CLLMISTRAL_SHIFT_GCTL)
#define CLLMISTRAL_CRTC_MASK                (0x01 << CLLMISTRAL_SHIFT_CRTC)
#define CLLMISTRAL_CRTCEXT_MASK             (0x01 << CLLMISTRAL_SHIFT_CRTCEXT)

// Configuration registers
#define CLLMISTRAL_DEVID                    0x0000
#define CLLMISTRAL_DEVCTRL                  0x0004
#define CLLMISTRAL_CLASSCODE                0x0008
#define CLLMISTRAL_HEADER                   0x000C
#define CLLMISTRAL_MGABASE2                 0x0010
#define CLLMISTRAL_MGABASE1                 0x0014
#define CLLMISTRAL_MGABASE3                 0x0018
#define CLLMISTRAL_SUBSYSID                 0x002C
#define CLLMISTRAL_ROMBASE                  0x0030
#define CLLMISTRAL_INTCTRL                  0x003C
#define CLLMISTRAL_OPTION                   0x0040
#define CLLMISTRAL_MGAINDEX                 0x0044
#define CLLMISTRAL_MGADATA                  0x0048

// Memory registers
#define CLLMISTRAL_DWGCTL                  (0x1C00 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWGCTL_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_MACCESS                 (0x1C04 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_MACCESS_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_MCTLWTST                (0x1C08 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_MCTLWTST_ALL             ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_ZORG                    (0x1C0C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_ZORG_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_PAT0                    (0x1C10 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_PAT0_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_PAT1                    (0x1C14 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_PAT1_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_PLNWT                   (0x1C1C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_PLNWT_ALL                ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_BCOL                    (0x1C20 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_BCOL_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_FCOL                    (0x1C24 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_FCOL_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SRC0                    (0x1C30 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_SRC0_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SRC1                    (0x1C34 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_SRC1_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SRC2                    (0x1C38 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_SRC2_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SRC3                    (0x1C3C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_SRC3_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_XYSTRT                  (0x1C40 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_XYSTRT_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_XYEND                   (0x1C44 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_XYEND_ALL                ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SHIFT                   (0x1C50 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_SHIFT_ALL                ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DMAPAD                  (0x1C54 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DMAPAD_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SGN                     (0x1C58 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_SGN_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_LEN                     (0x1C5C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_LEN_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_AR0                     (0x1C60 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_AR0_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_AR1                     (0x1C64 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_AR1_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_AR2                     (0x1C68 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_AR2_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_AR3                     (0x1C6C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_AR3_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_AR4                     (0x1C70 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_AR4_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_AR5                     (0x1C74 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_AR5_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_AR6                     (0x1C78 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_AR6_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_CXBNDRY                 (0x1C80 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_CXBNDRY_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_FXBNDRY                 (0x1C84 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_FXBNDRY_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_YDSTLEN                 (0x1C88 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_YDSTLEN_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_PITCH                   (0x1C8C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_PITCH_ALL                ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_YDST                    (0x1C90 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_YDST_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_YDSTORG                 (0x1C94 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_YDSTORG_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_YTOP                    (0x1C98 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_YTOP_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_YBOT                    (0x1C9C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_YBOT_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_CXLEFT                  (0x1CA0 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_CXLEFT_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_CXRIGHT                 (0x1CA4 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_CXRIGHT_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_FXLEFT                  (0x1CA8 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_FXLEFT_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_FXRIGHT                 (0x1CAC | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_FXRIGHT_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_XDST                    (0x1CB0 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_XDST_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR0                     (0x1CC0 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR0_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR1                     (0x1CC4 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR1_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR2                     (0x1CC8 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR2_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR3                     (0x1CCC | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR3_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR4                     (0x1CD0 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR4_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR5                     (0x1CD4 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR5_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR6                     (0x1CD8 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR6_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR7                     (0x1CDC | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR7_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR8                     (0x1CE0 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR8_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR9                     (0x1CE4 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR9_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR10                    (0x1CE8 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR10_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR11                    (0x1CEC | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR11_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR12                    (0x1CF0 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR12_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR13                    (0x1CF4 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR13_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR14                    (0x1CF8 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR14_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR15                    (0x1CFC | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR15_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_FIFOSTATUS               0x1E10  
#define CLLMISTRAL_FIFOSTATUS_ALL           ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_STATUS                   0x1E14   
#define CLLMISTRAL_STATUS_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0  )
#define CLLMISTRAL_STATUS_RESERVE3          ((0x0e << CLLMISTRAL_SHIFT_FIELD) | 0x12 )
#define CLLMISTRAL_STATUS_ENDPRDMASTS       ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x11 )
#define CLLMISTRAL_STATUS_DWGENGSTS         ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x10 )
#define CLLMISTRAL_STATUS_RESERVE2          ((0x09 << CLLMISTRAL_SHIFT_FIELD) | 0x07 )
#define CLLMISTRAL_STATUS_EXTPEN            ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x06 )
#define CLLMISTRAL_STATUS_VLINEPEN          ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x05 )
#define CLLMISTRAL_STATUS_VSYNCPEN          ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x04 )
#define CLLMISTRAL_STATUS_VSYNCSTS          ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x03 )
#define CLLMISTRAL_STATUS_PICKPEN           ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x02 )
#define CLLMISTRAL_STATUS_RESERVED1         ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x01 )
#define CLLMISTRAL_STATUS_SOFTRAPEN         ((0x01 << CLLMISTRAL_SHIFT_FIELD) | 0x00 )

#define CLLMISTRAL_ICLEAR                  (0x1E18 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_ICLEAR_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_IEN                      0x1E1C
#define CLLMISTRAL_IEN_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_VCOUNT                   0x1E20  
#define CLLMISTRAL_VCOUNT_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DMAMAP30                 0x1E30
#define CLLMISTRAL_DMAMAP30_ALL             ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DMAMAP74                 0x1E34
#define CLLMISTRAL_DMAMAP74_ALL             ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DMAMAPB8                 0x1E38
#define CLLMISTRAL_DMAMAPB8_ALL             ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DMAMAPFC                 0x1E3C
#define CLLMISTRAL_DMAMAPFC_ALL             ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_RST                      0x1E40
#define CLLMISTRAL_RST_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TEST                     0x1E44
#define CLLMISTRAL_TEST_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_REV                      0x1E48  
#define CLLMISTRAL_REV_ALL                  ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_CONFIG                   0x1E50  
#define CLLMISTRAL_CONFIG_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_OPMODE                   0x1E54
#define CLLMISTRAL_OPMODE_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_PRIMADDRESS              0x1E58
#define CLLMISTRAL_PRIMADDRESS_ALL          ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_PRIMEND                  0x1E5C
#define CLLMISTRAL_PRIMEND_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT0           (0x1E80 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT0_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT1           (0x1E84 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT1_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT2           (0x1E88 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT2_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT3           (0x1E8C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT3_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT4           (0x1E90 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT4_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT5           (0x1E94 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT5_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT6           (0x1E98 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT6_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT7           (0x1E9C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT7_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT8           (0x1EA0 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT8_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT9           (0x1EA4 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT9_ALL        ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )
                                         
#define CLLMISTRAL_DWG_INDIR_WT10          (0x1EA8 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT10_ALL       ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT11          (0x1EAC | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT11_ALL       ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT12          (0x1EB0 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT12_ALL       ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )
                                        
#define CLLMISTRAL_DWG_INDIR_WT13          (0x1EB4 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT13_ALL       ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT14          (0x1EB8 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT14_ALL       ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DWG_INDIR_WT15          (0x1EBC | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DWG_INDIR_WT15_ALL       ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_ATTR                     0x1FC0
#define CLLMISTRAL_ATTR_ALL                 ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )
#define CLLMISTRAL_ATTR_0                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x00 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_1                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x01 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_2                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x02 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_3                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x03 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_4                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x04 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_5                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x05 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_6                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x06 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_7                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x07 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_8                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x08 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_9                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x09 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_A                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x0a << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_B                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x0b << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_C                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x0c << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_D                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x0d << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_E                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x0e << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_F                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x0f << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_10                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x10 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_11                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x11 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_12                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x12 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_13                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x13 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_ATTR_14                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_ATTR_MASK   ) | 0x14 << CLLMISTRAL_SHIFT_VALUE)

#define CLLMISTRAL_INSTS0                   0x1FC2
#define CLLMISTRAL_INSTS0_ALL               ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SEQ                      0x1FC4
#define CLLMISTRAL_SEQ_ALL                  ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )
#define CLLMISTRAL_SEQ_0                  ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_SEQ_MASK    ) | 0x00 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_SEQ_1                  ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_SEQ_MASK    ) | 0x01 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_SEQ_2                  ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_SEQ_MASK    ) | 0x02 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_SEQ_3                  ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_SEQ_MASK    ) | 0x03 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_SEQ_4                  ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_SEQ_MASK    ) | 0x04 << CLLMISTRAL_SHIFT_VALUE)

#define CLLMISTRAL_DACSTAT                  0x1FC7
#define CLLMISTRAL_DACSTAT_ALL              ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_FEAT                     0x1FCA
#define CLLMISTRAL_FEAT_ALL                 ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_MISC                     0x1FCC
#define CLLMISTRAL_MISC_ALL                 ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_GCTL                     0x1FCE
#define CLLMISTRAL_GCTL_ALL                 ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )
#define CLLMISTRAL_GCTL_0                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x00 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_GCTL_1                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x01 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_GCTL_2                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x02 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_GCTL_3                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x03 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_GCTL_4                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x04 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_GCTL_5                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x05 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_GCTL_6                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x06 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_GCTL_7                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x07 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_GCTL_8                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_GCTL_MASK   ) | 0x08 << CLLMISTRAL_SHIFT_VALUE)

#define CLLMISTRAL_CRTC                     0x1FD4
#define CLLMISTRAL_CRTC_ALL                 ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )
#define CLLMISTRAL_CRTC_0                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x00 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_1                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x01 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_2                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x02 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_3                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x03 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_4                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x04 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_5                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x05 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_6                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x06 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_7                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x07 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_8                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x08 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_9                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x09 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_A                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x0a << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_B                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x0b << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_C                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x0c << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_D                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x0d << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_E                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x0e << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_F                 ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x0f << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_10                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x10 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_11                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x11 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_12                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x12 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_13                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x13 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_14                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x14 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_15                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x15 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_16                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x16 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_17                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x17 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_18                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x18 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_22                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x22 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_23                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x23 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_24                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x24 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_25                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x25 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTC_26                ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTC_MASK   ) | 0x26 << CLLMISTRAL_SHIFT_VALUE)

#define CLLMISTRAL_INSTS1                   0x1FDA
#define CLLMISTRAL_INSTS1_ALL               ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_CRTCEXT                  0x1FDE
#define CLLMISTRAL_CRTCEXT_ALL              ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )
#define CLLMISTRAL_CRTCEXT_0              ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTCEXT_MASK) | 0x00 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTCEXT_1              ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTCEXT_MASK) | 0x01 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTCEXT_2              ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTCEXT_MASK) | 0x02 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTCEXT_3              ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTCEXT_MASK) | 0x03 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTCEXT_4              ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTCEXT_MASK) | 0x04 << CLLMISTRAL_SHIFT_VALUE)
#define CLLMISTRAL_CRTCEXT_5              ((((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 ) | CLLMISTRAL_CRTCEXT_MASK) | 0x05 << CLLMISTRAL_SHIFT_VALUE)

#define CLLMISTRAL_CACHEFLUSH               0x1FFF
#define CLLMISTRAL_CACHEFLUSH_ALL           ((0x08 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR0                    (0x2C00 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR0_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR1                    (0x2C04 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR1_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR2                    (0x2C08 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR2_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR3                    (0x2C0C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR3_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR4                    (0x2C10 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR4_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR5                    (0x2C14 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR5_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR6                    (0x2C18 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR6_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR7                    (0x2C1C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR7_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TMR8                    (0x2C20 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TMR8_ALL                 ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TEXORG                  (0x2C24 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TEXORG_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TEXWIDTH                (0x2C28 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TEXWIDTH_ALL             ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TEXHEIGTH               (0x2C2C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TEXHEIGTH_ALL            ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TEXCTL                  (0x2C30 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TEXCTL_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_TEXTRANS                (0x2C34 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_TEXTRANS_ALL             ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SECADDRESS               0x2C40
#define CLLMISTRAL_SECADDRESS_ALL           ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SECEND                   0x2C44
#define CLLMISTRAL_SECEND_ALL               ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_SOFTRAP                  0x2C48
#define CLLMISTRAL_SOFTRAP_ALL              ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR0_Z32_LSB             (0x2C50 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR0_Z32_LSB_ALL          ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR0_Z32_MSB             (0x2C54 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR0_Z32_MSB_ALL          ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR2_Z32_LSB             (0x2C60 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR2_Z32_LSB_ALL          ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR2_Z32_MSB             (0x2C64 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR2_Z32_MSB_ALL          ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR3_Z32_LSB             (0x2C68 | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR3_Z32_LSB_ALL          ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

#define CLLMISTRAL_DR3_Z32_MSB             (0x2C6C | CLLMISTRAL_WRITE_ONLY_MASK)
#define CLLMISTRAL_DR3_Z32_MSB_ALL          ((0x20 << CLLMISTRAL_SHIFT_FIELD) | 0x0 )

//===========================================================================
//
//          Definition of registers for VIA
//
//===========================================================================

#define CLLVIA_SHIFT_DATA_INDEX       0x08L
#define CLLVIA_SHIFT_DATA_INDEX_MASK  0xFFL
#define CLLVIA_SHIFT_WRITE_ONLY       0x10L
#define CLLVIA_SHIFT_FIELD_SIZE       0x05L
#define CLLVIA_FIELD_OFFSET_MASK      0x1FL
#define CLLVIA_FIELD_SIZE_MASK        0x3FL
#define CLLVIA_WRITE_ONLY             0x01L
#define CLLVIA_WRITE_ONLY_MASK        (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY)

#define CLLVIA_DCTRL                    0x0000L
#define CLLVIA_DCTRL_ALL                ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DCTRL_ADPMOR             ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x7 )
#define CLLVIA_DCTRL_DISEN              ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x6 )
#define CLLVIA_DCTRL_DFIELD             ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x5 )
#define CLLVIA_DCTRL_DINTMD             ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_DCTRL_DINTDST            ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x2 )
#define CLLVIA_DCTRL_DVZOOM             ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                        
#define CLLVIA_DHACTIVE                 0x0008L
#define CLLVIA_DHACTIVE_ALL             ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DHACTIVE_DHACTIVE        ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DHBPORCH                 0x0010L
#define CLLVIA_DHBPORCH_ALL             ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DHBPORCH_DHBPORCH        ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DLNINT                   0x0018L
#define CLLVIA_DLNINT_ALL               ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DLNINT_DLNINT            ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DVACTIVE                 0x0020L
#define CLLVIA_DVACTIVE_ALL             ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DVACTIVE_DVACTIVE        ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DVBPORCH                 0x0028L
#define CLLVIA_DVBPORCH_ALL             ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DVBPORCH_DVBPORCH        ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DVCOUNT                  0x0030L
#define CLLVIA_DVCOUNT_ALL              ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DVCOUNT_DVCOUNT          ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DCLKSEL                  0x0800L
#define CLLVIA_DCLKSEL_ALL              ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DCLKSEL_DCLKSEL          ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DGPR0                    0x0808L
#define CLLVIA_DGPR0_ALL                ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DGPR0_DGPR0              ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                         
#define CLLVIA_DGPR1                    0x0810L
#define CLLVIA_DGPR1_ALL                ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DGPR1_DGPR1              ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                              
#define CLLVIA_DHDELAY                  0x0818L
#define CLLVIA_DHDELAY_ALL              ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DHDELAY_DHDELAY          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )

#define CLLVIA_GHCOUNT                  0x1000L
#define CLLVIA_GHCOUNT_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GHCOUNT_GHCOUNT          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )

#define CLLVIA_GVCOUNT                  0x1008L
#define CLLVIA_GVCOUNT_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GVCOUNT_GVCOUNT          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GHSCLNG                  0x1800L
#define CLLVIA_GHSCLNG_ALL              ((0x06      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GHSCLNG_GHZOOM           ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_GHSCLNG_GHSUBFAC         ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GHTOTAL                  0x1808L
#define CLLVIA_GHTOTAL_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GHTOTAL_GHTOTAL          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GHWSTART                 0x1810L
#define CLLVIA_GHWSTART_ALL             ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GHWSTART_GHWSTART        ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GHWSTOP                  0x1818L
#define CLLVIA_GHWSTOP_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GHWSTOP_GHWSTOP          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GLNINT                   0x1820L
#define CLLVIA_GLNINT_ALL               ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GLNINT_GLNINT            ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                              
#define CLLVIA_GPIXFMT                  0x1828L
#define CLLVIA_GPIXFMT_ALL              ((0x0E      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GPIXFMT_GFMTCVR          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xD )
#define CLLVIA_GPIXFMT_GBTXTRCT         ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0xB )
#define CLLVIA_GPIXFMT_GCOLOR           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xA )
#define CLLVIA_GPIXFMT_GNBCHNL          ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_GPIXFMT_GBITCHNL         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x7 )
#define CLLVIA_GPIXFMT_GTSIZE           ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x3 )
#define CLLVIA_GPIXFMT_GSTFMT           ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )

#define CLLVIA_GRABCTRL                 0x1830L
#define CLLVIA_GRABCTRL_ALL             ((0x1B      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0  )
#define CLLVIA_GRABCTRL_GRBSRC          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1A )
#define CLLVIA_GRABCTRL_IVLDPOL         ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x18 )
#define CLLVIA_GRABCTRL_EOGINTEN        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x17 )
#define CLLVIA_GRABCTRL_SOGINTEN        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x16 )
#define CLLVIA_GRABCTRL_GLINTEN         ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x14 )
#define CLLVIA_GRABCTRL_GINTDST         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x13 )
#define CLLVIA_GRABCTRL_GVSMODE         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x12 )
#define CLLVIA_GRABCTRL_GHSMODE         ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x10 )
#define CLLVIA_GRABCTRL_GLNRV           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xF  )
#define CLLVIA_GRABCTRL_GINTLAD         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xE  )
#define CLLVIA_GRABCTRL_GFLDPOL         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xD  )
#define CLLVIA_GRABCTRL_GREGUDT         ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0xA  )
#define CLLVIA_GRABCTRL_GSCNMD          ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8  )
#define CLLVIA_GRABCTRL_GCPTMD          ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x6  )
#define CLLVIA_GRABCTRL_IGVALID         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x5  )
#define CLLVIA_GRABCTRL_GVRTRG          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4  )
#define CLLVIA_GRABCTRL_GHRTRG          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x3  )
#define CLLVIA_GRABCTRL_GSNPSHT        (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x2  )   | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_GRABCTRL_GRABSEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1  )
#define CLLVIA_GRABCTRL_GRABADIS        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0  )
                                        
#define CLLVIA_GVSCLNG                  0x1838L
#define CLLVIA_GVSCLNG_ALL              ((0x06      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GVSCLNG_GVZOOM           ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_GVSCLNG_GVSUBFAC         ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GVTOTAL                  0x1840L
#define CLLVIA_GVTOTAL_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GVTOTAL_GVTOTAL          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                             
#define CLLVIA_GVWSTART                 0x1848L
#define CLLVIA_GVWSTART_ALL             ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GVWSTART_GVWSTART        ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GVWSTOP                  0x1850L
#define CLLVIA_GVWSTOP_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GVWSTOP_GVWSTOP          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DFSTART                  0x2000L
#define CLLVIA_DFSTART_ALL              ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0  )
#define CLLVIA_DFSTART_RW0              ((0x0B      << CLLVIA_SHIFT_FIELD_SIZE) | 0x15 )
#define CLLVIA_DFSTART_DFSTART          ((0x15      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0  )
                                        
#define CLLVIA_GARPADDR                 0x2008L
#define CLLVIA_GARPADDR_ALL             ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GARPADDR_GARPADDR        ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GARPCTRL                 0x2010L
#define CLLVIA_GARPCTRL_ALL             ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GARPCTRL_GRLHMEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x2 )
#define CLLVIA_GARPCTRL_GARPWAIT        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1 )
#define CLLVIA_GARPCTRL_GARPEN          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GSTATUS                  0x2018L
#define CLLVIA_GSTATUS_ALL              ((0x06      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GSTATUS_GPENDING         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x5 )
#define CLLVIA_GSTATUS_GACTIVE          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_GSTATUS_GINTOVRN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x3 )
#define CLLVIA_GSTATUS_GCAPTURE         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x2 )
#define CLLVIA_GSTATUS_GFIELD           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1 )
#define CLLVIA_GSTATUS_GOVERUN          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HGIOCTRL                 0x2020L
#define CLLVIA_HGIOCTRL_ALL             ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLVIA_HGIOCTRL_HGRESET         ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1E )
#define CLLVIA_HGIOCTRL_HGRESET0        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1E )
#define CLLVIA_HGIOCTRL_HGRESET1        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1F )
#define CLLVIA_HGIOCTRL_HGIODIR         ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x14 )
#define CLLVIA_HGIOCTRL_HGIODIR0        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x14 )
#define CLLVIA_HGIOCTRL_HGIODIR1        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x15 )
#define CLLVIA_HGIOCTRL_HGIODIR2        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x16 )
#define CLLVIA_HGIOCTRL_HGIODIR12       ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x15 )
#define CLLVIA_HGIOCTRL_HGIODIR3        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x17 )
#define CLLVIA_HGIOCTRL_HGIODIR4        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x18 )
#define CLLVIA_HGIOCTRL_HGIODIR34       ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x17 )
#define CLLVIA_HGIOCTRL_HGIODIR5        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x19 )
#define CLLVIA_HGIOCTRL_HGIODIR6        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1A )
#define CLLVIA_HGIOCTRL_HGIODIR7        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1B )
#define CLLVIA_HGIOCTRL_HGIODIR8        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1C )
#define CLLVIA_HGIOCTRL_HGIODIR9        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1D )
#define CLLVIA_HGIOCTRL_HGIODIR01       ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x14 )
#define CLLVIA_HGIOCTRL_HGIODIR89       ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1C )
#define CLLVIA_HGIOCTRL_HGIODATA        ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0A )
#define CLLVIA_HGIOCTRL_HGIODATA0       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0A )
#define CLLVIA_HGIOCTRL_HGIODATA1       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0B )
#define CLLVIA_HGIOCTRL_HGIODATA2       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0C )
#define CLLVIA_HGIOCTRL_HGIODATA12      ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0B )
#define CLLVIA_HGIOCTRL_HGIODATA3       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0D )
#define CLLVIA_HGIOCTRL_HGIODATA4       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0E )
#define CLLVIA_HGIOCTRL_HGIODATA34      ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0D )
#define CLLVIA_HGIOCTRL_HGIODATA5       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0F )
#define CLLVIA_HGIOCTRL_HGIODATA6       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x10 )
#define CLLVIA_HGIOCTRL_HGIODATA7       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x11 )
#define CLLVIA_HGIOCTRL_HGIODATA8       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x12 )
#define CLLVIA_HGIOCTRL_HGIODATA9       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x13 )
#define CLLVIA_HGIOCTRL_HGIODATA01      ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0A )
#define CLLVIA_HGIOCTRL_HGIODATA89      ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x12 )
#define CLLVIA_HGIOCTRL_HGIOSTAT        ((0x0A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLVIA_HGIOCTRL_HGIOSTAT0       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLVIA_HGIOCTRL_HGIOSTAT1       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x01 )
#define CLLVIA_HGIOCTRL_HGIOSTAT2       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x02 )
#define CLLVIA_HGIOCTRL_HGIOSTAT12      ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x01 )
#define CLLVIA_HGIOCTRL_HGIOSTAT3       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x03 )
#define CLLVIA_HGIOCTRL_HGIOSTAT4       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x04 )
#define CLLVIA_HGIOCTRL_HGIOSTAT34      ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x03 )
#define CLLVIA_HGIOCTRL_HGIOSTAT5       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x05 )
#define CLLVIA_HGIOCTRL_HGIOSTAT6       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x06 )
#define CLLVIA_HGIOCTRL_HGIOSTAT7       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x07 )
#define CLLVIA_HGIOCTRL_HGIOSTAT8       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x08 )
#define CLLVIA_HGIOCTRL_HGIOSTAT9       ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x09 )
#define CLLVIA_HGIOCTRL_HGIOSTAT01      ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLVIA_HGIOCTRL_HGIOSTAT89      ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x08 )
                                        
#define CLLVIA_HINTCLR                  0x2028L
#define CLLVIA_HINTCLR_ALL              ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HINTCLR_MVPGBLDS         (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x1F)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_CLRMVP           (((0x09     << CLLVIA_SHIFT_FIELD_SIZE) | 0x16)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_EXTCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x15)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_DLNCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x14)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_CMDSCLR          (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x13)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_CMDRCLR          (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x12)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_VMCLR            (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x11)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_EOTCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x10)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_SOTCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x0F)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_VLNCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x0E)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_EOGCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x0D)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_SOGCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x0C)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_GLNCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x0B)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_TMRCLR           (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x0A)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_SECLR            (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x09)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_PECLR            (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x08)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_CLRHST           (((0x07     << CLLVIA_SHIFT_FIELD_SIZE) | 0x01)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HINTCLR_HSTGBLDS         (((0x01     << CLLVIA_SHIFT_FIELD_SIZE) | 0x00)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
                                        
#define CLLVIA_HINTREQ                  0x2030L
#define CLLVIA_HINTREQ_ALL              ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HINTREQ_MVPGBLEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1F)
#define CLLVIA_HINTREQ_INTMVP           ((0x09      << CLLVIA_SHIFT_FIELD_SIZE) | 0x16)
#define CLLVIA_HINTREQ_EXTINT           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x15)
#define CLLVIA_HINTREQ_DLINEINT         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x14)
#define CLLVIA_HINTREQ_CMDSINT          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x13)
#define CLLVIA_HINTREQ_CMDRINT          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x12)
#define CLLVIA_HINTREQ_VMINT            ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x11)
#define CLLVIA_HINTREQ_EOTINT           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x10)
#define CLLVIA_HINTREQ_SOTINT           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0F)
#define CLLVIA_HINTREQ_VLINEINT         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0E)
#define CLLVIA_HINTREQ_EOGINT           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0D)
#define CLLVIA_HINTREQ_SOGINT           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0C)
#define CLLVIA_HINTREQ_GLINEINT         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0B)
#define CLLVIA_HINTREQ_TMRINT           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0A)
#define CLLVIA_HINTREQ_SEINT            ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x09)
#define CLLVIA_HINTREQ_PEINT            ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x08)
#define CLLVIA_HINTREQ_INTHST           ((0x07      << CLLVIA_SHIFT_FIELD_SIZE) | 0x01)
#define CLLVIA_HINTREQ_HSTGBLEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00)
                                        
#define CLLVIA_HLCKACC0                 0x2038L
#define CLLVIA_HLCKACC0_ALL             ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HLCKACC0_LCKACC0         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HLCKACC1                 0x2040L
#define CLLVIA_HLCKACC1_ALL             ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HLCKACC1_LCKACC1         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HTCOUNT                  0x2048L
#define CLLVIA_HTCOUNT_ALL              ((0x1F      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HTCOUNT_TCOUNT           ((0x1F      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HTCTRL                   0x2050L
#define CLLVIA_HTCTRL_ALL               ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HTCTRL_TINTEN            ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1F)
#define CLLVIA_HTCTRL_TSCALE            ((0x1F      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00)
                                               
#define CLLVIA_MEMCTRL                  0x2058L
#define CLLVIA_MEMCTRL_ALL              ((0x17      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_MEMCTRL_EXTDST           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x16)
#define CLLVIA_MEMCTRL_EXTINTEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x15)
#define CLLVIA_MEMCTRL_PCIWINEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x14)
#define CLLVIA_MEMCTRL_DREGSYNC         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x13)
#define CLLVIA_MEMCTRL_VREGSYNC         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x12)
#define CLLVIA_MEMCTRL_GREGSYNC         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x11)
#define CLLVIA_MEMCTRL_MVPRESET         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x10)
#define CLLVIA_MEMCTRL_DADWRAP          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0F)
#define CLLVIA_MEMCTRL_REQPRTY          ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0C)
#define CLLVIA_MEMCTRL_BACKLOG          ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_MEMCTRL_REFRATE          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VARPADDR                 0x2060L
#define CLLVIA_VARPADDR_ALL             ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VARPADDR_VARPADDR        ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VARPCTRL                 0x2068L
#define CLLVIA_VARPCTRL_ALL             ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VARPCTRL_VRLHMEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x2 )
#define CLLVIA_VARPCTRL_VARPWAIT        ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1 )
#define CLLVIA_VARPCTRL_VARPEN          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VHCOUNT                  0x2070L
#define CLLVIA_VHCOUNT_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VHCOUNT_VHCOUNT          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VLNINT                   0x2078L
#define CLLVIA_VLNINT_ALL               ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VLNINT_VLNINT            ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                               
#define CLLVIA_VVCOUNT                  0x2080L
#define CLLVIA_VVCOUNT_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VVCOUNT_VVCOUNT          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_DLPITCH                  0x2800L
#define CLLVIA_DLPITCH_ALL              ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_DLPITCH_RW1              ((0x0B      << CLLVIA_SHIFT_FIELD_SIZE) | 0x15)
#define CLLVIA_DLPITCH_DLPITCH          ((0x15      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GBLENGTH                 0x2808L
#define CLLVIA_GBLENGTH_ALL             ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GBLENGTH_GBLENGTH        ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GC1FOFF                  0x2810L
#define CLLVIA_GC1FOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GC1FOFF_GC1FOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GC1TOFF                  0x2818L
#define CLLVIA_GC1TOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GC1TOFF_GC1TOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )

                                        
#define CLLVIA_GC2FOFF                  0x2820L
#define CLLVIA_GC2FOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GC2FOFF_GC2FOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GC2TOFF                  0x2828L
#define CLLVIA_GC2TOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GC2TOFF_GC2TOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GC3FOFF                  0x2830L
#define CLLVIA_GC3TOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GC3TOFF_GC3TOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GC3TOFF                  0x2838L
#define CLLVIA_GC3FOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GC3FOFF_GC3FOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GDWRTMSK                 0x2840L
#define CLLVIA_GDWRTMSK_ALL             ((0x18      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GDWRTMSK_GDB2WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x10)
#define CLLVIA_GDWRTMSK_GDB1WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x08)
#define CLLVIA_GDWRTMSK_GDB0WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00)
                                        
#define CLLVIA_GFSTART                  0x2848L
#define CLLVIA_GFSTART_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GFSTART_GFSTART          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GLPITCH                  0x2850L
#define CLLVIA_GLPITCH_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GLPITCH_GLPITCH          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GTAGCTL                  0x2858L
#define CLLVIA_GTAGCTL_ALL              ((0x1D      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GTAGCTL_GMCTEN           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1C)
#define CLLVIA_GTAGCTL_GTAGEN           ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1A)
#define CLLVIA_GTAGCTL_GTAGADDR         ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_GTLPITCH                 0x2860L
#define CLLVIA_GTLPITCH_ALL             ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_GTLPITCH_GTLPITCH        ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HBUSCTRL                 0x2868L
#define CLLVIA_HBUSCTRL_ALL             ((0x0F      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HBUSCTRL_VBNMPT          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xE )
#define CLLVIA_HBUSCTRL_FLSHVWPB       (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xD )  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HBUSCTRL_MBNMPT          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xC )
#define CLLVIA_HBUSCTRL_FLSHMWPB       (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xD )  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HBUSCTRL_HBNMPT          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xA )
#define CLLVIA_HBUSCTRL_FLSHHWPB       (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x9 )  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_HBUSCTRL_INTSEEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_HBUSCTRL_INTPEEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x7 )
#define CLLVIA_HBUSCTRL_PE2SEEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x6 )
#define CLLVIA_HBUSCTRL_ARPRCMD         ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_HBUSCTRL_VIARCMD         ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x2 )
#define CLLVIA_HBUSCTRL_MVPRCMD         ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HCONFIG                  0x2870L
#define CLLVIA_HCONFIG_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HCONFIG_EXTREGEN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xF)
#define CLLVIA_HCONFIG_VMSROM           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xE)
#define CLLVIA_HCONFIG_VMCTRLR          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xD)
#define CLLVIA_HCONFIG_GMODNB           ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0xB)
#define CLLVIA_HCONFIG_USRCNFG          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xA)
#define CLLVIA_HCONFIG_VCTLRDY          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x9 )
#define CLLVIA_HCONFIG_ACCPRST          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_HCONFIG_MVPCLK           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x7 )
#define CLLVIA_HCONFIG_MVPPRST          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x6 )
#define CLLVIA_HCONFIG_VIAMODE          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x5 )
#define CLLVIA_HCONFIG_NBMEMBK          ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x3 )
#define CLLVIA_HCONFIG_MEMTYPE          ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HDWRTMSK                 0x2878L
#define CLLVIA_HDWRTMSK_ALL             ((0x18      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HDWRTMSK_HDB2WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x10)
#define CLLVIA_HDWRTMSK_HDB1WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_HDWRTMSK_HDB0WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HENDMD                   0x2880L
#define CLLVIA_HENDMD_ALL               ((0x19      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HENDMD_READAS1           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x18)
#define CLLVIA_HENDMD_DONTCARE          ((0x17      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1 )
#define CLLVIA_HENDMD_ENDMODE          (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   

#define CLLVIA_HFSTART                  0x2888L
#define CLLVIA_HFSTART_ALL              ((0x1B      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HFSTART_HFSTART          ((0x1B      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HLPITCH                  0x2890L
#define CLLVIA_HLPITCH_ALL              ((0x1B      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HLPITCH_HLPITCH          ((0x1B      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_HPAGESEL                 0x2898L
#define CLLVIA_HPAGESEL_ALL             ((0x06      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_HPAGESEL_HPAGESEL        ((0x06      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_MACCTMNG                 0x28a0L
#define CLLVIA_MACCTMNG_ALL             ((0x1C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_MACCTMNG_DISCTMR         ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x18)
#define CLLVIA_MACCTMNG_MRASMAX         ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0C)
#define CLLVIA_MACCTMNG_MMINGNT         ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00)
                                        
#define CLLVIA_VBLENGTH                 0x28a8L
#define CLLVIA_VBLENGTH_ALL             ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VBLENGTH_VBLENGTH        ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VC1FOFF                  0x28b0L
#define CLLVIA_VC1FOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VC1FOFF_VC1FOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VC2FOFF                  0x28b8L
#define CLLVIA_VC2FOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VC2FOFF_VC2FOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VC3FOFF                  0x28c0L
#define CLLVIA_VC3FOFF_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VC3FOFF_VC3FOFF          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VDWRTMSK                 0x28c8L
#define CLLVIA_VDWRTMSK_ALL             ((0x18      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VDWRTMSK_VDB2WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x10)
#define CLLVIA_VDWRTMSK_VDB1WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_VDWRTMSK_VDB0WM          ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VFSTART                  0x28d0L
#define CLLVIA_VFSTART_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VFSTART_VFSTART          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VLPITCH                  0x28d8L
#define CLLVIA_VLPITCH_ALL              ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VLPITCH_VLPITCH          ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VTAGCTL                  0x28e0L
#define CLLVIA_VTAGCTL_ALL              ((0x1C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VTAGCTL_VTAGEN           ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1A)
#define CLLVIA_VTAGCTL_VTAGADDR         ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00)
                                        
#define CLLVIA_VTLPITCH                 0x28e8L
#define CLLVIA_VTLPITCH_ALL             ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VTLPITCH_VTLPITCH        ((0x1A      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VCMD                     0x3000L
#define CLLVIA_VCMD_ALL                 ((0x0F      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VCMD_VMCNFG              ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xE)
#define CLLVIA_VCMD_CONTROL             ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xD)
#define CLLVIA_VCMD_SNRDY               ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xC)
#define CLLVIA_VCMD_SB                  ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xB)
#define CLLVIA_VCMD_SA                  ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xA)
#define CLLVIA_VCMD_NBDATA              ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_VCMD_VCMD                ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                          
#define CLLVIA_VDATA0                   0x3008L
#define CLLVIA_VDATA0_ALL               ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VDATA0_VDATA0            ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                          
#define CLLVIA_VDATA1                   0x3010L
#define CLLVIA_VDATA1_ALL               ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VDATA1_VDATA1            ((0x20      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                          
#define CLLVIA_VDID                     0x3018L
#define CLLVIA_VDID_ALL                 ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VDID_NDID                ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_VDID_DID                 ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                          
#define CLLVIA_VEXREP                   0x3020L
#define CLLVIA_VEXREP_ALL               ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VEXREP_VEXREP            ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                          
#define CLLVIA_VGTR                     0x3028L
#define CLLVIA_VGTR_ALL                 ((0xA      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VGTR_GTR                 ((0xA      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                          
#define CLLVIA_VPCTRL                   0x3030L
#define CLLVIA_VPCTRL_ALL               ((0x09      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VPCTRL_SNDINT           (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_VPCTRL_CRINTDST          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x7 )
#define CLLVIA_VPCTRL_VMINTEN           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x6 )
#define CLLVIA_VPCTRL_ERINTEN           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x5 )
#define CLLVIA_VPCTRL_CRINTEN           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_VPCTRL_CSINTDST          ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x2 )
#define CLLVIA_VPCTRL_SNDCMD           (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x1 )  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_VPCTRL_VMCIR            (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
                                                     
#define CLLVIA_VSTATUS                  0x3038L
#define CLLVIA_VSTATUS_ALL              ((0x0C      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VSTATUS_CNFGRD           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xB )
#define CLLVIA_VSTATUS_TPENDING         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0xA )
#define CLLVIA_VSTATUS_VACTIVE          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x9 )
#define CLLVIA_VSTATUS_VINTOVRN         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_VSTATUS_WFTKTW           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x7 )
#define CLLVIA_VSTATUS_VINTST           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x6 )
#define CLLVIA_VSTATUS_EXREPST          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x5 )
#define CLLVIA_VSTATUS_CMDRST           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_VSTATUS_SCMDST           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x3 )
#define CLLVIA_VSTATUS_VMCIRST          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x2 )
#define CLLVIA_VSTATUS_MASK0            ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VSTRMID                  0x3040L
#define CLLVIA_VSTRMID_ALL              ((0x08      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VSTRMID_STRMID1          ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_VSTRMID_STRMID0          ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VHSCLNG                  0x3800L
#define CLLVIA_VHSCLNG_ALL              ((0x06      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VHSCLNG_VHZOOM           ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_VHSCLNG_VHSUBFAC         ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VHWSTART                 0x3808L
#define CLLVIA_VHWSTART_ALL             ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VHWSTART_VHWSTART        ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )

#define CLLVIA_VHWSTOP                  0x3810L
#define CLLVIA_VHWSTOP_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VHWSTOP_VHWSTOP          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )

#define CLLVIA_VPIXFMT                  0x3818L
#define CLLVIA_VPIXFMT_ALL              ((0x0F      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VPIXFMT_VFMTCVR          ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0xD )
#define CLLVIA_VPIXFMT_VBTXTRCT         ((0x05      << CLLVIA_SHIFT_FIELD_SIZE) | 0x8 )
#define CLLVIA_VPIXFMT_VCOLOR           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x7 )
#define CLLVIA_VPIXFMT_VBITCHNL         ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x6 )
#define CLLVIA_VPIXFMT_VNBCHNL          ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLVIA_VPIXFMT_VTSIZE           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x3 )
#define CLLVIA_VPIXFMT_VSTFMT           ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VTCTRL                   0x3820L
#define CLLVIA_VTCTRL_ALL               ((0x18      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VTCTRL_VTRFPL            ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x16)
#define CLLVIA_VTCTRL_SEOFH             ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x15)
#define CLLVIA_VTCTRL_SSOFH             ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x14)
#define CLLVIA_VTCTRL_EOTINTEN          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x13)
#define CLLVIA_VTCTRL_SOTINTEN          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x12)
#define CLLVIA_VTCTRL_VMLINTEN          ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x10)
#define CLLVIA_VTCTRL_VMINTDST          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0F)
#define CLLVIA_VTCTRL_VMLNRV            ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0E)
#define CLLVIA_VTCTRL_VMINTLAD          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0D)
#define CLLVIA_VTCTRL_VMFLDPOL          ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0C)
#define CLLVIA_VTCTRL_VMCTOP            ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x08)
#define CLLVIA_VTCTRL_VMEOTMOD          ((0x03      << CLLVIA_SHIFT_FIELD_SIZE) | 0x05)
#define CLLVIA_VTCTRL_VMSCNMD           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x04)
#define CLLVIA_VTCTRL_NRNSFH            ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x03)
#define CLLVIA_VTCTRL_VMSNPSHT         (((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x02)  | (CLLVIA_WRITE_ONLY << CLLVIA_SHIFT_WRITE_ONLY))   
#define CLLVIA_VTCTRL_VMCSEN            ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x01)
#define CLLVIA_VTCTRL_VMCADIS           ((0x01      << CLLVIA_SHIFT_FIELD_SIZE) | 0x00)
                                               
#define CLLVIA_VVSCLNG                  0x3828L
#define CLLVIA_VVSCLNG_ALL              ((0x06      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VVSCLNG_VVZOOM           ((0x02      << CLLVIA_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLVIA_VVSCLNG_VVSUBFAC         ((0x04      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )

#define CLLVIA_VVWSTART                 0x3830L
#define CLLVIA_VVWSTART_ALL             ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VVWSTART_VVWSTART        ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
                                        
#define CLLVIA_VVWSTOP                  0x3838L
#define CLLVIA_VVWSTOP_ALL              ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLVIA_VVWSTOP_VVWSTOP          ((0x10      << CLLVIA_SHIFT_FIELD_SIZE) | 0x0 )

//===========================================================================
//
//          Definition of registers for PSG
//
//===========================================================================

#define CLLPSG_SHIFT_WRITE_ONLY       0x10L
#define CLLPSG_SHIFT_FIELD_SIZE       0x05L
#define CLLPSG_FIELD_OFFSET_MASK      0x1FL
#define CLLPSG_FIELD_SIZE_MASK        0x3FL
#define CLLPSG_WRITE_ONLY             0x01L
#define CLLPSG_WRITE_ONLY_MASK        (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY)

#define CLLPSG_HCNT                   0x0000L
#define CLLPSG_HCNT_ALL              (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HCNT_HCNT             (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HCNT_HCNTL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HCNT_HCNTH            (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HCNT_RESERVED         (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_VCNT                   0x0002L
#define CLLPSG_VCNT_ALL              (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) )
#define CLLPSG_VCNT_VCNT             (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) )
#define CLLPSG_VCNT_VCNTL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) )
#define CLLPSG_VCNT_VCNTH            (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) )
#define CLLPSG_VCNT_RESERVED         (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) )

#define CLLPSG_HTOTAL                 0x0010L
#define CLLPSG_HTOTAL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HTOTAL_HTOTAL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HTOTAL_HTOTALL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HTOTAL_HTOTALH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HTOTAL_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_HSSYNC                 0x0012L
#define CLLPSG_HSSYNC_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSSYNC_HSSYNC         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSSYNC_HSSYNCL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSSYNC_HSSYNCH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSSYNC_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_HESYNC                 0x0014L
#define CLLPSG_HESYNC_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HESYNC_HESYNC         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HESYNC_HESYNCL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HESYNC_HESYNCH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HESYNC_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_HSPVAL                 0x0016L
#define CLLPSG_HSPVAL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSPVAL_HSPVAL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSPVAL_HSPVALL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSPVAL_HSPVALH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSPVAL_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_HEPVAL                 0x0018L
#define CLLPSG_HEPVAL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HEPVAL_HEPVAL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HEPVAL_HEPVALL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HEPVAL_HEPVALH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HEPVAL_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_HSCLMP                 0x001AL
#define CLLPSG_HSCLMP_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSCLMP_HSCLMP         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSCLMP_HSCLMPL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSCLMP_HSCLMPH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSCLMP_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_HECLMP                 0x001CL
#define CLLPSG_HECLMP_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HECLMP_HECLMP         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HECLMP_HECLMPL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HECLMP_HECLMPH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HECLMP_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_HSPLLFB                0x001EL
#define CLLPSG_HSPLLFB_ALL           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSPLLFB_HSPLLFB       (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSPLLFB_HSPLLFBL      (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSPLLFB_HSPLLFBH      (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HSPLLFB_RESERVED      (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_VTOTAL                 0x0020L
#define CLLPSG_VTOTAL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VTOTAL_VTOTAL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VTOTAL_VTOTALL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VTOTAL_VTOTALH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VTOTAL_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_VSSYNC                 0x0022L
#define CLLPSG_VSSYNC_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSSYNC_VSSYNC         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSSYNC_VSSYNCL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSSYNC_VSSYNCH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSSYNC_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_VESYNC                 0x0024L
#define CLLPSG_VESYNC_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VESYNC_VESYNC         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VESYNC_VESYNCL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VESYNC_VESYNCH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VESYNC_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_VSPVAL                 0x0026L
#define CLLPSG_VSPVAL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSPVAL_VSPVAL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSPVAL_VSPVALL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSPVAL_VSPVALH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSPVAL_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_VEPVAL                 0x0028L
#define CLLPSG_VEPVAL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VEPVAL_VEPVAL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VEPVAL_VEPVALL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VEPVAL_VEPVALH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VEPVAL_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_VSCLMP                 0x002AL
#define CLLPSG_VSCLMP_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSCLMP_VSCLMP         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSCLMP_VSCLMPL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSCLMP_VSCLMPH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VSCLMP_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_VECLMP                 0x002CL
#define CLLPSG_VECLMP_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VECLMP_VECLMP         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VECLMP_VECLMPL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VECLMP_VECLMPH        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VECLMP_RESERVED       (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_SVCNT                  0x002EL
#define CLLPSG_SVCNT_ALL             (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) )
#define CLLPSG_SVCNT_SVCNT           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) )
#define CLLPSG_SVCNT_SVCNTL          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) )
#define CLLPSG_SVCNT_SVCNTH          (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) )
#define CLLPSG_SVCNT_RESERVE         (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) )

#define CLLPSG_HVRCTL                 0x0030L
#define CLLPSG_HVRCTL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_HVRCTL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_HRSTSEL        (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_HRSTPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_HRSTEN         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_HRSBYSYN       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_RESERVED1      (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x6 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_VRSTSEL        (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_VRSTPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_VRSTEN         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_VRSBYSYN       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_VRSTPVAL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_HVRCTL_RESERVED2      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xF ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_OUTCTL                 0x0032L
#define CLLPSG_OUTCTL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_OUTCTL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_PLLFBPOL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_CLAMPPOL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x1 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_PVALPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x2 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_FIELDPOL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_HSYNCPOL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_VSYNCPOL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_NGCSYPOL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x6 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_RESERVED1      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x7 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_FIELDSEL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_FLDCTL         (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_TRGSEL         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_OUTCTL_RESERVED2      (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_CPTCTL                 0x0034L
#define CLLPSG_CPTCTL_ALL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_CPTCTL_CPTCTL         (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_CPTCTL_CAPTPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_CPTCTL_CAPTSEL        (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_CPTCTL_CAPTSOFT       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_CPTCTL_RESERVED       (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_SRSCTL                 0x0036L
#define CLLPSG_SRSCTL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_SRSCTL         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_HSYNCRST       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_VSYNCRST       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x1 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_PLLFBRST       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x2 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_PVALRST        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_CLAMPRST       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_RESERVED1      (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_VCNTRST        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_HCNTRST        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRSCTL_RESERVED2      (((0x06      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_PSGCFG1                0x0038L
#define CLLPSG_PSGCFG1_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG1_PSGCFG1       (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG1_INTRLACE      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG1_RESERVED1     (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG1_FRMSCAN       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG1_PCLKTEST      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG1_RESERVED2     (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_PSGCFG2                0x003AL
#define CLLPSG_PSGCFG2_ALL           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_PSGCFG2       (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_PSGTRMD       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_HALFFRM       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x1 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_PFLDSEL       (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_PTRGPOL       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_TRGBYSYN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_PSOFTRG       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x6 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_PRSTRGDT      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x7 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_PTRGSL        (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGCFG2_RESERVED      (((0x05      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_REGCFG                 0x003CL
#define CLLPSG_REGCFG_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_REGCFG_REGCFG         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_REGCFG_REGCFGL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_REGCFG_REGCFGH        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))

#define CLLPSG_PSGOUT                 0x003EL
#define CLLPSG_PSGOUT_ALL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGOUT_PSGOUT         (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGOUT_VPVAL          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGOUT_FVAL           (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PSGOUT_RESERVED       (((0x06      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_T1SCNT                 0x0040L
#define CLLPSG_T1SCNT_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1SCNT_T1SCNT         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1SCNT_T1SCNTL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1SCNT_T1SCNTH        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_T2SCNT                 0x0042L
#define CLLPSG_T2SCNT_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2SCNT_T2SCNT         (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2SCNT_T2SCNTL        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2SCNT_T2SCNTH        (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_TIMER_SCNT(timer)             (((timer)==1)? CLLPSG_T1SCNT            : CLLPSG_T2SCNT            )
#define CLLPSG_TIMER_SCNT_ALL(timer)         (((timer)==1)? CLLPSG_T1SCNT_ALL        : CLLPSG_T2SCNT_ALL        )
#define CLLPSG_TIMER_SCNT_SCNT(timer)        (((timer)==1)? CLLPSG_T1SCNT_T1SCNT     : CLLPSG_T2SCNT_T2SCNT     )
#define CLLPSG_TIMER_SCNT_SCNTL(timer)       (((timer)==1)? CLLPSG_T1SCNT_T1SCNTL    : CLLPSG_T2SCNT_T2SCNTL    )
#define CLLPSG_TIMER_SCNT_SCNTH(timer)       (((timer)==1)? CLLPSG_T1SCNT_T1SCNTH    : CLLPSG_T2SCNT_T2SCNTH    )

#define CLLPSG_EXP1S                  0x0044L
#define CLLPSG_EXP1S_ALL             (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXP1S_EXP1S           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXP1S_EXP1SL          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXP1S_EXP1SH          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_EXP2S                  0x0046L
#define CLLPSG_EXP2S_ALL             (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXP2S_EXP2S           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXP2S_EXP2SL          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXP2S_EXP2SH          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_TIMER_EXPS(timer)             (((timer)==1)? CLLPSG_EXP1S             : CLLPSG_EXP2S             )
#define CLLPSG_TIMER_EXPS_ALL(timer)         (((timer)==1)? CLLPSG_EXP1S_ALL         : CLLPSG_EXP2S_ALL         )
#define CLLPSG_TIMER_EXPS_EXPS(timer)        (((timer)==1)? CLLPSG_EXP1S_EXP1S       : CLLPSG_EXP2S_EXP2S       )
#define CLLPSG_TIMER_EXPS_EXPSL(timer)       (((timer)==1)? CLLPSG_EXP1S_EXP1SL      : CLLPSG_EXP2S_EXP2SL      )
#define CLLPSG_TIMER_EXPS_EXPSH(timer)       (((timer)==1)? CLLPSG_EXP1S_EXP1SH      : CLLPSG_EXP2S_EXP2SH      )

#define CLLPSG_T1CTL                  0x0048L
#define CLLPSG_T1CTL_ALL             (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1CTL           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1CLKSL         (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1CLKPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1TRGSL         (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1TRGPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1ONESHT        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1TSCLR         (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1TPSCLR        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1CMBN          (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1CTL_T1POL           (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xF ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_T2CTL                  0x004AL
#define CLLPSG_T2CTL_ALL             (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2CTL           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2CLKSL         (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2CLKPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2TRGSL         (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2TRGPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2ONESHT        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2TSCLR         (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2TPSCLR        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2CMBN          (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2CTL_T2POL           (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xF ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_TIMER_CTL(timer)              (((timer)==1)? CLLPSG_T1CTL             : CLLPSG_T2CTL             )
#define CLLPSG_TIMER_CTL_ALL(timer)          (((timer)==1)? CLLPSG_T1CTL_T1ALL       : CLLPSG_T2CTL_T2ALL       )
#define CLLPSG_TIMER_CTL_CTL(timer)          (((timer)==1)? CLLPSG_T1CTL_T1CTL       : CLLPSG_T2CTL_T2CTL       )
#define CLLPSG_TIMER_CTL_CLKSL(timer)        (((timer)==1)? CLLPSG_T1CTL_T1CLKSL     : CLLPSG_T2CTL_T2CLKSL     )
#define CLLPSG_TIMER_CTL_CLKPOL(timer)       (((timer)==1)? CLLPSG_T1CTL_T1CLKPOL    : CLLPSG_T2CTL_T2CLKPOL    )
#define CLLPSG_TIMER_CTL_TRGSL(timer)        (((timer)==1)? CLLPSG_T1CTL_T1TRGSL     : CLLPSG_T2CTL_T2TRGSL     )
#define CLLPSG_TIMER_CTL_TRGPOL(timer)       (((timer)==1)? CLLPSG_T1CTL_T1TRGPOL    : CLLPSG_T2CTL_T2TRGPOL    )
#define CLLPSG_TIMER_CTL_ONESHT(timer)       (((timer)==1)? CLLPSG_T1CTL_T1ONESHT    : CLLPSG_T2CTL_T2ONESHT    )
#define CLLPSG_TIMER_CTL_TSCLR(timer)        (((timer)==1)? CLLPSG_T1CTL_T1TSCLR     : CLLPSG_T2CTL_T2TSCLR     ) 
#define CLLPSG_TIMER_CTL_TPSCLR(timer)       (((timer)==1)? CLLPSG_T1CTL_T1TPSCLR    : CLLPSG_T2CTL_T2TPSCLR    )   
#define CLLPSG_TIMER_CTL_CMBN(timer)         (((timer)==1)? CLLPSG_T1CTL_T1CMBN      : CLLPSG_T2CTL_T2CMBN      ) 
#define CLLPSG_TIMER_CTL_POL(timer)          (((timer)==1)? CLLPSG_T1CTL_T1POL       : CLLPSG_T2CTL_T2POL       )

#define CLLPSG_T1MISCTL               0x004CL
#define CLLPSG_T1MISCTL_ALL          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1MISCTL_T1MISCTL     (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1MISCTL_T1SETARM     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1MISCTL_T1ARMEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1MISCTL_T1SOFTRG     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1MISCTL_T1CNTEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1MISCTL_T1RESET      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T1MISCTL_RESERVED     (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_T2MISCTL               0x004EL
#define CLLPSG_T2MISCTL_ALL          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2MISCTL_T2MISCTL     (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2MISCTL_T2SETARM     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2MISCTL_T2ARMEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2MISCTL_T2SOFTRG     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2MISCTL_T2CNTEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2MISCTL_T2RESET      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_T2MISCTL_RESERVED     (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_TIMER_MISCTL(timer)           (((timer)==1)? CLLPSG_T1MISCTL          : CLLPSG_T2MISCTL          )
#define CLLPSG_TIMER_MISCTL_ALL(timer)       (((timer)==1)? CLLPSG_T1MISCTL_ALL      : CLLPSG_T2MISCTL_ALL      )
#define CLLPSG_TIMER_MISCTL_MISCTL(timer)    (((timer)==1)? CLLPSG_T1MISCTL_T1MISCTL : CLLPSG_T2MISCTL_T2MISCTL )
#define CLLPSG_TIMER_MISCTL_SETARM(timer)    (((timer)==1)? CLLPSG_T1MISCTL_T1SETARM : CLLPSG_T2MISCTL_T2SETARM )
#define CLLPSG_TIMER_MISCTL_ARMEN(timer)     (((timer)==1)? CLLPSG_T1MISCTL_T1ARMEN  : CLLPSG_T2MISCTL_T2ARMEN  )
#define CLLPSG_TIMER_MISCTL_SOFTRG(timer)    (((timer)==1)? CLLPSG_T1MISCTL_T1SOFTRG : CLLPSG_T2MISCTL_T2SOFTRG )
#define CLLPSG_TIMER_MISCTL_CNTEN(timer)     (((timer)==1)? CLLPSG_T1MISCTL_T1CNTEN  : CLLPSG_T2MISCTL_T2CNTEN  )
#define CLLPSG_TIMER_MISCTL_RESET(timer)     (((timer)==1)? CLLPSG_T1MISCTL_T1RESET  : CLLPSG_T2MISCTL_T2RESET  )
#define CLLPSG_TIMER_MISCTL_RESERVED(timer)  (((timer)==1)? CLLPSG_T1MISCTL_RESERVED : CLLPSG_T2MISCTL_RESERVED )

#define CLLPSG_ECSNGT                 0x0050L
#define CLLPSG_ECSNGT_ALL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_ECSNGT_ECSNGT         (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_NGCTL                  0x0052L
#define CLLPSG_NGCTL_ALL             (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_NGCTL_NGCTL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_NGCTL_CSYNSEL         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_NGCTL_SSCSPOL         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_NGCTL_PINHSPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_NGCTL_NGPSCLR         (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_NGCTL_RESERVED        (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_NGCTL_PFDENMD         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xF ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_DTCVSR                 0x0054L
#define CLLPSG_DTCVSR_ALL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_DTCVSR_DTCVSR         (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_EXTCTL1                0x0060L
#define CLLPSG_EXTCTL1_ALL           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_EXTCTL1       (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_PLLSRC        (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_CLKSRC        (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x2 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_SYNCSRC       (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_VALSEL        (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x6 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_CKOUTSEL      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_DECDSRC       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_RGB_DECN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_DHSPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_DVSPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_DSYNCLTC      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL1_SYNCSEL       (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_EXTCTL2                0x0062L
#define CLLPSG_EXTCTL2_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_EXTCTL2       (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_ASYNCDIR      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_ASYNCEN       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_GRABDIR       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_DIGPRTEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_GRBPRTEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_EXPEN         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_ACKOUTEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_DCKOUTEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL2_RESERVED      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xF ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

// Only on CORONA-II and Meteor2/PC104
#define CLLPSG_EXTCTL3L                0x0064L
#define CLLPSG_EXTCTL3L_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_ADC_SLEEP_ALL (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_R_ADC_SLEEP   (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_G_ADC_SLEEP   (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x1 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_B_ADC_SLEEP   (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x2 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_ADC_OEN_ALL   (((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_R_ADC_OEN     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_G_ADC_OEN     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_B_ADC_OEN     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
// Start Meteor2/MC/CompactPCI only
#define CLLPSG_EXTCTL3L_SDATA_EEPROM    ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 )
#define CLLPSG_EXTCTL3L_SCLK_EEPROM    (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_DATACLK_EEPROM (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3L_DIR_EEPROM     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
// End Meteor2/MC/CompactPCI only
#define CLLPSG_EXTCTL3L_RESERVED      (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x6 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_EXTCTL3                0x0064L
#define CLLPSG_EXTCTL3_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3_EXTCTL3       (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3_CLKDEL        (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3_GAINSEL       (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_EXTCTL3_RESERVED      (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

// Only on MeteorII MC
#define CLLPSG_SERINTCTL              0x0066L
#define CLLPSG_SERINTCTL_ALL         ((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) 
#define CLLPSG_SERINTCTL_SERINTCTL   ((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) 
#define CLLPSG_SERINTCTL_SERSDATA    ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 )  
#define CLLPSG_SERINTCTL_SERSCLK     ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) 
#define CLLPSG_SERINTCTL_PLLSEL      ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) 
#define CLLPSG_SERINTCTL_SDATADIR    ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) 
#define CLLPSG_SERINTCTL_B_DAC       ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) 
#define CLLPSG_SERINTCTL_G_DAC       ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) 
#define CLLPSG_SERINTCTL_R_DAC       ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ) 
#define CLLPSG_SERINTCTL_DELAY       ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xF ) 
#define CLLPSG_SERINTCTL_IO1         ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) 
#define CLLPSG_SERINTCTL_IO2         ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) 
#define CLLPSG_SERINTCTL_IO3         ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) 
#define CLLPSG_SERINTCTL_IO4         ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ) 
#define CLLPSG_SERINTCTL_IO          ((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) 
#define CLLPSG_SERINTCTL_IOEN1       ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) 
#define CLLPSG_SERINTCTL_IOEN2       ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) 
#define CLLPSG_SERINTCTL_IOEN3       ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) 
#define CLLPSG_SERINTCTL_IOEN4       ((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xF ) 
#define CLLPSG_SERINTCTL_IOEN        ((0x03      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) 

#define CLLPSG_USRBIT1                0x0068L
#define CLLPSG_USRBIT1_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_USRBIT1_USRBIT1       (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_USRBIT1_USR1          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_USRBIT1_USR2          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ))
#define CLLPSG_USRBIT1_USR3          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ))
#define CLLPSG_USRBIT1_USR4          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ))
#define CLLPSG_USRBIT1_RESERVED      (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ))
// Only on CORONA-II
#define CLLPSG_USRBIT1_USR5          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ))
#define CLLPSG_USRBIT1_USR6          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ))
#define CLLPSG_USRBIT1_RESERVED2     (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ))
//

#define CLLPSG_CTRL422                0x006AL
#define CLLPSG_CTRL422_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_CTRL422_CTRL422       (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_CTRL422_CTRL422L      (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_CTRL422_CTRL422H      (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_CTRL422_RESERVED      (((0x05      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ))
#define CLLPSG_CTRL422_LD422         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_CTRL422_CK422         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_CTRL422_DT422         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ))
#define CLLPSG_CTRL422_DT422WEN      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_PORT422                0x006CL
#define CLLPSG_PORT422_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_PORT422_PORT422       (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_PORT422_USR1IN        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_PORT422_USR0IN        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ))
#define CLLPSG_PORT422_RESERVED1     (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ))
#define CLLPSG_PORT422_USR1OUT       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PORT422_USR2OUT       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PORT422_TRIGEN        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_PORT422_RESERVED      (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ))

#define CLLPSG_SRCCTRL               0x006EL
#define CLLPSG_SRCCTRL_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRCCTRL_SRCCTRL       (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRCCTRL_VIDSEL0       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRCCTRL_VIDSEL1       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x9 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRCCTRL_VIDSEL2       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xA ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRCCTRL_CLKPOL        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xB ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRCCTRL_GAINSEL2      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xC ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_SRCCTRL_CAM_PRESENT   (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xD ))
#define CLLPSG_SRCCTRL_CAM_LOCK      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xE ))

// Only on CORONA-II
#define CLLPSG_VSLOCKDTEC             0x090L
#define CLLPSG_VSLOCKDTEC_ALL        (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_VSLOCKDTEC_L          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_VSLOCKDTEC_H          (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))

#define CLLPSG_VELOCKDTEC             0x090L
#define CLLPSG_VELOCKDTEC_ALL        (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_VELOCKDTEC_L          (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_VELOCKDTEC_H          (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))

#define CLLPSG_LOCKDTEC               0x094L
#define CLLPSG_LOCKDTEC_ALL          (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_LOCKDTEC_SYNCPLSDLY   (((0x04      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_LOCKDTEC_FBKPLSWD     (((0x05      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))
#define CLLPSG_LOCKDTEC_FRCULCK      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0xd ))

#define CLLPSG_CAMDTEC                0x096L
#define CLLPSG_CAMDTEC_ALL           (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_CAMDTEC_TIMEOUTL      (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_CAMDTEC_TIMEOUTH      (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))

#define CLLPSG_LCKLNS                0x098L
#define CLLPSG_LCKLNS_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_LCKLNS_LCKLNS         (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_LCKLNS_UNLCKLNS       (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ))

#define CLLPSG_VDOCTL                 0x009B
#define CLLPSG_VDOCTL_ALL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VDOCTL_NTSC_PAL_SP    (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_VDOCTL_DVI_EN         (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x1 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_ADCCTL                 0x009CL
#define CLLPSG_ADCCTL_ALL            (((0x10      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_ADCCTL_ADCL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_ADCCTL_ADCH           (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x8 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_FLTCTL                 0x009FL
#define CLLPSG_FLTCTL_ALL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_FLTCTL_B_FLT          (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_FLTCTL_G_FLT          (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x2 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))
#define CLLPSG_FLTCTL_R_FLT          (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ) | (CLLPSG_WRITE_ONLY << CLLPSG_SHIFT_WRITE_ONLY))

#define CLLPSG_INTSTAT                0x00A1L
#define CLLPSG_INTSTAT_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_INTSTAT_UART          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ))
#define CLLPSG_INTSTAT_LOCKDTEC      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ))
#define CLLPSG_INTSTAT_FLD_START     (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ))
#define CLLPSG_INTSTAT_CAMDTEC       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x7 ))

#define CLLPSG_INTMASK                0x0A3L
#define CLLPSG_INTMASK_ALL           (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_INTMASK_UART          (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ))
#define CLLPSG_INTMASK_LOCKDTEC      (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ))
#define CLLPSG_INTMASK_FLD_START     (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ))
#define CLLPSG_INTMASK_CAMDTEC       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x7 ))

#define CLLPSG_INTOEN                 0x0A5L
#define CLLPSG_INTOEN_ALL            (((0x08      << CLLPSG_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLPSG_INTOEN_UART           (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x3 ))
#define CLLPSG_INTOEN_LOCKDTEC       (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x4 ))
#define CLLPSG_INTOEN_FLD_START      (((0x02      << CLLPSG_SHIFT_FIELD_SIZE) | 0x5 ))
#define CLLPSG_INTOEN_CAMDTEC        (((0x01      << CLLPSG_SHIFT_FIELD_SIZE) | 0x7 ))
// end CORONA-II only

//===========================================================================
//
//          Definition of registers for LUT
//
//===========================================================================

#define CLLLUT_SHIFT_WRITE_ONLY       0x10L
#define CLLLUT_SHIFT_FIELD_SIZE       0x05L
#define CLLLUT_FIELD_OFFSET_MASK      0x1FL
#define CLLLUT_FIELD_SIZE_MASK        0x3FL
#define CLLLUT_WRITE_ONLY             0x01L
#define CLLLUT_WRITE_ONLY_MASK        (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY)

#define CLLLUT_LUTSTART               0x0080L
#define CLLLUT_LUTSTART_ALL          (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTSTART_LUTSTART     (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))

#define CLLLUT_LUTDATA                0x0081L
#define CLLLUT_LUTDATA_ALL           (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTDATA_LUTDATA       (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))

#define CLLLUT_LUTCTRL1               0x0082L
#define CLLLUT_LUTCTRL1_ALL          (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL1_WLUTSEL      (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x6 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL1_BLUEIN       (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x4 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL1_GREENIN      (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x2 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL1_REDIN        (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL1_IN           (((0x06      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
 
#define CLLLUT_LUTCTRL2               0x0083L
#define CLLLUT_LUTCTRL2_ALL          (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL2_WCTRL        (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x7 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL2_PIPE2        (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x6 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL2_BLUEOUT      (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x4 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL2_GREENOUT     (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x2 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL2_REDOUT       (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL2_OUT          (((0x06      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))

#define CLLLUT_LUTCTRL3               0x0084L
#define CLLLUT_LUTCTRL3_ALL          (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL3_RESERVED     (((0x03      << CLLLUT_SHIFT_FIELD_SIZE) | 0x5 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL3_PACK_MODE    (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x3 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL3_BLUE_DIS     (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x2 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL3_GREEN_DIS    (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x1 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTCTRL3_RED_DIS      (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))

// Only on Corona-II
#define CLLLUT_LUTCTRL3_YCRCB_RANGE  (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x1 ))
#define CLLLUT_LUTCTRL3_SUBSAMPLE_X  (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x2 ))
#define CLLLUT_LUTCTRL3_VALID_POL    (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x5 ))
#define CLLLUT_LUTCTRL3_CRFIRST      (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x6 ))
#define CLLLUT_LUTCTRL3_LUT_SIZE     (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x7 ))

// Only on Corona-II
#define CLLLUT_LUTDLYCTRL             0x0085L
#define CLLLUT_LUTDLYCTRL_ALL        (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTDLYCTRL_DLY        (((0x03      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTDLYCTRL_DLY_BPASS  (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x3 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))
#define CLLLUT_LUTDLYCTRL_CTRL_DLY   (((0x04      << CLLLUT_SHIFT_FIELD_SIZE) | 0x4 )  | (CLLLUT_WRITE_ONLY << CLLLUT_SHIFT_WRITE_ONLY))

#define CLLLUT_C2LUTSTARTL            0x0086L
#define CLLLUT_C2LUTSTARTL_ALL       (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 ))

#define CLLLUT_C2LUTSTARTH            0x0087L
#define CLLLUT_C2LUTSTARTH_ALL       (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 ))

#define CLLLUT_C2LUTDATAL             0x0088L
#define CLLLUT_C2LUTDATAL_ALL        (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 ))

#define CLLLUT_C2LUTDATAH             0x0089L
#define CLLLUT_C2LUTDATAH_ALL        (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 ))

#define CLLLUT_LUTWRITEEN             0x008AL
#define CLLLUT_LUTWRITEEN_ALL        (((0x08      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLLUT_LUTWRITEEN_RGB_WE     (((0x03      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLLUT_LUTWRITEEN_RED_WE     (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x0 ))
#define CLLLUT_LUTWRITEEN_GREEN_WE   (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x1 ))
#define CLLLUT_LUTWRITEEN_BLUE_WE    (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x2 ))
#define CLLLUT_LUTWRITEEN_TAPS_WE    (((0x02      << CLLLUT_SHIFT_FIELD_SIZE) | 0x3 ))
#define CLLLUT_LUTWRITEEN_TAP1_WE    (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x3 ))
#define CLLLUT_LUTWRITEEN_TAP2_WE    (((0x01      << CLLLUT_SHIFT_FIELD_SIZE) | 0x4 ))

//===========================================================================
//
//          Definition of registers for Pixel Packer
//
//===========================================================================

#define CLLPIXPACK_SHIFT_WRITE_ONLY     0x10L
#define CLLPIXPACK_SHIFT_FIELD_SIZE     0x05L
#define CLLPIXPACK_FIELD_OFFSET_MASK    0x1FL
#define CLLPIXPACK_FIELD_SIZE_MASK      0x3FL
#define CLLPIXPACK_WRITE_ONLY           0x01L
#define CLLPIXPACK_WRITE_ONLY_MASK      (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY)

#define CLLPIXPACK_SERINTCTL            0x00C0L
#define CLLPIXPACK_SERINTCTL_ALL       ((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLPIXPACK_SERINTCTL_SERINTCTL ((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLPIXPACK_SERINTCTL_IO1       ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLPIXPACK_SERINTCTL_IO2       ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLPIXPACK_SERINTCTL_IO3       ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLPIXPACK_SERINTCTL_IO4       ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x6 ) 
#define CLLPIXPACK_SERINTCTL_IO        ((0x03      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLPIXPACK_SERINTCTL_IOEN1     ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLPIXPACK_SERINTCTL_IOEN2     ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLPIXPACK_SERINTCTL_IOEN3     ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLPIXPACK_SERINTCTL_IOEN4     ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x7 ) 
#define CLLPIXPACK_SERINTCTL_IOEN      ((0x03      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x3 ) 

#define CLLPIXPACK_MISCTL               0x00C1L
#define CLLPIXPACK_MISCTL_ALL          ((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLPIXPACK_MISCTL_RRCLKEN      ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLPIXPACK_MISCTL_VSYNCPOL     ((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLPIXPACK_MISCTL_RESERVED     ((0x06      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x2 ) 

#define CLLPIXPACK_PIXCTL               0x00C2L
#define CLLPIXPACK_PIXCTL_ALL         (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_PIXCTL_PIXCTL      (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_PIXCTL_PORTSEL     (((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_PIXCTL_MONO        (((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x1 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_PIXCTL_YUV         (((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x2 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_PIXCTL_MONOSEL     (((0x02      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x3 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_PIXCTL_SEQUENCE    (((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x5 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_PIXCTL_CREFPOL     (((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x6 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_PIXCTL_DELAYEN     (((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x7 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))

#define CLLPIXPACK_COUNT1               0x00C3L
#define CLLPIXPACK_COUNT1_ALL         (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_COUNT1_COUNT1      (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_COUNT1_DELAYCOUNT1 (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))

#define CLLPIXPACK_COUNT2               0x00C4L
#define CLLPIXPACK_COUNT2_ALL         (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_COUNT2_DELAYCOUNT2 (((0x02      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_COUNT2_COUNT2      (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))

#define CLLPIXPACK_ENCSYNC              0x00C5L
#define CLLPIXPACK_ENCSYNC_ALL        (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_ENCSYNC_ENCSYNC    (((0x08      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_ENCSYNC_PIDVAL     (((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x0 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_ENCSYNC_VSPOL      (((0x01      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x1 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))
#define CLLPIXPACK_ENCSYNC_RESERVED   (((0x06      << CLLPIXPACK_SHIFT_FIELD_SIZE) | 0x2 ) | (CLLPIXPACK_WRITE_ONLY << CLLPIXPACK_SHIFT_WRITE_ONLY))

//===========================================================================
//
//          Definition of registers for DigModule
//
//===========================================================================

#define CLLDIGMODULE_SHIFT_FIELD_SIZE        0x05L
#define CLLDIGMODULE_FIELD_OFFSET_MASK       0x1FL
#define CLLDIGMODULE_FIELD_SIZE_MASK         0x3FL
#define CLLDIGMODULE_MAX_NB_REGISTER         0x1L

#define CLLDIGMODULE_CMD                     0x00L
#define CLLDIGMODULE_CMD_ALL                ((0x08L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLDIGMODULE_CMD_CMD                ((0x08L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLDIGMODULE_CMD_USERIN1            ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLDIGMODULE_CMD_USERIN0            ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLDIGMODULE_CMD_PINCATOUT          ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLDIGMODULE_CMD_PINCAPTIN          ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLDIGMODULE_CMD_PINCAPTOUTEN       ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLDIGMODULE_CMD_USEROUT1           ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLDIGMODULE_CMD_USEROUT0           ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLDIGMODULE_CMD_TRIGEN             ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLDIGMODULE_CMD_DATAEN             ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLDIGMODULE_CMD_SYNCDIR            ((0x01L  << CLLDIGMODULE_SHIFT_FIELD_SIZE) | 0x07L)

//===========================================================================
//
//          Definition of registers for BT254
//
//===========================================================================

#define CLLBT254_SHIFT_WRITE_ONLY       0x10L
#define CLLBT254_SHIFT_FIELD_SIZE       0x05L
#define CLLBT254_FIELD_OFFSET_MASK      0x1FL
#define CLLBT254_FIELD_SIZE_MASK        0x3FL
#define CLLBT254_WRITE_ONLY             0x01L
#define CLLBT254_WRITE_ONLY_MASK        (CLLBT254_WRITE_ONLY << CLLBT254_SHIFT_WRITE_ONLY)

#define CLLBT254_BT254CMD               0x0090L
#define CLLBT254_BT254CMD_ALL          ((0x08      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLBT254_BT254CMD_BT254CMD     ((0x08      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLBT254_BT254CMD_DIGSELECT    ((0x01      << CLLBT254_SHIFT_FIELD_SIZE) | 0x7 ) 
#define CLLBT254_BT254CMD_SYNCSELECT   ((0x03      << CLLBT254_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLBT254_BT254CMD_COLORSELECT  ((0x02      << CLLBT254_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLBT254_BT254CMD_RESERVED     ((0x01      << CLLBT254_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLBT254_BT254CMD_LEVELSELECT  ((0x01      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLBT254_BTIOOUT0               0x0091L
#define CLLBT254_BTIOOUT0_ALL          ((0x08      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLBT254_BTIOOUT0_BTIOOUT0     ((0x06      << CLLBT254_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLBT254_BTIOOUT0_RESERVED     ((0x02      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLBT254_BTIOOUT1               0x0092L
#define CLLBT254_BTIOOUT1_ALL          ((0x08      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLBT254_BTIOOUT1_BTIOOUT1     ((0x06      << CLLBT254_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLBT254_BTIOOUT1_RESERVED     ((0x02      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLBT254_BTIOOUT2               0x0093L
#define CLLBT254_BTIOOUT2_ALL          ((0x08      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLBT254_BTIOOUT2_BTIOOUT2     ((0x06      << CLLBT254_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLBT254_BTIOOUT2_RESERVED     ((0x02      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLBT254_BTIOOUT3               0x0094L
#define CLLBT254_BTIOOUT3_ALL          ((0x08      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLBT254_BTIOOUT3_BTIOOUT3     ((0x06      << CLLBT254_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLBT254_BTIOOUT3_RESERVED     ((0x02      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLBT254_BTIOOUT4               0x0095L
#define CLLBT254_BTIOOUT4_ALL          ((0x08      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLBT254_BTIOOUT4_BTIOOUT4     ((0x06      << CLLBT254_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLBT254_BTIOOUT4_RESERVED     ((0x02      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLBT254_BTIOOUT5               0x0096L
#define CLLBT254_BTIOOUT5_ALL          ((0x08      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLBT254_BTIOOUT5_BTIOOUT5     ((0x06      << CLLBT254_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLBT254_BTIOOUT5_RESERVED     ((0x02      << CLLBT254_SHIFT_FIELD_SIZE) | 0x0 ) 

//===========================================================================
//
//          Definition of registers for DAC8800
//
//===========================================================================

#define CLLDAC8800_SHIFT_WRITE_ONLY     0x10L
#define CLLDAC8800_SHIFT_FIELD_SIZE     0x05L
#define CLLDAC8800_FIELD_OFFSET_MASK    0x1FL
#define CLLDAC8800_FIELD_SIZE_MASK      0x3FL
#define CLLDAC8800_WRITE_ONLY           0x01L
#define CLLDAC8800_WRITE_ONLY_MASK      (CLLDAC8800_WRITE_ONLY << CLLDAC8800_SHIFT_WRITE_ONLY)

#define CLLDAC8800_DAC_A                0x0000L
#define CLLDAC8800_DAC_A_ALL           ((0x08      << CLLDAC8800_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLDAC8800_DAC_B                0x0001L
#define CLLDAC8800_DAC_B_ALL           ((0x08      << CLLDAC8800_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLDAC8800_DAC_C                0x0002L
#define CLLDAC8800_DAC_C_ALL           ((0x08      << CLLDAC8800_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLDAC8800_DAC_D                0x0003L
#define CLLDAC8800_DAC_D_ALL           ((0x08      << CLLDAC8800_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLDAC8800_DAC_E                0x0004L
#define CLLDAC8800_DAC_E_ALL           ((0x08      << CLLDAC8800_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLDAC8800_DAC_F                0x0005L
#define CLLDAC8800_DAC_F_ALL           ((0x08      << CLLDAC8800_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLDAC8800_DAC_G                0x0006L
#define CLLDAC8800_DAC_G_ALL           ((0x08      << CLLDAC8800_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLDAC8800_DAC_H                0x0007L
#define CLLDAC8800_DAC_H_ALL           ((0x08      << CLLDAC8800_SHIFT_FIELD_SIZE) | 0x0 ) 


//===========================================================================
//
//          Definition of registers for DS1020
//
//===========================================================================

#define CLLDS1020_SHIFT_WRITE_ONLY     0x10L
#define CLLDS1020_SHIFT_FIELD_SIZE     0x05L
#define CLLDS1020_FIELD_OFFSET_MASK    0x1FL
#define CLLDS1020_FIELD_SIZE_MASK      0x3FL
#define CLLDS1020_WRITE_ONLY           0x01L
#define CLLDS1020_WRITE_ONLY_MASK      (CLLDS1020_WRITE_ONLY << CLLDS1020_SHIFT_WRITE_ONLY)

#define CLLDS1020_DELAY                0x0000L
#define CLLDS1020_DELAY_ALL            ((0x08      << CLLDS1020_SHIFT_FIELD_SIZE) | 0x0 ) 


//===========================================================================
//
//          Definition of registers for all UARTs
//
//===========================================================================

#define CLLSERIAL_SHIFT_WRITE_ONLY       0x10L
#define CLLSERIAL_SHIFT_FIELD_SIZE       0x05L
#define CLLSERIAL_FIELD_OFFSET_MASK      0x1FL
#define CLLSERIAL_FIELD_SIZE_MASK        0x3FL
#define CLLSERIAL_WRITE_ONLY             0x01L
#define CLLSERIAL_WRITE_ONLY_MASK        (CLLSERIAL_WRITE_ONLY << CLLSERIAL_SHIFT_WRITE_ONLY)

#define CLLTL16C_RBR                    0x00A0L
#define CLLTL16C_RBR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_RBR_RBR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLTL16C_THR                    0x00ABL // Shadow value, hardware value = 0x00A0
#define CLLTL16C_THR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_THR_THR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLTL16C_IER                    0x00A1L 
#define CLLTL16C_IER_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_IER_IER              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_IER_ERBFI            ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_IER_ETBEI            ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLTL16C_IER_ELSI             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLTL16C_IER_EDSSI            ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLTL16C_IER_SLEEPMODE        ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLTL16C_IER_LOWPOWER         ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLTL16C_IER_RESERVED         ((0x02      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x6 ) 

#define CLLTL16C_IIR                    0x00A2L
#define CLLTL16C_IIR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_IIR_IIR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_IIR_INTPENDING       ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_IIR_INTID            ((0x03      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLTL16C_IIR_RESERVED         ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLTL16C_IIR_ENABLE64         ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLTL16C_IIR_ENABLE           ((0x02      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x6 ) 

#define CLLTL16C_FCR                    0x00AAL // shadow value, hardware value = 0x00A2
#define CLLTL16C_FCR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_FCR_FCR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_FCR_ENABLE           ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_FCR_RECEIVE          ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLTL16C_FCR_TRANSMIT         ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLTL16C_FCR_DMAMODE          ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLTL16C_FCR_RESERVED         ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLTL16C_FCR_ENABLE64         ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLTL16C_FCR_RXTRIGGER        ((0x02      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x6 ) 

#define CLLTL16C_LCR                    0x00A3L
#define CLLTL16C_LCR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_LCR_LCR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_LCR_WLS              ((0x02      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_LCR_STB              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLTL16C_LCR_PEN              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLTL16C_LCR_EPS              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLTL16C_LCR_PARITY           ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLTL16C_LCR_BREAKCTRL        ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x6 ) 
#define CLLTL16C_LCR_DLAB             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x7 ) 

#define CLLTL16C_MCR                    0x00A4L
#define CLLTL16C_MCR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_MCR_MCR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_MCR_DTR              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_MCR_RTS              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLTL16C_MCR_OUT1             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLTL16C_MCR_OUT2             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLTL16C_MCR_LOOP             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLTL16C_MCR_AFE              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLTL16C_MCR_RESERVED         ((0x02      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x6 ) 

#define CLLTL16C_LSR                    0x00A5L
#define CLLTL16C_LSR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_LSR_LSR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_LSR_DR               ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_LSR_OE               ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLTL16C_LSR_PE               ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLTL16C_LSR_FE               ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLTL16C_LSR_BI               ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLTL16C_LSR_THRE             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLTL16C_LSR_TEMT             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x6 ) 
#define CLLTL16C_LSR_ERROR            ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x7 ) 

#define CLLTL16C_MSR                    0x00A6L
#define CLLTL16C_MSR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_MSR_MSR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_MSR_DCTS             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_MSR_DDSR             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLTL16C_MSR_TERI             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLTL16C_MSR_DDCD             ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLTL16C_MSR_CTS              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLTL16C_MSR_DSR              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLTL16C_MSR_RI               ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x6 ) 
#define CLLTL16C_MSR_DCD              ((0x01      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x7 ) 

#define CLLTL16C_SCR                    0x00A7L
#define CLLTL16C_SCR_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_SCR_SCR              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLTL16C_DLL                    0x00A8L // shadow value, Hardware value = 0x00A0
#define CLLTL16C_DLL_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_DLL_DLL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLTL16C_DLM                    0x00A9L // shadow value, Hardware value = 0x00A1
#define CLLTL16C_DLM_ALL              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLTL16C_DLM_DLM              ((0x08      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLMAX3100_CONFIG               0x0001L
#define CLLMAX3100_CONFIG_ALL         ((0x0F      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 

#define CLLMAX3100_DATA                 0x0000L
#define CLLMAX3100_DATA_ALL           ((0x0F      << CLLSERIAL_SHIFT_FIELD_SIZE) | 0x0 ) 

//===========================================================================
//
//          Definition of registers for FRIEDRICH FPGA
//
//===========================================================================

#define CLLFRIEDRICH_MAX_NB_REGISTER        0x2DL
#define CLLFRIEDRICH_SHIFT_WRITE_ONLY       0x10L
#define CLLFRIEDRICH_SHIFT_INDEXED_REG      0x11L
#define CLLFRIEDRICH_SHIFT_FIELD_SIZE       0x05L
#define CLLFRIEDRICH_FIELD_OFFSET_MASK      0x1FL
#define CLLFRIEDRICH_FIELD_SIZE_MASK        0x3FL
#define CLLFRIEDRICH_WRITE_ONLY             0x01L
#define CLLFRIEDRICH_WRITE_ONLY_MASK        (CLLFRIEDRICH_WRITE_ONLY  << CLLFRIEDRICH_SHIFT_WRITE_ONLY )
#define CLLFRIEDRICH_INDEXED_REG            0x01L
#define CLLFRIEDRICH_INDEXED_REG_MASK       (CLLFRIEDRICH_INDEXED_REG << CLLFRIEDRICH_SHIFT_INDEXED_REG)

// Direct access registers

#define CLLFRIEDRICH_INDEX                  0x00E0L
#define CLLFRIEDRICH_INDEX_ALL            ((0x08 << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x0 )

#define CLLFRIEDRICH_DATA                   0x00E1L
#define CLLFRIEDRICH_DATA_ALL             ((0x08 << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x0 )

// Indirect access registers

#define CLLFRIEDRICH_STARTADDR             (0x00L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_STARTADDR_ALL        ((0x20L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_STARTADDR_0          ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_STARTADDR_1          ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x08)
#define CLLFRIEDRICH_STARTADDR_2          ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x10)
#define CLLFRIEDRICH_STARTADDR_3          ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x18)

#define CLLFRIEDRICH_ENDADDR               (0x04L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_ENDADDR_ALL          ((0x20L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_ENDADDR_0            ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_ENDADDR_1            ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x08)
#define CLLFRIEDRICH_ENDADDR_2            ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x10)
#define CLLFRIEDRICH_ENDADDR_3            ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x18)

#define CLLFRIEDRICH_CURADDR               (0x08L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_CURADDR_ALL          ((0x20L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_CURADDR_0            ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_CURADDR_1            ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x08)
#define CLLFRIEDRICH_CURADDR_2            ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x10)
#define CLLFRIEDRICH_CURADDR_3            ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x18)

#define CLLFRIEDRICH_MEMINFO               (0x0CL | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_MEMINFO_ALL          ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_MEMINFO_TYPE         ((0x03L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_MEMINFO_BURSTL       ((0x04L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x03)
#define CLLFRIEDRICH_MEMINFO_CASL         ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x07)

#define CLLFRIEDRICH_GCONFIG1              (0x0DL | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_GCONFIG1_ALL         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_GCONFIG1_FLDPOL      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_GCONFIG1_CAPMD       ((0x02L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_GCONFIG1_FLDGRBMD    ((0x02L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x03)
#define CLLFRIEDRICH_GCONFIG1_VSCPOL      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x05)
#define CLLFRIEDRICH_GCONFIG1_HSCPOL      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x06)
#define CLLFRIEDRICH_GCONFIG1_PX2SCK      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x07)

#define CLLFRIEDRICH_GCONFIG2              (0x0EL | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_GCONFIG2_ALL         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_GCONFIG2_VALPOL      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_GCONFIG2_JPEGTYPE    ((0x02L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_GCONFIG2_PROGRESSIVE ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x03)
#define CLLFRIEDRICH_GCONFIG2_START_FPOL  ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x04)
#define CLLFRIEDRICH_GCONFIG2_FBUSY       ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x05)
#define CLLFRIEDRICH_GCONFIG2_CBSYN       ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x06)


#define CLLFRIEDRICH_STATUS                (0x0FL | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_STATUS_ALL           ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_STATUS_RDYDCMP       ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_STATUS_END           ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x02)
#define CLLFRIEDRICH_STATUS_ZEND          ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x03)
#define CLLFRIEDRICH_STATUS_ZINT          ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x04)
#define CLLFRIEDRICH_STATUS_VSYNC         ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x05)
#define CLLFRIEDRICH_STATUS_ENDPROG       ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x06)
#define CLLFRIEDRICH_STATUS_ODD           ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x07)

#define CLLFRIEDRICH_MASK                  (0x10L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_MASK_ALL             ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_MASK_FBUSY           ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_MASK_CBSYN           ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_MASK_END             ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x02)
#define CLLFRIEDRICH_MASK_ZEND            ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x03)
#define CLLFRIEDRICH_MASK_ZINT            ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x04)
#define CLLFRIEDRICH_MASK_VSYNC           ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x05)
#define CLLFRIEDRICH_MASK_WINDW           ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x06)

#define CLLFRIEDRICH_EXTOEN                (0x11L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_EXTOEN_ALL           ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_EXTOEN_FFOEN         ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_EXTOEN_CLKEN         ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_EXTOEN_STDBY         ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x02)
#define CLLFRIEDRICH_EXTOEN_MODE          ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x03)
/* Use only on MJPEG(913) with MeteorII/MC */
#define CLLFRIEDRICH_EXTOEN_SCLFCT        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x05)
#define CLLFRIEDRICH_EXTOEN_PATCHVALID    ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x06)
#define CLLFRIEDRICH_EXTOEN_BOTHODD       ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x07)

#define CLLFRIEDRICH_TSTPIN                (0x12L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_TSTPIN_ALL           ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_TSTPIN_TSTPN0        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_TSTPIN_TSTPN1        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_TSTPIN_TSTPN2        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x02)
#define CLLFRIEDRICH_TSTPIN_TSTPN3        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x03)
#define CLLFRIEDRICH_TSTPIN_TSTPN4        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x04)
#define CLLFRIEDRICH_TSTPIN_TSTPN5        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x05)
#define CLLFRIEDRICH_TSTPIN_TSTPN6        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x06)
#define CLLFRIEDRICH_TSTPIN_TSTPN7        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x07)

#define CLLFRIEDRICH_CLRSTATUS             (0x13L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_CLRSTATUS_ALL        ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_CLRSTATUS_FBUSY      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_CLRSTATUS_CBSYN      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_CLRSTATUS_DCOMP_RDY  ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_CLRSTATUS_END        ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x02)
#define CLLFRIEDRICH_CLRSTATUS_ZEND       ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x03)
#define CLLFRIEDRICH_CLRSTATUS_ZINT       ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x04)
#define CLLFRIEDRICH_CLRSTATUS_VSYNC      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x05)
#define CLLFRIEDRICH_CLRSTATUS_WINDW      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x06)

#define CLLFRIEDRICH_GO                    (0x14L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_GO_ALL               ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_GO_GO16              ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_GO_GO50              ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_GO_GOPROG            ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x02) // JPEG compression with new data path

//=============== New decompresion (with RDY_DCOMP interrupt) design ========
#define CLLFRIEDRICH_NLINES                (0x15L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_NLINES_ALL           ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)

//=============== JPEG compression with new data path register ==============
#define CLLFRIEDRICH_STARTADDRPROG          (0x20L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_STARTADDRPROG_ALL     ((0x20L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_STARTADDRPROG_0       ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_STARTADDRPROG_1       ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x08)
#define CLLFRIEDRICH_STARTADDRPROG_2       ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x10)
#define CLLFRIEDRICH_STARTADDRPROG_3       ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x18)

#define CLLFRIEDRICH_ENDADDRPROG            (0x24L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_ENDADDRPROG_ALL       ((0x20L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_ENDADDRPROG_0         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_ENDADDRPROG_1         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x08)
#define CLLFRIEDRICH_ENDADDRPROG_2         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x10)
#define CLLFRIEDRICH_ENDADDRPROG_3         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x18)

#define CLLFRIEDRICH_CURADDRPROG            (0x28L | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_CURADDRPROG_ALL       ((0x20L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_CURADDRPROG_0         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_CURADDRPROG_1         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x08)
#define CLLFRIEDRICH_CURADDRPROG_2         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x10)
#define CLLFRIEDRICH_CURADDRPROG_3         ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x18)


#define CLLFRIEDRICH_GCONFIGPROG1           (0x2CL | CLLFRIEDRICH_INDEXED_REG_MASK)
#define CLLFRIEDRICH_GCONFIGPROG1_ALL      ((0x08L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_GCONFIGPROG1_PROG     ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x00)
#define CLLFRIEDRICH_GCONFIGPROG1_RGB      ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x01)
#define CLLFRIEDRICH_GCONFIGPROG1_MET2STD  ((0x01L << CLLFRIEDRICH_SHIFT_FIELD_SIZE) | 0x02)

//===========================================================================
//
//          Definition of registers for ZR36016
//
//===========================================================================

#define CLLZR36016_MAX_NB_REGISTER        0x0BL
#define CLLZR36016_SHIFT_WRITE_ONLY       0x10L
#define CLLZR36016_SHIFT_INDEXED_REG      0x11L
#define CLLZR36016_SHIFT_FIELD_SIZE       0x05L
#define CLLZR36016_FIELD_OFFSET_MASK      0x1FL
#define CLLZR36016_FIELD_SIZE_MASK        0x3FL
#define CLLZR36016_WRITE_ONLY             0x01L
#define CLLZR36016_WRITE_ONLY_MASK        (CLLZR36016_WRITE_ONLY << CLLZR36016_SHIFT_WRITE_ONLY)
#define CLLZR36016_INDEXED_REG            0x01L
#define CLLZR36016_INDEXED_REG_MASK       (CLLZR36016_INDEXED_REG << CLLZR36016_SHIFT_INDEXED_REG)

// Direct access registers

#define CLLZR36016_GO                     0x00L
#define CLLZR36016_GO_ALL               ((0x08 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLZR36016_GO_GO                ((0x01 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLZR36016_GO_VERSION           ((0x04 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x4 )

#define CLLZR36016_MODE                   0x01L
#define CLLZR36016_MODE_ALL             ((0x08 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLZR36016_MODE_MODE            ((0x05 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLZR36016_MODE_MODE03          ((0x04 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x0 )
#define CLLZR36016_MODE_MODE4           ((0x01 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x4 )
#define CLLZR36016_MODE_DSPY            ((0x02 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x5 )
#define CLLZR36016_MODE_CMPR            ((0x01 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x7 )

#define CLLZR36016_ADDRESS                0x02L
#define CLLZR36016_ADDRESS_ALL          ((0x08 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x0 )

#define CLLZR36016_DATA                   0x03L
#define CLLZR36016_DATA_ALL             ((0x08 << CLLZR36016_SHIFT_FIELD_SIZE) | 0x0 )

// Indirect access registers

#define CLLZR36016_SETUP1                (0x00L | CLLZR36016_INDEXED_REG_MASK)
#define CLLZR36016_SETUP1_ALL           ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_SETUP1_CNTI          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_SETUP1_RSTR          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x01)
#define CLLZR36016_SETUP1_SBFL          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x02)
#define CLLZR36016_SETUP1_DSFL          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x03)
#define CLLZR36016_SETUP1_HRFL          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x04)
#define CLLZR36016_SETUP1_HORZ          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x05)
#define CLLZR36016_SETUP1_VERT          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x06)
#define CLLZR36016_SETUP1_CKRT          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x07)

#define CLLZR36016_SETUP2                (0x01L | CLLZR36016_INDEXED_REG_MASK)
#define CLLZR36016_SETUP2_ALL           ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_SETUP2_YMCS          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_SETUP2_SIGN          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x01)
#define CLLZR36016_SETUP2_CCIR          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x02)
#define CLLZR36016_SETUP2_SYEN          ((0x01L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x06)

#define CLLZR36016_NAX                   (0x02L | CLLZR36016_INDEXED_REG_MASK)
#define CLLZR36016_NAX_ALL              ((0x10L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_NAX_LO               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_NAX_HI               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x08)

#define CLLZR36016_PAX                   (0x04L | CLLZR36016_INDEXED_REG_MASK)
#define CLLZR36016_PAX_ALL              ((0x10L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_PAX_LO               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_PAX_HI               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x08)

#define CLLZR36016_NAY                   (0x06L | CLLZR36016_INDEXED_REG_MASK)
#define CLLZR36016_NAY_ALL              ((0x10L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_NAY_LO               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_NAY_HI               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x08)

#define CLLZR36016_PAY                   (0x08L | CLLZR36016_INDEXED_REG_MASK)
#define CLLZR36016_PAY_ALL              ((0x10L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_PAY_LO               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_PAY_HI               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x08)

#define CLLZR36016_NOL                   (0x0AL | CLLZR36016_INDEXED_REG_MASK)
#define CLLZR36016_NOL_ALL              ((0x10L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_NOL_LO               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x00)
#define CLLZR36016_NOL_HI               ((0x08L << CLLZR36016_SHIFT_FIELD_SIZE) | 0x08)

//===========================================================================
//
//          Definition of registers for ZR36050
//
//===========================================================================

#define CLLZR36050_MAX_NB_REGISTER        0x0400L
#define CLLZR36050_SHIFT_WRITE_ONLY       0x18L
#define CLLZR36050_SHIFT_BASELINE_REG     0x19L
#define CLLZR36050_SHIFT_LOSSLESS_REG     0x1AL
#define CLLZR36050_SHIFT_FIELD_SIZE       0x05L
#define CLLZR36050_FIELD_OFFSET_MASK      0x1FL
#define CLLZR36050_FIELD_SIZE_MASK        0x3FL
#define CLLZR36050_WRITE_ONLY             0x01L
#define CLLZR36050_WRITE_ONLY_MASK        (CLLZR36050_WRITE_ONLY << CLLZR36050_SHIFT_WRITE_ONLY)
#define CLLZR36050_BASELINE_REG           0x01L
#define CLLZR36050_BASELINE_REG_MASK      (CLLZR36050_INDEXED_REG << CLLZR36050_SHIFT_INDEXED_REG)
#define CLLZR36050_LOSSLESS_REG           0x01L
#define CLLZR36050_LOSSLESS_REG_MASK      (CLLZR36050_INDEXED_REG << CLLZR36050_SHIFT_INDEXED_REG)

// Control Register Format

#define CLLZR36050_GO                     0x0000L
#define CLLZR36050_GO_ALL               ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_ZERO                   0x0001L
#define CLLZR36050_ZERO_ALL             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_HARDWARE               0x0002L
#define CLLZR36050_HARDWARE_ALL         ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_HARDWARE_BELE        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_HARDWARE_CFIS        ((0x03 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x02 )
#define CLLZR36050_HARDWARE_DMA         ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x05 )
#define CLLZR36050_HARDWARE_MSTR        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x06 )
#define CLLZR36050_HARDWARE_BSWD        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x07 )

#define CLLZR36050_MODE                   0x0003L
#define CLLZR36050_MODE_ALL             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_MODE_COMP            ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x07 )
#define CLLZR36050_MODE_ATP             ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x06 )
#define CLLZR36050_MODE_PASS2           ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x05 )
#define CLLZR36050_MODE_TLM             ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x04 )
#define CLLZR36050_MODE_DCONLY          ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x03 )
#define CLLZR36050_MODE_BRC             ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x02 )

#define CLLZR36050_OPTIONS                0x0004L
#define CLLZR36050_OPTIONS_ALL          ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_OPTIONS_OVF          ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x04 )
#define CLLZR36050_OPTIONS_NSCN         ((0x03 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x05 )

#define CLLZR36050_MBCV                   0x0005L
#define CLLZR36050_MBCV_ALL             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_MARKERSEN              0x0006L
#define CLLZR36050_MARKERSEN_ALL        ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_MARKERSEN_APP        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x07 )
#define CLLZR36050_MARKERSEN_COM        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x06 )
#define CLLZR36050_MARKERSEN_DRI        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x05 )
#define CLLZR36050_MARKERSEN_DQT        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x04 )
#define CLLZR36050_MARKERSEN_DHT        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x03 )
#define CLLZR36050_MARKERSEN_DNL        ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x02 )
#define CLLZR36050_MARKERSEN_DQTI       ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x01 )
#define CLLZR36050_MARKERSEN_DHTI       ((0x01 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_INTREQ0                0x0007L
#define CLLZR36050_INTREQ0_ALL          ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_INTREQ1                0x0008L
#define CLLZR36050_INTREQ1_ALL          ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_TCVNET                 0x000CL
#define CLLZR36050_TCVNET_ALL           ((0x20 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_TCVNET_H             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x18 )
#define CLLZR36050_TCVNET_MH            ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x10 )
#define CLLZR36050_TCVNET_ML            ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x08 )
#define CLLZR36050_TCVNET_L             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_TCVDATA                0x0010L
#define CLLZR36050_TCVDATA_ALL          ((0x20 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_TCVDATA_H            ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x18 )
#define CLLZR36050_TCVDATA_MH           ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x10 )
#define CLLZR36050_TCVDATA_ML           ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x08 )
#define CLLZR36050_TCVDATA_L            ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_SF                     0x0012L
#define CLLZR36050_SF_ALL               ((0x10 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_SF_H                 ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x08 )
#define CLLZR36050_SF_L                 ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_AF                     0x0015L
#define CLLZR36050_AF_ALL               ((0x18 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_AF_H                 ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x10 )
#define CLLZR36050_AF_M                 ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x08 )
#define CLLZR36050_AF_L                 ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_ACV                    0x0019L
#define CLLZR36050_ACV_ALL              ((0x20 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_ACV_H                ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x18 )
#define CLLZR36050_ACV_MH               ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x10 )
#define CLLZR36050_ACV_ML               ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x08 )
#define CLLZR36050_ACV_L                ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_ACT                    0x001DL
#define CLLZR36050_ACT_ALL              ((0x20 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_ACT_H                ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x18 )
#define CLLZR36050_ACT_MH               ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x10 )
#define CLLZR36050_ACT_ML               ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x08 )
#define CLLZR36050_ACT_L                ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_ACVTRUN                0x0021L
#define CLLZR36050_ACVTRUN_ALL          ((0x20 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )
#define CLLZR36050_ACVTRUN_H            ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x18 )
#define CLLZR36050_ACVTRUN_MH           ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x10 )
#define CLLZR36050_ACVTRUN_ML           ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x08 )
#define CLLZR36050_ACVTRUN_L            ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_STATUS0                0x002EL
#define CLLZR36050_STATUS0_ALL          ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_STATUS1                0x002FL
#define CLLZR36050_STATUS1_ALL          ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_COMPDATA               0x0030L
#define CLLZR36050_COMPDATA_ALL         ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

// Beginning of markers definition
#define CLLZR36050_SOF                    0x0040L
#define CLLZR36050_SOF_ALL              ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_SOS1                   0x007AL
#define CLLZR36050_SOS1_ALL             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_SOS2                   0x008AL
#define CLLZR36050_SOS2_ALL             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_SOS3                   0x009AL
#define CLLZR36050_SOS3_ALL             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_SOS4                   0x00AAL
#define CLLZR36050_SOS4_ALL             ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_DRI                    0x00C0L
#define CLLZR36050_DRI_ALL              ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_DNL                    0x00C6L
#define CLLZR36050_DNL_ALL              ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_DQT                    0x00CCL
#define CLLZR36050_DQT_ALL              ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_DHT                    0x01D4L
#define CLLZR36050_DHT_ALL              ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_APP                    0x0380L
#define CLLZR36050_APP_ALL              ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )

#define CLLZR36050_COM                    0x03C0L
#define CLLZR36050_COM_ALL              ((0x08 << CLLZR36050_SHIFT_FIELD_SIZE) | 0x00 )


//===========================================================================
//
//          Definition of registers for ICS1522
//
//===========================================================================

#define CLLICS1522_SHIFT_WRITE_ONLY        0x10L
#define CLLICS1522_SHIFT_FIELD_SIZE        0x05L
#define CLLICS1522_FIELD_OFFSET_MASK       0x1FL
#define CLLICS1522_FIELD_SIZE_MASK         0x3FL
#define CLLICS1522_WRITE_ONLY              0x01L
#define CLLICS1522_WRITE_ONLY_MASK         (CLLICS1522_WRITE_ONLY << CLLICS1522_SHIFT_WRITE_ONLY)

#define CLLICS1522_REG0                   0x0000L
#define CLLICS1522_REG0_ALL             ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG0_REG0            ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG0_F               ((0x0B      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG0_RESERVED        ((0x05      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xB ) 

#define CLLICS1522_REG1                   0x0001L
#define CLLICS1522_REG1_ALL             ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG1_REG1            ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG1_LO              ((0x08      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG1_RESERVED        ((0x08      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x8 ) 
 
#define CLLICS1522_REG2                   0x0002L
#define CLLICS1522_REG2_ALL             ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG2_REG2            ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG2_HI              ((0x08      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG2_RESERVED        ((0x08      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x8 ) 

#define CLLICS1522_REG3                   0x0003L
#define CLLICS1522_REG3_ALL             ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG3_REG3            ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG3_R               ((0x0A      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG3_REF_POL         ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xA ) 
#define CLLICS1522_REG3_RESERVED        ((0x05      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xB ) 

#define CLLICS1522_REG4                 0x0004L
#define CLLICS1522_REG4_ALL             ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG4_REG4            ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG4_VCO             ((0x03      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG4_PFD             ((0x03      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLICS1522_REG4_PDEN            ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x6 ) 
#define CLLICS1522_REG4_INT_FLT         ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x7 ) 
#define CLLICS1522_REG4_INT_VCO         ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x8 ) 
#define CLLICS1522_REG4_CLK_SEL         ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x9 ) 
#define CLLICS1522_REG4_ONE             ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xA ) 
#define CLLICS1522_REG4_RESERVED        ((0x05      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xB ) 

#define CLLICS1522_REG5                   0x0005L
#define CLLICS1522_REG5_ALL             ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG5_REG5            ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG5_FBK_SEL         ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG5_FBK_POL         ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x1 ) 
#define CLLICS1522_REG5_ADD             ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x2 ) 
#define CLLICS1522_REG5_SWLW            ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLICS1522_REG5_PDA             ((0x02      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLICS1522_REG5_PDB             ((0x02      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x6 ) 
#define CLLICS1522_REG5_LD_LG           ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x8 ) 
#define CLLICS1522_REG5_F_EN            ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x9 ) 
#define CLLICS1522_REG5_ONE             ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xA ) 
#define CLLICS1522_REG5_RESERVED        ((0x05      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xB ) 

#define CLLICS1522_REG6                   0x0006L
#define CLLICS1522_REG6_ALL             ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG6_REG6            ((0x10      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG6_L               ((0x03      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x0 ) 
#define CLLICS1522_REG6_OMUX1           ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x3 ) 
#define CLLICS1522_REG6_OMUX2           ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x4 ) 
#define CLLICS1522_REG6_OMUX3           ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x5 ) 
#define CLLICS1522_REG6_OMUX4           ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x6 ) 
#define CLLICS1522_REG6_DACRST          ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x7 ) 
#define CLLICS1522_REG6_AUXEN           ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x8 ) 
#define CLLICS1522_REG6_AUXCLK          ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0x9 ) 
#define CLLICS1522_REG6_EXTREF          ((0x01      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xA ) 
#define CLLICS1522_REG6_RESERVED        ((0x05      << CLLICS1522_SHIFT_FIELD_SIZE) | 0xB ) 

//===========================================================================
//
//          Definition of registers for ENCODER (ADV7176)
//
//===========================================================================
#define CLLENCODER_SHIFT_WRITE_ONLY       0x10L
#define CLLENCODER_SHIFT_FIELD_SIZE       0x05L
#define CLLENCODER_WRITE_ONLY             0x01L
#define CLLENCODER_FIELD_OFFSET_MASK      0x1FL
#define CLLENCODER_FIELD_SIZE_MASK        0x3FL
#define CLLENCODER_MAX_NB_REGISTER        0x13L		
#define CLLENCODER_ALL                  ((0x08L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLENCODER_WRITE_ONLY_MASK        (CLLENCODER_WRITE_ONLY << CLLENCODER_SHIFT_WRITE_ONLY)
#define CLLENCODER_DEVICE_ID              0x54L

#define CLLENCODER_MR0                    0x00L
#define CLLENCODER_MR0_OUTVIDSEL        ((0x02L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLENCODER_MR0_PEDCTRL          ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLENCODER_MR0_FILSEL           ((0x02L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLENCODER_MR0_RGBSINC          ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLENCODER_MR0_OUTSEL           ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLENCODER_MR0_BIT0             ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLENCODER_MR0_ALL              ((0x08L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLENCODER_MR1                    0x01L
#define CLLENCODER_MR1_INTCTRL          ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLENCODER_MR1_CFIELDSEL        ((0x02L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLENCODER_MR1_RCDACCTRL        ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLENCODER_MR1_GLDACCTRL        ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLENCODER_MR1_BCDACCTRL        ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLENCODER_MR1_CDACCTRL         ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLENCODER_MR1_CBARCTRL         ((0x01L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLENCODER_MR1_ALL              ((0x08L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLENCODER_FSC                    0x02L
#define CLLENCODER_FSC_ALL              (((0x20L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_FSC0                   0x02L
#define CLLENCODER_FSC0_ALL             (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_FSC1                   0x03L
#define CLLENCODER_FSC1_ALL             (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_FSC2                   0x04L
#define CLLENCODER_FSC2_ALL             (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_FSC3                   0x05L
#define CLLENCODER_FSC3_ALL             (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_PSC3                   0x06L
#define CLLENCODER_PSC3_ALL             (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)


#define CLLENCODER_TR0                    0x07L
#define CLLENCODER_TR0_MSCTRL           ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLENCODER_TR0_TSEL             ((0x02L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLENCODER_TR0_BLACKINCTRL      ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLENCODER_TR0_LDELAY           ((0x02L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLENCODER_TR0_PPORTCTRL        ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLENCODER_TR0_TR07             ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLENCODER_TR0_ALL              ((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
                                                                                              
#define CLLENCODER_CED0                   0x08L
#define CLLENCODER_CED0_ALL             (((0x08L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_CED1                   0x09L
#define CLLENCODER_CED1_ALL             (((0x08L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_CCD0                   0x0AL
#define CLLENCODER_CCD0_ALL             (((0x08L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_CCD1                   0x0BL
#define CLLENCODER_CCD1_ALL             (((0x08L     << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_TR1                    0x0CL
#define CLLENCODER_TR1_HSW              ((0x02L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLENCODER_TR1_HSFV             ((0x02L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLENCODER_TR1_HVSW             ((0x02L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLENCODER_TR1_HSP              ((0x02L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLENCODER_TR1_ALL              ((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLENCODER_MR2                    0x0DL
#define CLLENCODER_MR2_SPCTRL           ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLENCODER_MR2_GLSEL            ((0x02L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLENCODER_MR2_CCIRCTRL         ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLENCODER_MR2_CHRCTRL          ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLENCODER_MR2_BURSTCTRL        ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLENCODER_MR2_RGBCTRL          ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x06L)
#define CLLENCODER_MR2_LP               ((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x07L)
#define CLLENCODER_MR2_ALL              ((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L)

#define CLLENCODER_NTSC_CTRL0             0x0EL
#define CLLENCODER_NTSC_CTRL0_ALL       (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_NTSC_CTRL1             0x0FL
#define CLLENCODER_NTSC_CTRL1_ALL       (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_NTSC_CTRL2             0x10L
#define CLLENCODER_NTSC_CTRL2_ALL       (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)

#define CLLENCODER_NTSC_CTRL3             0x11L
#define CLLENCODER_NTSC_CTRL3_ALL       (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)
	
#define CLLENCODER_MR3                    0x12L
#define CLLENCODER_MR3_BIT0             (((0x07L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)
#define CLLENCODER_MR3_DACSW            (((0x01L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x07L) | CLLENCODER_WRITE_ONLY_MASK)
#define CLLENCODER_MR3_ALL              (((0x08L      << CLLENCODER_SHIFT_FIELD_SIZE) | 0x00L) | CLLENCODER_WRITE_ONLY_MASK)
//===========================================================================
//
//          Definition of registers for PCF8574
//
//===========================================================================

#define CLLPCF8574_SHIFT_FIELD_SIZE        0x05L
#define CLLPCF8574_FIELD_OFFSET_MASK       0x1FL
#define CLLPCF8574_FIELD_SIZE_MASK         0x3FL
#define CLLPCF8574_MAX_NB_REGISTER          0x2
#define CLLPCF8574_DEVICE_ID                0x40L

#define CLLPCF8574_REG                     0x00L
#define CLLPCF8574_VIDSEL                ((0x01L           << CLLPCF8574_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLPCF8574_USEOUT1               ((0x01L           << CLLPCF8574_SHIFT_FIELD_SIZE) | 0x01L)
#define CLLPCF8574_USEOUT2               ((0x01L           << CLLPCF8574_SHIFT_FIELD_SIZE) | 0x02L)
#define CLLPCF8574_USEIN1                ((0x01L           << CLLPCF8574_SHIFT_FIELD_SIZE) | 0x03L)
#define CLLPCF8574_USEIN2                ((0x01L           << CLLPCF8574_SHIFT_FIELD_SIZE) | 0x04L)
#define CLLPCF8574_VMSENSE               ((0x01L           << CLLPCF8574_SHIFT_FIELD_SIZE) | 0x05L)
#define CLLPCF8574_ALL                   ((0x08L           << CLLPCF8574_SHIFT_FIELD_SIZE) | 0x00L)

//===========================================================================
//
//          Definition of registers for Licence eeprom
//
//===========================================================================

#define CLLEEPROMLICENSE_SHIFT_FIELD_SIZE    0x05L
#define CLLEEPROMLICENSE_FIELD_OFFSET_MASK   0x1FL
#define CLLEEPROMLICENSE_FIELD_SIZE_MASK     0x3FL
#define CLLEEPROMLICENSE_MAX_NB_REGISTER     0xFFL
#define CLLEEPROMLICENSE_ALL               ((0x08L       << CLLEEPROMLICENSE_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLEEPROMLICENSE_DEVICE_ID           0xA0L

#define CLLEEPROMLICENSE_REG                 0x00L
#define CLLEEPROMLICENSE_REG_ALL           ((0x08L       << CLLEEPROMLICENSE_SHIFT_FIELD_SIZE) | 0x00L)

//===========================================================================
//
//          Definition of registers for Toucan and ToucanDac
//
//===========================================================================
#include "..\..\..\..\head\mga\mgaregfi.h"


//===========================================================================
//
//          Definition of registers for Licence eeprom
//
//===========================================================================

#define CLLEEPROMLICENSE_SHIFT_FIELD_SIZE    0x05L
#define CLLEEPROMLICENSE_FIELD_OFFSET_MASK   0x1FL
#define CLLEEPROMLICENSE_FIELD_SIZE_MASK     0x3FL
#define CLLEEPROMLICENSE_MAX_NB_REGISTER     0xFFL
#define CLLEEPROMLICENSE_ALL               ((0x08L       << CLLEEPROMLICENSE_SHIFT_FIELD_SIZE) | 0x00L)
#define CLLEEPROMLICENSE_DEVICE_ID           0xA0L

#define CLLEEPROMLICENSE_REG                 0x00L
#define CLLEEPROMLICENSE_REG_ALL           ((0x08L       << CLLEEPROMLICENSE_SHIFT_FIELD_SIZE) | 0x00L)

#endif


