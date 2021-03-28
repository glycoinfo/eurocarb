/* Filename =Commands.h */
/* Prefix = CM */

#ifndef _COMMANDS_H
#define _COMMANDS_H

#include "parser.h"

extern struct PA_Command GlobalCmds[32];
extern struct PA_Command MainCmds[32];

/* First two characters are used to identify different */
/* types of data */
#define CM_ID_TYPE	(('T'<<8)+'Y')
#define CM_ID_CONV	(('C'<<8)+'O')
#define CM_ID_VARS	(('V'<<8)+'A')
#define CM_ID_RESI	(('R'<<8)+'E')
#define CM_ID_DISA	(('D'<<8)+'I')
#define CM_ID_TRIS	(('T'<<8)+'R')
#define CM_ID_STRU	(('S'<<8)+'T')
#define CM_ID_SPEC	(('S'<<8)+'P')
#define CM_ID_RULE      (('R'<<8)+'U')

#define CM_ACTION_SHOW	'p'
#define CM_ACTION_SAVE	's'
#define CM_ACTION_FREE	'f'

int CM_System();
int CM_Echo();
int CM_Load();
int CM_List();
int CM_End();
int CM_Quit();
int CM_Action(char action);
int CM_Save();
int CM_Ccpnsave();
int CM_Ccpnload();
int CM_Ccpnexcpt();
int CM_CcpnPdb();
int CM_Show();
int CM_Clear();
int CM_Help();

#endif
