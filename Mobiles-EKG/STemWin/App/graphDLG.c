/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.32                          *
*        Compiled Oct  8 2015, 11:59:02                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0   (GUI_ID_USER + 0x26)
#define ID_GRAPH_0   (GUI_ID_USER + 0x27)
#define ID_TEXT_0   (GUI_ID_USER + 0x28)
#define ID_BUTTON_0   (GUI_ID_USER + 0x29)
#define ID_BUTTON_1   (GUI_ID_USER + 0x2A)
#define ID_BUTTON_2   (GUI_ID_USER + 0x2B)
#define ID_BUTTON_3   (GUI_ID_USER + 0x2C)
#define ID_TEXT_1   (GUI_ID_USER + 0x2D)
#define ID_TEXT_2   (GUI_ID_USER + 0x2E)
#define ID_TEXT_3   (GUI_ID_USER + 0x2F)
#define ID_BUTTON_4   (GUI_ID_USER + 0x30)
#define ID_BUTTON_5   (GUI_ID_USER + 0x31)


// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "graph", ID_WINDOW_0, 0, 0, 480, 272, 0, 0x0, 0 },
  { GRAPH_CreateIndirect, "ecg_graph", ID_GRAPH_0, 0, 0, 360, 272, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "txt_heart_rate", ID_TEXT_0, 365, 170, 65, 20, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "bt_volt_incr", ID_BUTTON_0, 434, 35, 36, 36, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "bt_volt_decr", ID_BUTTON_1, 370, 35, 36, 36, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "bt_time_decr", ID_BUTTON_2, 370, 115, 36, 36, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "bt_time_incr", ID_BUTTON_3, 434, 115, 36, 36, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "txt_time_div", ID_TEXT_1, 385, 90, 80, 20, 0, 0x64, 0 },
  { TEXT_CreateIndirect, "txt_volt_div", ID_TEXT_2, 385, 10, 80, 20, 0, 0x64, 0 },
  { TEXT_CreateIndirect, "edit_heart_rate", ID_TEXT_3, 431, 170, 50, 20, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "bt_start_meas", ID_BUTTON_4, 380, 200, 80, 22, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "bt_stop_meas", ID_BUTTON_5, 380, 235, 80, 22, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'graph'
    //
    hItem = pMsg->hWin;
    WINDOW_SetBkColor(hItem, GUI_MAKE_COLOR(0x00000000));
    //
    // Initialization of 'txt_heart_rate'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    TEXT_SetTextColor(hItem, GUI_MAKE_COLOR(0x000000FF));
    TEXT_SetText(hItem, "Heartrate:");
    TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
    //
    // Initialization of 'bt_volt_incr'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetFont(hItem, GUI_FONT_20B_1);
    BUTTON_SetText(hItem, "+");
    //
    // Initialization of 'bt_volt_decr'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    BUTTON_SetFont(hItem, GUI_FONT_32B_1);
    BUTTON_SetText(hItem, "-");
    //
    // Initialization of 'bt_time_decr'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_2);
    BUTTON_SetFont(hItem, GUI_FONT_32B_1);
    BUTTON_SetText(hItem, "-");
    //
    // Initialization of 'bt_time_incr'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_3);
    BUTTON_SetFont(hItem, GUI_FONT_20B_1);
    BUTTON_SetText(hItem, "+");
    //
    // Initialization of 'txt_time_div'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
    TEXT_SetTextColor(hItem, GUI_MAKE_COLOR(0x000000FF));
    TEXT_SetText(hItem, "500ms/div");
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
    //
    // Initialization of 'txt_volt_div'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    TEXT_SetText(hItem, "500mV/div");
    TEXT_SetTextColor(hItem, GUI_MAKE_COLOR(0x000000FF));
    TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
    //
    // Initialization of 'edit_heart_rate'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    TEXT_SetText(hItem, "120/60");
    TEXT_SetTextColor(hItem, GUI_MAKE_COLOR(0x000000FF));
    TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
    //
    // Initialization of 'bt_start_meas'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_4);
    BUTTON_SetFont(hItem, GUI_FONT_20B_1);
    BUTTON_SetText(hItem, "Start");
    //
    // Initialization of 'bt_stop_meas'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_5);
    BUTTON_SetFont(hItem, GUI_FONT_20B_1);
    BUTTON_SetText(hItem, "Stop");
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by 'bt_volt_incr'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by 'bt_volt_decr'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_2: // Notifications sent by 'bt_time_decr'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_3: // Notifications sent by 'bt_time_incr'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_4: // Notifications sent by 'bt_start_meas'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_5: // Notifications sent by 'bt_stop_meas'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       Creategraph
*/
WM_HWIN Creategraph(void);
WM_HWIN Creategraph(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/