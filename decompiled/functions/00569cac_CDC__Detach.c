// decompiled from GRAPH85emulator.exe
// function: CDC::Detach
// entry: 00569cac  size: 49


/* Library Function - Single Match
    public: struct HDC__ * __thiscall CDC::Detach(void)
   
   Library: Visual Studio 2003 Release */

HDC__ * __thiscall CDC::Detach(CDC *this)

{
  HDC__ *pHVar1;
  int iVar2;
  
  pHVar1 = *(HDC__ **)(this + 4);
  if (pHVar1 != (HDC__ *)0x0) {
    iVar2 = FUN_00569bee(0);
    if (iVar2 != 0) {
      FUN_00562258(*(undefined4 *)(this + 4));
    }
  }
  (**(code **)(*(int *)this + 0x14))();
  *(undefined4 *)(this + 4) = 0;
  return pHVar1;
}

