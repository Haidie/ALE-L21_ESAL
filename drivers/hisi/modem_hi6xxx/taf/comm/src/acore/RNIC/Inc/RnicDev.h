
#ifndef __RNIC_DEV_H__
#define __RNIC_DEV_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "AtRnicInterface.h"
#include "RnicLinuxInterface.h"



/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*******************************************************************************
  3 枚举定义
*******************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
VOS_INT RNIC_StopNetCard(
    struct net_device                  *pstNetDev
);
VOS_INT RNIC_OpenNetCard(
    struct net_device                  *pstNetDev
);

netdev_tx_t RNIC_StartXmit(
    struct sk_buff                     *pstSkb,
    struct net_device                  *pstNetDev
);


VOS_INT RNIC_SetMacAddress(
    struct net_device                  *pstNetDev,
    void                               *pMacAddr
);
VOS_INT RNIC_ChangeMtu(
    struct net_device                  *pstNetDev,
    VOS_INT                             lNewMtu
);
VOS_VOID RNIC_ProcTxTimeout(
    struct net_device                  *pstNetDev
);
VOS_INT RNIC_Ioctrl(
    struct net_device                  *pstNetDev,
    struct ifreq                       *pstIfr,
    VOS_INT                             lCmd
);
VOS_VOID RNIC_DeinitNetCard(
    VOS_VOID                           *pNetDev
);
struct net_device_stats *RNIC_GetNetCardStats(
    struct net_device                  *pstNetDev
);
VOS_INT RNIC_InitNetCard(VOS_VOID);



#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif




