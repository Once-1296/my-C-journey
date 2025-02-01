 f1 = fopen("users.txt", "a");
        fprintf(f1, "%s, %s, %s, %s, %d\n", name, emailid, username, password, age);
        fclose(f1);