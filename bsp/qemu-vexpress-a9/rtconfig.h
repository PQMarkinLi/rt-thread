#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Project Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_USING_SMP
#define RT_CPUS_NR 2
#define RT_ALIGN_SIZE 4
/* RT_THREAD_PRIORITY_8 is not set */
#define RT_THREAD_PRIORITY_32
/* RT_THREAD_PRIORITY_256 is not set */
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 100
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDEL_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 1024
#define RT_USING_TIMER_SOFT
#define RT_TIMER_THREAD_PRIO 4
#define RT_TIMER_THREAD_STACK_SIZE 1024
#define RT_DEBUG
#define RT_DEBUG_COLOR

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE
#define RT_USING_SIGNALS

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_MEMHEAP
/* RT_USING_NOHEAP is not set */
#define RT_USING_SMALL_MEM
/* RT_USING_SLAB is not set */
/* RT_USING_MEMHEAP_AS_HEAP is not set */
#define RT_USING_MEMTRACE
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_DEVICE_OPS
#define RT_USING_INTERRUPT_INFO
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 256
#define RT_CONSOLE_DEVICE_NAME "uart0"
#define RT_VER_NUM 0x40001
#define ARCH_ARM
#define ARCH_ARM_CORTEX_A
#define ARCH_ARM_CORTEX_A9
/* ARCH_CPU_STACK_GROWS_UPWARD is not set */

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* C++ features */

#define RT_USING_CPLUSPLUS

/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
/* FINSH_ECHO_DISABLE_DEFAULT is not set */
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_CMD_SIZE 80
/* FINSH_USING_AUTH is not set */
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
/* FINSH_USING_MSH_ONLY is not set */
#define FINSH_ARG_MAX 10

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 2
#define DFS_FILESYSTEM_TYPES_MAX 8
#define DFS_FD_MAX 16
/* RT_USING_DFS_MNTTABLE is not set */
#define RT_USING_DFS_ELMFAT

/* elm-chan's FatFs, Generic FAT Filesystem Module */

#define RT_DFS_ELM_CODE_PAGE 437
#define RT_DFS_ELM_WORD_ACCESS
/* RT_DFS_ELM_USE_LFN_0 is not set */
/* RT_DFS_ELM_USE_LFN_1 is not set */
/* RT_DFS_ELM_USE_LFN_2 is not set */
#define RT_DFS_ELM_USE_LFN_3
#define RT_DFS_ELM_USE_LFN 3
#define RT_DFS_ELM_MAX_LFN 255
#define RT_DFS_ELM_DRIVES 2
#define RT_DFS_ELM_MAX_SECTOR_SIZE 4096
/* RT_DFS_ELM_USE_ERASE is not set */
#define RT_DFS_ELM_REENTRANT
#define RT_USING_DFS_DEVFS
#define RT_USING_DFS_ROMFS
#define RT_USING_DFS_RAMFS
/* RT_USING_DFS_UFFS is not set */
/* RT_USING_DFS_JFFS2 is not set */
/* RT_USING_DFS_NFS is not set */

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SERIAL
#define RT_SERIAL_USING_DMA
#define RT_SERIAL_RB_BUFSZ 64
/* RT_USING_CAN is not set */
/* RT_USING_HWTIMER is not set */
/* RT_USING_CPUTIME is not set */
#define RT_USING_I2C
#define RT_USING_I2C_BITOPS
#define RT_USING_PIN
/* RT_USING_ADC is not set */
/* RT_USING_PWM is not set */
#define RT_USING_MTD_NOR
#define RT_USING_MTD_NAND
#define RT_MTD_NAND_DEBUG
/* RT_USING_MTD is not set */
/* RT_USING_PM is not set */
#define RT_USING_RTC
#define RT_USING_SOFT_RTC
#define RT_USING_SDIO
#define RT_SDIO_STACK_SIZE 512
#define RT_SDIO_THREAD_PRIORITY 15
#define RT_MMCSD_STACK_SIZE 1024
#define RT_MMCSD_THREAD_PREORITY 22
#define RT_MMCSD_MAX_PARTITION 16
/* RT_SDIO_DEBUG is not set */
#define RT_USING_SPI
/* RT_USING_QSPI is not set */
#define RT_USING_SPI_MSD
#define RT_USING_SFUD
#define RT_SFUD_USING_SFDP
#define RT_SFUD_USING_FLASH_INFO_TABLE
/* RT_SFUD_USING_QSPI is not set */
/* RT_DEBUG_SFUD is not set */
/* RT_USING_W25QXX is not set */
/* RT_USING_GD is not set */
/* RT_USING_ENC28J60 is not set */
/* RT_USING_SPI_WIFI is not set */
#define RT_USING_WDT
/* RT_USING_AUDIO is not set */
/* RT_USING_SENSOR is not set */

