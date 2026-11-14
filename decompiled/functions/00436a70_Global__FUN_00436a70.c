// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00436a70
// entry: 00436a70  size: 158


int FUN_00436a70(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_4 [4];
  
  FUN_00414db0(local_4);
  thunk_FUN_0040add0();
  if (param_2 == 0xb) {
    FUN_00437e80(param_1,*param_4,param_4[1]);
    iVar1 = 0;
  }
  else {
    if (param_2 == 0xe) {
      uVar3 = *param_4;
      uVar2 = param_4[1];
    }
    else {
      uVar3 = param_4[1];
      uVar2 = param_4[2];
    }
    iVar1 = FUN_00436b10(param_1,param_2,param_3,uVar3,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00437d40(param_1,param_2,param_3,uVar3,uVar2);
    }
  }
  thunk_FUN_0042fb70();
  FUN_00414db0(local_4);
  return iVar1;
}

