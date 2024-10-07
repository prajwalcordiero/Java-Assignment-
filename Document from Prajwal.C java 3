import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Bin_to_Dec {
	 public  Bin_to_Dec(){
	        JFrame Frame3 = new JFrame("Binary To decimal");
	         Frame3.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	         Frame3.setSize(500,500);
	         Frame3.setLayout(null);



	         JLabel Input = new JLabel( "Input: ");
	         JLabel Output = new JLabel("Output: ");
	         JTextField InputField = new JTextField();
	         JTextField OutputField = new JTextField();
	         JButton ConvertBtn = new JButton("Convert");
	         String[] options = {"Decimal to Binary", "Binary to Decimal"};
	         JComboBox<String> ConversionType = new JComboBox<>(options);


	         Input.setBounds(45, 10, 150, 50);
	        Output.setBounds(50, 60, 150, 50);
	        InputField.setBounds(100, 20, 250, 30);
	        OutputField.setBounds(100, 70, 250, 30);
	        OutputField.setEditable(false); 
	        ConvertBtn.setBounds(100, 170, 120, 50);
	        ConversionType.setBounds(100, 120, 150, 30);




	        ConvertBtn.addActionListener(new ActionListener() {
	          @Override
	          public void actionPerformed(ActionEvent e) {
	              try {
	                  String selectedConversion = (String) ConversionType.getSelectedItem();
	                  if (selectedConversion.equals("Decimal to Binary")) {
	                      int decimal = Integer.parseInt(InputField.getText());
	                      String binary = Integer.toBinaryString(decimal);
	                      OutputField.setText(binary);
	                  } else if (selectedConversion.equals("Binary to Decimal")) {
	                      String binary = InputField.getText();
	                      int decimal = Integer.parseInt(binary, 2);
	                      OutputField.setText(String.valueOf(decimal));
	                  }
	              } catch (NumberFormatException ex) {
	                  OutputField.setText("Invalid Input");
	              }
	          }
	      });





	      Frame3.add(Input);
	      Frame3.add(Output);
	      Frame3.add(InputField);
	      Frame3.add(OutputField);
	      Frame3.add(ConvertBtn);
	      Frame3.add(ConversionType);
	      Frame3.setVisible(true);

	      }

	    public static void main(String[] args) {
	        
	        new Bin_to_Dec();
	    }

}
