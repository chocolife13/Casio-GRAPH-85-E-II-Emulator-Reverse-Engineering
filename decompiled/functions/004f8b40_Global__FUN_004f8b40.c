// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f8b40
// entry: 004f8b40  size: 62


void FUN_004f8b40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_18 [6];
  
  pcVar3 = s___Disp___005c0d80;
  puVar4 = local_18;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x128);
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar3;
  FUN_005232d0(1,uVar1);
  FUN_00523470(local_18,0x15);
  return;
}

