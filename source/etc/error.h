/****************************************************************************
 *                                                JeeLab J-Guider ver Zero
 *--------------------------------------------------------------------------------------------------------*
 *
 *  - lisence -
 * 'JeeLab J-Guider' represents the best 'FREE Guider' for tiny microcomputer currently available on the market.
 * This code is 'FREE OF CHARGE' for non-commercial & individual developer only. Both of these conditions should be met!
 * If you are not a individual developer or if you want to use your computer for business purposes,
 * we offer a wide range of more suitable verison providing higher speed and more efficient processing.
 * If you use more infomation, contact us using e-mail or visit our site.
 *
 * e-mail: 
 *              info@jeelab.com
 *  
 * web site:    
 *               http://www.jeelab.com
 *               http://jeelab.tistory.com
 *
 ****************************************************************************/

#ifndef __ERROR_H
#define __ERROR_H

#include "override.h"

/* ERROR CODE FOR SYSTEM*/
#define ERR_GOTHROU_UART0_OVERFLOW -95
#define ERR_RXUART0_BUFF_OVERFLOW_RCV_SKIP -94 // Rxdata가 처리 되지 않아서 
#define ERR_EMPTY_RXBUFF_UART0 -95 // 아직 RxData가 없다 
#define ERR_PBUFF_UART0_ERR -95 // uart0에서 buffer pointer를 옮길때 error 발생 
#define ERR_LRC_UART0_DEV -96 // uart0에서 lrc error일때 
#define ERR_NO_REGISTED_DEV -97 // device가 등록 되어있지 않다
#define ERR_DUPLICATED_NUMDEV -98 // 중복된 numDev를 사용했음
#define ERR_UNKNOWNED_NUM_DEV -99 // 알수 없는 numDev를 insmode 했음
#define ERR_FDLIST_FULL -100 // FDlist가 꽉 찼음 
#define ERR_ALREADY_OPENED -101 // open이 이미 실행 되어 있는 상태의 device
#define ERR_DB_START_ADDRESS_NOT_SEARCH -102 // 시작되는 DB address를 찾지 못함 
#define ERR_DB_FULL -103 // db가 꽉 참 
#define ERR_NULL_FUNCTION_CALL_IN_TASK -104 // task에서 next function pointer가 잘못 되어서 0번으로 감 
#define ERR_NULL_FUNCTION_CALL_IN_FASTTASK -105 // task에서 next function pointer가 잘못 되어서 0번으로 감 
#define ERR_MSG_BUFF_OVERFLOW -106 // message의 buffer 가 full이라서 error 처리葯�蒻㎟沮� 기다리거나 다른방법 
#define ERR_CONTENTS_TLV_WRONG -107 // contentㄴ에 tlv error가 발생 
#define ERR_NOT_ENOUGH_TXDATAFORM  -108 // TEMP_SIZE의 크기가 충분하지 않음 
#define ERR_READ_BUFFER_POINTER_NULL -109 
#define ERR_WRITE_BUFFER_POINTER_NULL -110 

/*WHERE CODE*/
#define WHR_REGISTERDEV		-1	//registerDEV       
#define WHR_GETFD				-2	//getfd             
#define WHR_OPEN				-3	//open              
#define WHR_READ				-4	//read              
#define WHR_WRITE				-5	//write             
#define WHR_CLOSE				-6	//close             
#define WHR_ADDFDLIST			-7 	//addfdlist         
#define WHR_CHKFDLIST			-8	//chkfdlist         
#define WHR_READFDLIST			-9	//readfdlist        
#define WHR_DELETEFDLIST		-10	//deletefdlist      
#define WHR_SENDMSG			-11	//SendMsg           
#define WHR_NULLFUNCTT			-12 //NullFunctT        	
#define WHR_NULLFUNCTFT		-13	//NullFunctFT       	
#define WHR_GOTHROUGHTX0FR	-14	//GoThroughTxUart0fr	



#define ERR_RD_BUF_OVERFLOW -30 // Read함수에 할당된 buffer의 size가 작음 
#define ERR_RD_NODATA -1


#if KERNEL_DEBUG == TRUE
	int err(int errno, signed char where);
#else
	#define err(a, b) 0
#endif

#endif