/* Using WiFi */

/* RT_USING_WIFI is not set */

/* Using USB */

/* RT_USING_USB_HOST is not set */
/* RT_USING_USB_DEVICE is not set */

/* POSIX layer and C standard library */

#define RT_USING_LIBC
#define RT_USING_PTHREADS
#define RT_USING_POSIX
#define RT_USING_POSIX_MMAP
#define RT_USING_POSIX_TERMIOS
#define RT_USING_POSIX_AIO
/* RT_USING_MODULE is not set */

/* Network */

/* Socket abstraction layer */

#define RT_USING_SAL

/* protocol stack implement */

#define SAL_USING_LWIP
#define SAL_USING_POSIX
#define SAL_PROTO_FAMILIES_NUM 4

/* light weight TCP/IP stack */

#define RT_USING_LWIP
/* RT_USING_LWIP141 is not set */
#define RT_USING_LWIP202
/* RT_USING_LWIP210 is not set */
#define RT_USING_LWIP_IPV6
/* RT_LWIP_IGMP is not set */
#define RT_LWIP_ICMP
/* RT_LWIP_SNMP is not set */
#define RT_LWIP_DNS
#define RT_LWIP_DHCP
#define IP_SOF_BROADCAST 1
#define IP_SOF_BROADCAST_RECV 1

/* Static IPv4 Address */

#define RT_LWIP_IPADDR "192.168.1.30"
#define RT_LWIP_GWADDR "192.168.1.1"
#define RT_LWIP_MSKADDR "255.255.255.0"
#define RT_LWIP_UDP
#define RT_LWIP_TCP
/* RT_LWIP_RAW is not set */
/* RT_LWIP_PPP is not set */
#define RT_MEMP_NUM_NETCONN 8
#define RT_LWIP_PBUF_NUM 16
#define RT_LWIP_RAW_PCB_NUM 4
#define RT_LWIP_UDP_PCB_NUM 4
#define RT_LWIP_TCP_PCB_NUM 4
#define RT_LWIP_TCP_SEG_NUM 40
#define RT_LWIP_TCP_SND_BUF 8196
#define RT_LWIP_TCP_WND 8196
#define RT_LWIP_TCPTHREAD_PRIORITY 10
#define RT_LWIP_TCPTHREAD_MBOX_SIZE 8
#define RT_LWIP_TCPTHREAD_STACKSIZE 1024
/* LWIP_NO_RX_THREAD is not set */
/* LWIP_NO_TX_THREAD is not set */
#define RT_LWIP_ETHTHREAD_PRIORITY 12
#define RT_LWIP_ETHTHREAD_STACKSIZE 1024
#define RT_LWIP_ETHTHREAD_MBOX_SIZE 8
#define RT_LWIP_REASSEMBLY_FRAG
#define LWIP_NETIF_STATUS_CALLBACK 1
#define SO_REUSE 1
#define LWIP_SO_RCVTIMEO 1
#define LWIP_SO_SNDTIMEO 1
#define LWIP_SO_RCVBUF 1
/* RT_LWIP_NETIF_LOOPBACK is not set */
#define LWIP_NETIF_LOOPBACK 0
/* RT_LWIP_STATS is not set */
/* RT_LWIP_DEBUG is not set */

/* Modbus master and slave stack */

/* RT_USING_MODBUS is not set */

/* AT commands */

/* RT_USING_AT is not set */
/* LWIP_USING_DHCPD is not set */

/* VBUS(Virtual Software BUS) */

/* RT_USING_VBUS is not set */

/* Utilities */

#define RT_USING_LOGTRACE
#define LOG_TRACE_MAX_SESSION 16
/* LOG_TRACE_USING_LEVEL_NOTRACE is not set */
/* LOG_TRACE_USING_LEVEL_ERROR is not set */
/* LOG_TRACE_USING_LEVEL_WARNING is not set */
#define LOG_TRACE_USING_LEVEL_INFO
/* LOG_TRACE_USING_LEVEL_VERBOSE is not set */
/* LOG_TRACE_USING_LEVEL_DEBUG is not set */
/* LOG_TRACE_USING_MEMLOG is not set */
/* RT_USING_RYM is not set */
/* RT_USING_ULOG is not set */
/* RT_USING_UTEST is not set */
#define RT_USING_LWP

/* RT-Thread online packages */

/* IoT - internet of things */

/* PKG_USING_PAHOMQTT is not set */
/* PKG_USING_WEBCLIENT is not set */
/* PKG_USING_WEBNET is not set */
/* PKG_USING_MONGOOSE is not set */
/* PKG_USING_WEBTERMINAL is not set */
/* PKG_USING_CJSON is not set */
/* PKG_USING_JSMN is not set */
/* PKG_USING_LIBMODBUS is not set */
/* PKG_USING_LJSON is not set */
/* PKG_USING_EZXML is not set */
/* PKG_USING_NANOPB is not set */

