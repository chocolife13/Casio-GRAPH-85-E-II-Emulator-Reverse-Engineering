// decompiled from GRAPH85emulator.exe
// function: Global::AfxDeleteObject
// entry: 0056c26b  size: 25


/* Library Function - Single Match
    void __stdcall AfxDeleteObject(void * *)
   
   Library: Visual Studio 2003 Release */

void AfxDeleteObject(void **param_1)

{
  if (*param_1 != (HGDIOBJ)0x0) {
    DeleteObject(*param_1);
    *param_1 = (void *)0x0;
  }
  return;
}

