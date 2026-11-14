// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c607
// entry: 0056c607  size: 168


void __fastcall FUN_0056c607(int param_1)

{
  HINSTANCE pHVar1;
  int iVar2;
  HMENU pHVar3;
  HACCEL pHVar4;
  
  if (*(int *)(*(int *)(param_1 + 0x60) + -8) == 0) {
    FUN_005677ee(*(undefined4 *)(param_1 + 0x3c));
  }
  if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    iVar2 = FUN_0057497f();
    pHVar1 = *(HINSTANCE *)(iVar2 + 0xc);
    pHVar3 = LoadMenuA(pHVar1,(LPCSTR)(uint)*(ushort *)(param_1 + 0x44));
    *(HMENU *)(param_1 + 0x2c) = pHVar3;
    pHVar4 = LoadAcceleratorsA(pHVar1,(LPCSTR)(uint)*(ushort *)(param_1 + 0x44));
    *(HACCEL *)(param_1 + 0x30) = pHVar4;
  }
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x34) == 0)) {
    iVar2 = FUN_0057497f();
    pHVar1 = *(HINSTANCE *)(iVar2 + 0xc);
    pHVar3 = LoadMenuA(pHVar1,(LPCSTR)(uint)*(ushort *)(param_1 + 0x40));
    *(HMENU *)(param_1 + 0x34) = pHVar3;
    pHVar4 = LoadAcceleratorsA(pHVar1,(LPCSTR)(uint)*(ushort *)(param_1 + 0x40));
    *(HACCEL *)(param_1 + 0x38) = pHVar4;
  }
  if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x24) == 0)) {
    iVar2 = FUN_0057497f();
    pHVar1 = *(HINSTANCE *)(iVar2 + 0xc);
    pHVar3 = LoadMenuA(pHVar1,(LPCSTR)(uint)*(ushort *)(param_1 + 0x48));
    *(HMENU *)(param_1 + 0x24) = pHVar3;
    pHVar4 = LoadAcceleratorsA(pHVar1,(LPCSTR)(uint)*(ushort *)(param_1 + 0x48));
    *(HACCEL *)(param_1 + 0x28) = pHVar4;
  }
  return;
}

