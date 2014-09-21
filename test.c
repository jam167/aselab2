
/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  test.c                                                               */
/*  PRINCIPAL AUTHOR      :  Jiangwenzhong                                                        */
/*  SUBSYSTEM NAME        :  test                                                                 */
/*  MODULE NAME           :  test                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/20                                                           */
/*  DESCRIPTION           :  This is a test for menu program                                      */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by Jiangwenzhong, 2014/09/20
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "linktable.h"
#include "menu.h"

int Help();
int Quit();

tLinkTable * head = NULL;

int main()
{
    head = InitMenu();
    AddMenuData(&head, "help", "menu list", Help);
    AddMenuData(&head, "version", "menu program v2.0", NULL);
    AddMenuData(&head, "quit", "quit menu", Quit);
    StartMenu(head);
}

int Help()
{
    ShowAllCmd(head);
    return 0;
}

int Quit()
{
    printf("quit successfully!\n");
    exit(0);
}
