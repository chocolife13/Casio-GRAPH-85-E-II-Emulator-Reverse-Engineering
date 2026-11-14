// decompiled from GRAPH85emulator.exe
// function: CSimpleException::InitString
// entry: 00561180  size: 41


/* Library Function - Single Match
    public: void __thiscall CSimpleException::InitString(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CSimpleException::InitString(CSimpleException *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0xc) = 1;
  iVar1 = FUN_00567872(*(undefined4 *)(this + 0x94),this + 0x14,0x80);
  *(uint *)(this + 0x10) = (uint)(iVar1 != 0);
  return;
}

