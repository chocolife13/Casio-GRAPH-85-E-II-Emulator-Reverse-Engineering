// decompiled from GRAPH85emulator.exe
// function: Global::Detach
// entry: 0056a712  size: 42


/* Library Function - Multiple Matches With Same Base Name
    public: void * __thiscall CGdiObject::Detach(void)
    public: struct _IMAGELIST * __thiscall CImageList::Detach(void)
    public: struct HMENU__ * __thiscall CMenu::Detach(void)
   
   Library: Visual Studio */

int __fastcall Detach(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = FUN_0056a65e(0);
    if (iVar2 != 0) {
      FUN_00562258(*(undefined4 *)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}

