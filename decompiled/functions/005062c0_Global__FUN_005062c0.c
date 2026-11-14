// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005062c0
// entry: 005062c0  size: 173


int FUN_005062c0(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar3 = 0;
  uVar5 = 1;
  puVar4 = (uint *)(param_1 + 0x18);
  do {
    uVar2 = FUN_005180c0(uVar5);
    *puVar4 = uVar2 & 0xffff;
    if ((uVar2 & 0xffff) != 0) {
      if ((uVar2 & 0x1100) == 0x1100) {
        puVar4[-6] = (uint)FUN_00509650;
      }
      else {
        FUN_00517ff0(uVar5,puVar4 + -6);
      }
      uVar1 = FUN_00518080(uVar5);
      *(undefined1 *)(puVar4 + 1) = uVar1;
      if ((*puVar4 & 8) == 0) {
        *(byte *)((int)puVar4 + 5) = (-((*puVar4 & 0x1000) != 0) & 0xfbU) + 5;
      }
      else {
        *(undefined1 *)((int)puVar4 + 5) = 0;
      }
      puVar4[-4] = uVar5;
      if ((*puVar4 & 0x300) == 0) {
        if ((*puVar4 & 1) == 0) {
          *(undefined1 *)((int)puVar4 + 6) = 2;
        }
        else {
          *(undefined1 *)((int)puVar4 + 6) = 3;
        }
      }
      else {
        *(undefined1 *)((int)puVar4 + 6) = 1;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 8;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x1f);
  *(undefined1 *)(iVar3 * 0x20 + 0x1c + param_1) = 0;
  return iVar3;
}

