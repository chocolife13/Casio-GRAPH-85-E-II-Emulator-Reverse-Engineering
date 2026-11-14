// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005264e0
// entry: 005264e0  size: 263


void FUN_005264e0(void)

{
  int iVar1;
  char **ppcVar2;
  int local_43c;
  char *local_438 [4];
  char *local_428;
  char *local_424;
  undefined1 *local_420;
  undefined1 *local_41c;
  undefined1 *local_418;
  undefined1 *local_414;
  undefined1 local_410 [16];
  undefined1 local_400 [1024];
  
  local_438[0] = s_______TEST_MODE_______005c3dc4;
  local_438[1] = &DAT_005cd010;
  local_438[2] = s__1__Valiable_Manager_005c3dac;
  local_438[3] = s__2__Font_Lang_Check_005c3d94;
  local_428 = s__3__Kidou_Protect_005c3d80;
  local_424 = s__4__AddinMcsData_005c3d6c;
  local_420 = &DAT_005cd010;
  local_41c = &DAT_005cd010;
  local_418 = &DAT_005cd010;
  local_414 = &DAT_005cd010;
  FUN_005262e0(0);
  FUN_005234d0(local_410);
  FUN_00502110(local_400);
  FUN_00523740();
  FUN_005387c0();
  do {
    while( true ) {
      iVar1 = 1;
      ppcVar2 = local_438;
      do {
        FUN_005232d0(1,iVar1);
        FUN_00523470(*ppcVar2,0x15);
        iVar1 = iVar1 + 1;
        ppcVar2 = ppcVar2 + 1;
      } while (iVar1 < 9);
      iVar1 = FUN_00526620(&local_43c);
      if (iVar1 == 0) break;
      if (local_43c == 0x31) {
        FUN_004b0c50();
      }
      else if (local_43c == 0x32) {
        FUN_004a7e50(0,0);
      }
      else if (local_43c == 0x34) {
        FUN_00427050();
      }
    }
  } while ((local_43c != 0x7532) && (local_43c != 0x754d));
  FUN_00502140(local_400);
  FUN_00523630(local_410);
  FUN_00538810();
  return;
}

