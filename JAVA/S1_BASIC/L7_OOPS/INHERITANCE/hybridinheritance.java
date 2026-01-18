interface A{
    void a();
}
interface B extends A{
    void b();
}
class C implements B{
    public void a(){};
    public void b(){};
}