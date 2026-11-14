// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00476ef0
// entry: 00476ef0  size: 118


void FUN_00476ef0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 local_34 [52];
  
  iVar1 = param_3;
  if (param_3 < 10) {
    puVar2 = (undefined2 *)&DAT_005bf3ec;
  }
  else if (param_3 < 100) {
    puVar2 = &DAT_005ad48c;
  }
  else {
    puVar2 = (undefined2 *)&DAT_005cd010;
  }
  FUN_004b6ef0(local_34,puVar2);
  FUN_0055c2fe(iVar1,&param_3,10);
  FUN_004b6e70(local_34,&param_3);
  FUN_00523a20(param_1,param_2,local_34,0x20);
  return;
}

