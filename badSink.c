static void badSink(wchar_t * data)
{
  if(basStatic)
  {
    for (; *data != L'\0'; data++)
    {
      if (*data == SEARCH_CHAR)
      {
        printLine("We have a match!")
        break;
      }
    }
    free(data)
  }
}
void Free_Pointer(SOURCE_STRING)
{
  wchar_t * data;
  data = (wchar_t *)malloc(100*sizeof(wchar_t));
  if (data == NULL) {exit(-1);}
  data[0] = L'\0';
  wcscpy(data, SOURCE_STRING);
  badStatic = 1;
  basSink(data);
}
