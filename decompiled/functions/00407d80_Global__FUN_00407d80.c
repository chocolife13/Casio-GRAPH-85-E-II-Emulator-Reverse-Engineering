// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407d80
// entry: 00407d80  size: 327


void __thiscall FUN_00407d80(int param_1,undefined4 param_2,char param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (param_4 == 0) {
    if (param_3 == '\0') {
      if (param_5 == 1) {
        pcVar3 = s_Ans_04d_ERROR_No_File__005a8e80;
      }
      else {
        pcVar3 = s_Ans_04d_ERROR_005a8e70;
      }
    }
    else {
      pcVar3 = s_Ans_04d_OK_005a8e98;
    }
    FUN_00553f40(local_40,pcVar3,param_2);
    puVar2 = local_40;
    goto LAB_00407e95;
  }
  if (param_4 != 1) {
    return;
  }
  if (param_3 == '\0') {
    if (param_5 == 1) {
      FUN_00553f40(local_80,s_Capture_04d_ERROR_No_File__005a8ed8,param_2);
      puVar2 = local_80;
      goto LAB_00407e95;
    }
    if (param_5 == 2) {
      FUN_00553f40(local_80,s_Capture_04d_ERROR_Miss_File__005a8eb8,param_2);
      puVar2 = local_80;
      goto LAB_00407e95;
    }
    pcVar3 = s_Capture_04d_ERROR_005a8ea4;
  }
  else {
    pcVar3 = s_Capture_04d_OK_005a8ef4;
  }
  FUN_00553f40(local_80,pcVar3,param_2);
  puVar2 = local_80;
LAB_00407e95:
  iVar1 = FUN_00553497(*(undefined4 *)(param_1 + 0x1c),&DAT_005a8e6c);
  if (iVar1 != 0) {
    FUN_0055332b(puVar2,iVar1);
    FUN_005533e9(iVar1);
  }
  return;
}

