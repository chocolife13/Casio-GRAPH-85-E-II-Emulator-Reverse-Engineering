// decompiled from GRAPH85emulator.exe
// function: CPtrList::AddTail
// entry: 00561dc0  size: 41


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CPtrList::AddTail(void *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__POSITION * __thiscall CPtrList::AddTail(CPtrList *this,void *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = (__POSITION *)FUN_00561d4f(*(undefined4 *)(this + 8),0);
  *(void **)(p_Var1 + 8) = param_1;
  if (*(undefined4 **)(this + 8) == (undefined4 *)0x0) {
    *(__POSITION **)(this + 4) = p_Var1;
  }
  else {
    **(undefined4 **)(this + 8) = p_Var1;
  }
  *(__POSITION **)(this + 8) = p_Var1;
  return p_Var1;
}

