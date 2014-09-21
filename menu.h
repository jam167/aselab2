
/**************************************************************************************************/
/* Copyright (C) SSE-USTC, 2012-2013                                                              */
/*                                                                                                */
/*  FILE NAME             :  menu.h                                                               */
/*  PRINCIPAL AUTHOR      :  Jiangwenzhong                                                        */
/*  SUBSYSTEM NAME        :  menu                                                                 */
/*  MODULE NAME           :  menu                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2012/09/20                                                           */
/*  DESCRIPTION           :  interface of menu                                                    */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by Jiangwenzhong,2014/09/20
 *
 */

#ifndef _MENU_H_
#define _MENU_H_

#include <stdio.h>
#include <stdlib.h>

/*
 * DataNode Type
 */
typedef struct DataNode
{
    tLinkTableNode * pNext;
    char * cmd;
    char * desc;
    int (* handler)();
} tDataNode;

/*
 * Find a command in Menu
 */
tDataNode * FindCmd(tLinkTable * head, char * cmd);

/*
 * Show all commands in Menu
 */
int ShowAllCmd(tLinkTable * head);

/*
 * Init a Menu
 */
tLinkTable * InitMenu();

/*
 * Add a Menu Data
 */
int AddMenuData(tLinkTable ** head, char s1[], char s2[], int (* handler)());

/*
 * Start Menu
 */
int StartMenu(tLinkTable * head);

#endif /* _MENU_H_ */
