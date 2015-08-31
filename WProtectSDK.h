#ifdef  __GNUC__
#define WProtectBegin() __asm__(".byte 0xEB\n\t.byte 0xf\n\t.string \"WProtect Begin\"\n\t");   
#define WProtectEnd() __asm__(".byte 0xEB\n\t.byte 0xd\n\t.string \"WProtect End\"\n\t"); 
#endif

#ifdef _MSC_VER
#endif
