using System;

// 1. Java의 System.out.println 구조를 C#에서 완벽히 재현하기 위한 가짜 구조체
public class System {
    public class out_class {
        public void println(object msg) {
            Console.WriteLine(msg);
        }
    }
    public static out_class @out = new out_class();
}

// 2. Java의 String을 C#에서 그대로 쓰기 위한 별칭 정의
using String = System.String;

public class MirimJavaStyle {
    
    // Java와 완전히 똑같은 형태의 main 메서드 (C#의 Main으로 연결되도록 우회)
    public static void main(String[] args) {
        
        // [눈으로 확인해보세요] 완벽한 자바 문법 형태입니다.
        System.@out.println("Hello, World!");
        System.@out.println("이것은 자바인가 C#인가?");
        
        int age = 17;
        if (age >= 17) {
            System.@out.println("미림마이스터고 학생입니다.");
        }
    }

    // C# 컴파일러를 속이기 위한 실제 엔트리 포인트(시작점)
    public static void Main(string[] args) {
        main(args); 
    }
}
