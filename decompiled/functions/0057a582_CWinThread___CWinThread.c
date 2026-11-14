// decompiled from GRAPH85emulator.exe
// function: CWinThread::~CWinThread
// entry: 0057a582  size: 79


/* Library Function - Single Match
    public: virtual __thiscall CWinThread::~CWinThread(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CWinThread::~CWinThread(CWinThread *this)

{
  HANDLE hObject;
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059b9e8;
  hObject = (HANDLE)extraout_ECX[10];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
  }
  pAVar1 = AfxGetModuleThreadState();
  if (*(undefined4 **)(pAVar1 + 4) == extraout_ECX) {
    *(undefined4 *)(pAVar1 + 4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00566423();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

