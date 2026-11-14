// decompiled from GRAPH85emulator.exe
// function: CWnd::OnDisplayChange
// entry: 00565524  size: 73


/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDisplayChange(unsigned int,long)
   
   Library: Visual Studio 2003 Release */

long __thiscall CWnd::OnDisplayChange(CWnd *this,uint param_1,long param_2)

{
  CWnd *pCVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  pCVar1 = (CWnd *)FUN_00552b70();
  if (pCVar1 == this) {
    FUN_005681d5();
  }
  uVar2 = FUN_005661de();
  if ((uVar2 & 0x40000000) == 0) {
    iVar3 = FUN_00563365();
    FUN_00564bff(*(undefined4 *)(this + 0x1c),*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),
                 *(undefined4 *)(iVar3 + 0xc),1,1);
  }
  lVar4 = FUN_0056339a();
  return lVar4;
}

