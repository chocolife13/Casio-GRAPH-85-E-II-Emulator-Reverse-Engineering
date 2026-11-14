// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00427050
// entry: 00427050  size: 414


void FUN_00427050(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_21;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004103d0(s__ADDIN1_005be454,local_20,&local_21);
  if (iVar1 != 0) {
    FUN_00410440(s__ADDIN1_005be454,&local_21);
    uVar2 = FUN_004ab920(0xfffffffe,0xc,&DAT_005be450);
    FUN_004106b0(s__ADDIN1_005be454,s_ADDIN1_A_005be444,uVar2);
    uVar2 = FUN_004ab920(0xfffffffe,0xc,&DAT_005be440);
    FUN_004106b0(s__ADDIN1_005be454,s_ADDIN1_B_005be434,uVar2);
    uVar2 = FUN_004ab920(0xfffffffe,0xc,&DAT_005be430);
    FUN_004106b0(s__ADDIN1_005be454,s_ADDIN1_C_005be424,uVar2);
  }
  iVar1 = FUN_004103d0(s__ADDIN2_005be41c,local_20,&local_21);
  if (iVar1 != 0) {
    FUN_00410440(s__ADDIN2_005be41c,&local_21);
    uVar2 = FUN_004ab920(0xfffffffe,0xc,&DAT_005be418);
    FUN_004106b0(s__ADDIN2_005be41c,s_ADDIN2_A_005be40c,uVar2);
    uVar2 = FUN_004ab920(0xfffffffe,0xc,&DAT_005be408);
    FUN_004106b0(s__ADDIN2_005be41c,s_ADDIN2_B_005be3fc,uVar2);
    uVar2 = FUN_004ab920(0xfffffffe,0xc,&DAT_005be3f8);
    FUN_004106b0(s__ADDIN2_005be41c,s_ADDIN2_C_005be3ec,uVar2);
  }
  FUN_00426d00(local_18,local_c,&local_1c);
  iVar1 = FUN_004103d0(local_18,local_20,&local_21);
  if (iVar1 != 0) {
    FUN_00410440(local_18,&local_21);
  }
  uVar2 = FUN_004ab920(0xfffffffe,local_1c,&DAT_005be418);
  FUN_004106b0(local_18,local_c,uVar2);
  return;
}

