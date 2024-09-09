package lox;

public class AstPrinter{}
/*class AstPrinter implements Expr.Visitor<String>, Stmt.Visitor<String> {
    private Environment environment = new Environment();
    
    String print(Expr expr) {
        return expr.accept(this);
    }

    @Override
    public String visitBinaryExpr(Expr.Binary expr) {
        return parenthesize(expr.operator.lexeme,expr.left, expr.right);
    }

    @Override
    public String visitGroupingExpr(Expr.Grouping expr) {
        return parenthesize("group", expr.expression);
    }

    @Override
    public String visitLiteralExpr(Expr.Literal expr) {
        if (expr.value == null) return "nil";
        return expr.value.toString();
    }

    @Override
    public String visitUnaryExpr(Expr.Unary expr) {
        return parenthesize(expr.operator.lexeme, expr.right);
    }

    @Override
    public String visitVariableExpr(Expr.Variable expr) {
        return expr.name.lexeme;
    }

    @Override
    public String visitSuperExpr(Expr.Super expr){
        return "";
    }
    
    @Override
    public String visitThisExpr(Expr.This expr){
        return "";
    }

    @Override
    public String visitClassStmt(Stmt.Class stmt){
        return "";
    }
    @Override
    public String visitReturnStmt(Stmt.Return stmt){
        return "";
    }
    @Override
    public String visitPrintStmt(Stmt.Print stmt){
        return "";
    }
    @Override
    public String visitBlockStmt(Stmt.Block stmt){
        return "";
    }

    private String parenthesize(String name, Expr... exprs) {
        StringBuilder builder = new StringBuilder();

        builder.append("(").append(name);
        for (Expr expr : exprs) {
            builder.append(" ");
            builder.append(expr.accept(this));
        }
        builder.append(")");

        return builder.toString();
    }

}
*/