// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a6e30
// entry: 004a6e30  size: 679


int FUN_004a6e30(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_460;
  undefined1 local_45f;
  undefined1 local_45e;
  undefined1 local_45d;
  undefined4 local_45c;
  int local_458;
  undefined2 local_454;
  undefined2 local_452;
  undefined2 local_450;
  undefined2 local_44e;
  undefined2 local_44c;
  undefined2 local_44a;
  undefined2 local_448;
  undefined2 local_446;
  undefined2 local_444;
  undefined2 local_442;
  undefined2 local_440;
  undefined2 local_43e;
  undefined2 local_43c;
  undefined2 local_438;
  undefined2 local_436;
  undefined2 local_434;
  undefined2 local_432;
  undefined2 local_430;
  undefined1 local_42c [2];
  short local_42a;
  undefined2 local_418 [262];
  undefined1 local_20c [524];
  
  local_436 = 0x2a;
  local_432 = 0x2a;
  local_45c = 4;
  local_454 = 0;
  local_452 = 0;
  local_450 = 0;
  local_44e = 0;
  local_44c = 0;
  local_44a = 0;
  local_448 = 0;
  local_446 = 0;
  local_444 = 0;
  local_442 = 0;
  local_440 = 0;
  local_43e = 0;
  local_43c = 0;
  local_438 = 0x5c;
  local_434 = 0x2e;
  local_430 = 0;
  local_460 = 0;
  local_45f = 0;
  local_45e = 0;
  local_45d = 0;
  local_458 = 0;
  FUN_0042a490(local_20c,param_1);
  iVar1 = FUN_0042a410(local_20c,&local_438);
  FUN_0042a490(local_20c + iVar1 * 2);
  iVar1 = FUN_0042a100(local_20c,&local_45c,&local_454,local_42c);
  do {
    if (iVar1 < 0) {
      iVar1 = 0;
LAB_004a70b5:
      FUN_0042a180(local_45c);
      if (-1 < iVar1) {
        iVar1 = local_458;
      }
      return iVar1;
    }
    if (local_42a == 0) {
      FUN_0042a490(local_418,param_1);
      iVar1 = FUN_0042a410(local_418);
      local_418[iVar1 + 1] = 0;
      iVar1 = FUN_0042a410(local_418);
      local_418[iVar1] = 0x5c;
      iVar1 = FUN_0042a410(local_418,&local_454);
      FUN_0042a490(local_418 + iVar1);
      iVar1 = FUN_004a6e30(local_418,param_2);
      if ((-1 < iVar1) && ((iVar1 != 0 || (iVar1 = FUN_0041e680(local_418,0), -1 < iVar1))))
      goto LAB_004a7094;
      goto LAB_004a70b5;
    }
    iVar1 = FUN_0042ac10(&local_454,0x2e);
    if (iVar1 == 0) {
LAB_004a7036:
      FUN_0042a490(local_418,param_1);
      iVar1 = FUN_0042a410(local_418);
      local_418[iVar1 + 1] = 0;
      iVar1 = FUN_0042a410(local_418);
      local_418[iVar1] = 0x5c;
      iVar1 = FUN_0042a410(local_418,&local_454);
      FUN_0042a490(local_418 + iVar1);
      iVar1 = FUN_0041e680(local_418,0);
      if (iVar1 < 0) goto LAB_004a70b5;
    }
    else {
      iVar1 = FUN_0042ac10(&local_454,0x2e);
      iVar1 = iVar1 + 2;
      iVar2 = FUN_0042a410(iVar1);
      if (iVar2 != 3) goto LAB_004a7036;
      uVar3 = FUN_0042a410(iVar1);
      FUN_0042aa50(&local_460,iVar1,uVar3);
      if (param_2 == 1) {
        iVar1 = FUN_004a5aa0(&local_460);
        if (iVar1 != 0) goto LAB_004a7036;
        local_458 = 1;
      }
      else {
        if ((param_2 != 2) || (iVar1 = FUN_004a5aa0(&local_460), iVar1 == 0)) goto LAB_004a7036;
        local_458 = 1;
      }
    }
LAB_004a7094:
    iVar1 = FUN_0042a150(local_45c,&local_454,local_42c);
  } while( true );
}