/* Wi-Fi */

/* Marvell WiFi */

/* PKG_USING_WLANMARVELL is not set */

/* Wiced WiFi */

/* PKG_USING_WLAN_WICED is not set */
/* PKG_USING_RW007 is not set */
/* PKG_USING_COAP is not set */
/* PKG_USING_NOPOLL is not set */
/* PKG_USING_NETUTILS is not set */
/* PKG_USING_AT_DEVICE is not set */
/* PKG_USING_WIZNET is not set */

/* IoT Cloud */

/* PKG_USING_ONENET is not set */
/* PKG_USING_GAGENT_CLOUD is not set */
/* PKG_USING_ALI_IOTKIT is not set */
/* PKG_USING_AZURE is not set */
/* PKG_USING_TENCENT_IOTKIT is not set */
/* PKG_USING_NIMBLE is not set */
/* PKG_USING_OTA_DOWNLOADER is not set */

/* security packages */

/* PKG_USING_MBEDTLS is not set */
/* PKG_USING_libsodium is not set */
/* PKG_USING_TINYCRYPT is not set */

/* language packages */

/* PKG_USING_LUA is not set */
/* PKG_USING_JERRYSCRIPT is not set */
/* PKG_USING_MICROPYTHON is not set */

/* multimedia packages */

/* PKG_USING_OPENMV is not set */
/* PKG_USING_MUPDF is not set */

/* tools packages */

/* PKG_USING_CMBACKTRACE is not set */
/* PKG_USING_EASYFLASH is not set */
/* PKG_USING_EASYLOGGER is not set */
/* PKG_USING_SYSTEMVIEW is not set */
/* PKG_USING_RDB is not set */
/* PKG_USING_QRCODE is not set */
/* PKG_USING_ULOG_EASYFLASH is not set */
/* PKG_USING_ADBD is not set */

/* system packages */

/* PKG_USING_GUIENGINE is not set */
/* PKG_USING_PERSIMMON is not set */
/* PKG_USING_CAIRO is not set */
/* PKG_USING_PIXMAN is not set */
/* PKG_USING_LWEXT4 is not set */
/* PKG_USING_PARTITION is not set */
/* PKG_USING_FAL is not set */
/* PKG_USING_SQLITE is not set */
/* PKG_USING_RTI is not set */
/* PKG_USING_LITTLEVGL2RTT is not set */
/* PKG_USING_CMSIS is not set */
/* PKG_USING_DFS_YAFFS is not set */
/* PKG_USING_LITTLEFS is not set */

/* peripheral libraries and drivers */

/* sensors drivers */

/* PKG_USING_LSM6DSL is not set */
/* PKG_USING_LPS22HB is not set */
/* PKG_USING_HTS221 is not set */
/* PKG_USING_LSM303AGR is not set */
/* PKG_USING_BME280 is not set */
/* PKG_USING_BMA400 is not set */
/* PKG_USING_BMI160_BMX160 is not set */
/* PKG_USING_SPL0601 is not set */
/* PKG_USING_REALTEK_AMEBA is not set */
/* PKG_USING_SHT2X is not set */
/* PKG_USING_AHT10 is not set */
/* PKG_USING_AP3216C is not set */
/* PKG_USING_STM32_SDIO is not set */
/* PKG_USING_ICM20608 is not set */
/* PKG_USING_U8G2 is not set */
/* PKG_USING_BUTTON is not set */
/* PKG_USING_MPU6XXX is not set */
/* PKG_USING_PCF8574 is not set */
/* PKG_USING_SX12XX is not set */
/* PKG_USING_KENDRYTE_SDK is not set */

/* miscellaneous packages */

/* PKG_USING_LIBCSV is not set */
/* PKG_USING_OPTPARSE is not set */
/* PKG_USING_FASTLZ is not set */
/* PKG_USING_MINILZO is not set */
/* PKG_USING_QUICKLZ is not set */
/* PKG_USING_MULTIBUTTON is not set */
/* PKG_USING_CANFESTIVAL is not set */
/* PKG_USING_ZLIB is not set */
/* PKG_USING_DSTR is not set */
/* PKG_USING_TINYFRAME is not set */
/* PKG_USING_KENDRYTE_DEMO is not set */

/* samples: kernel and components samples */

#define SOC_VEXPRESS_A9
#define RT_USING_UART0
#define RT_USING_UART1
#define BSP_DRV_EMAC
/* BSP_DRV_AUDIO is not set */

#endif
