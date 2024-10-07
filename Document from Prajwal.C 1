import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Calci {

    public Calci() {
        JFrame frame = new JFrame("Calculator");
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        frame.setSize(500, 500);
        frame.setLayout(new BorderLayout());

        JTextField calciDisplay = new JTextField();
        calciDisplay.setEditable(false);
        calciDisplay.setHorizontalAlignment(SwingConstants.RIGHT);
        calciDisplay.setFont(new Font("Arial", Font.BOLD, 50));
        calciDisplay.setPreferredSize(new Dimension(400, 100));
        frame.add(calciDisplay, BorderLayout.NORTH);

        JPanel btnPanel = new JPanel();
        btnPanel.setLayout(new GridLayout(4, 4, 20, 20));

        String[] buttons = {
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "0", "C", "=", "+"
        };

        final String[] currentOp = {""};
        final double[] operand1 = {0};
        final boolean[] newOperand = {true};

        for (String text : buttons) {
            JButton btn = new JButton(text);
            btn.addActionListener(new ActionListener() {
                public void actionPerformed(ActionEvent e) {
                    String cmd = btn.getText();

                    if (cmd.equals("C")) {
                        calciDisplay.setText("");
                        operand1[0] = 0;
                        currentOp[0] = "";
                        newOperand[0] = true;
                    } 
                    else if (cmd.equals("=")) {
                        if (!currentOp[0].isEmpty()) {
                            double operand2 = Double.parseDouble(calciDisplay.getText());
                            double result = calculate(operand1[0], operand2, currentOp[0]);
                            calciDisplay.setText(String.valueOf(result));
                            currentOp[0] = "";
                            newOperand[0] = true;
                        }
                    } 
                    else if ("+-*/".contains(cmd)) {
                        operand1[0] = Double.parseDouble(calciDisplay.getText());
                        currentOp[0] = cmd;
                        newOperand[0] = true; 
                    } 
                    else {
                        if (newOperand[0]) {
                            calciDisplay.setText(cmd);
                            newOperand[0] = false;
                        } else {
                            calciDisplay.setText(calciDisplay.getText() + cmd);
                        }
                    }
                }
            });
            btnPanel.add(btn);
        }
        frame.add(btnPanel, BorderLayout.CENTER);
        frame.setVisible(true);
    }

    public static double calculate(double operand1, double operand2, String operator) {
        switch (operator) {
            case "+":
                return operand1 + operand2;
            case "-":
                return operand1 - operand2;
            case "*":
                return operand1 * operand2;
            case "/":
                if (operand2 != 0) {
                    return operand1 / operand2;
                } else {
                    JOptionPane.showMessageDialog(null, "Cannot divide by Zero");
                    return 0;
                }
            default:
                return 0;
        }
    }

    public static void main(String[] args) {
        
        new Calci();
    }
}
