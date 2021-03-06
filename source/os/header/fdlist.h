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

#ifndef __FDLIST_H
#define __FDLIST_H

#include "dev.h"


#define MAX_NUM_DEV_FDLIST 10

typedef struct _FDLIST{
	OS_FOP *osfop;
	int numdev;
	BOOL open;
}fdlist;


int addfdlist(nDEV numdev, OS_FOP* fop);
int readfdlist(nDEV numdev);
int deletefdlist(nDEV numdev);
int chkfdlist(nDEV numdev);

extern fdlist mfdlist[MAX_NUM_DEV_FDLIST];

#endif


