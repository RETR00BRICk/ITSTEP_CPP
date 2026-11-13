int main()
{
 FILE* f = nullptr;

 //fopen();
 fopen_s(&f, "test.txt", "w");

 if (!f) {
  std::cout << "Failed to open file.\n";
 }
 else {
  char text[] = "hello world!";
  //fwrite(text, sizeof(char), strlen(text), f);
  //fwrite("\n", sizeof(char), 1, f);
  fputs(text, f);

  fclose(f);

  fopen_s(&f, "test.txt", "r");

  char buffer[256];
  //fread(buffer, sizeof(char), 256, f);

  while (fgets(buffer, 256, f)) {
   std::cout << buffer << '\n';
  }

  //std::cout << buffer << '\n';
 }
}
