// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a20c0
// entry: 004a20c0  size: 273


void FUN_004a20c0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [52];
  
  local_48 = 0;
  FUN_005234d0(&local_44);
  FUN_00523740();
  FUN_00525b70(4);
  if (param_1 != 0) {
    FUN_005232d0(1,2);
    uVar1 = FUN_0052f6f0(param_1,local_34);
    FUN_005233e0(uVar1);
  }
  if (param_2 != 0) {
    FUN_005232d0(1,3);
    uVar1 = FUN_0052f6f0(param_2,local_34);
    FUN_005233e0(uVar1);
  }
  if (param_3 != 0) {
    FUN_005232d0(1,4);
    uVar1 = FUN_0052f6f0(param_3,local_34);
    FUN_005233e0(uVar1);
  }
  if (param_4 != 0) {
    FUN_005232d0(1,5);
    uVar1 = FUN_0052f6f0(param_4,local_34);
    FUN_005233e0(uVar1);
  }
  do {
    do {
      iVar2 = FUN_00526620(&local_48);
    } while (iVar2 != 0);
    switch(local_48) {
    case 0x7532:
    case 0x753f:
    case 0x7544:
    case 0x7545:
    case 0x754d:
      FUN_005232d0(local_40,local_3c);
      if (local_44 != -1) {
        FUN_00527030();
      }
      FUN_00525bc0();
      return;
    }
  } while( true );
}

