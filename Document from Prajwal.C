
import javax.swing.*;
import java.awt.event.*;
import java.util.*;
public class salaryslip {
	
				public  salaryslip(){
		
		JFrame frame = new JFrame();
		frame.setSize(500,500);
		frame.setLayout(null);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		
		JLabel lbl1 = new JLabel("Employee ID");
	    lbl1.setBounds(30,30,250,25);
	    frame.add(lbl1);
	    
	    JTextField txt1 = new JTextField();
	    txt1.setBounds(140,30,120,25);
	    frame.add(txt1);	    
	    
	    JLabel lbl2 = new JLabel("Employee Name");
	    lbl2.setBounds(30,60,250,25);
	    frame.add(lbl2);
	    
	    JTextField txt2 = new JTextField();
	    txt2.setBounds(140,60,120,25);
	    frame.add(txt2);
	    
	    JLabel lbl3 = new JLabel("Address");
	    lbl3.setBounds(30,90,250,25);
	    frame.add(lbl3);
	    
	    JTextField txt3 = new JTextField();
	    txt3.setBounds(140,90,120,25);
	    frame.add(txt3);
	    
	    JLabel lbl4 = new JLabel("Phone Number");
	    lbl4.setBounds(30,120,250,25);
	    frame.add(lbl4);
	    
	    JTextField txt4 = new JTextField();
	    txt4.setBounds(140,120,120,25);
	    frame.add(txt4);
	    
	    JLabel lbl5 = new JLabel("Designation");
	    lbl5.setBounds(30,150,250,25);
	    frame.add(lbl5);
	    
	    String[]dst = {"Professor","Associate Professor","Assistant Professor"};
	    JComboBox<String> drp = new JComboBox<>(dst);    
        drp.setBounds(140, 150,150,25); 
        frame.add(drp);  
	    
	    
	    JLabel lbl6 = new JLabel("Basic Pay");
	    lbl6.setBounds(30,180,250,25);
	    frame.add(lbl6);
	    
	    JTextField txt5 = new JTextField();
	    txt5.setBounds(140,180,120,25);
	    frame.add(txt5);
	
	    JButton btn1 = new JButton("Display");
		btn1.setBounds(30,230,150,25);
		frame.add(btn1);
		
		JButton btn2 = new JButton("Cancel");
		btn2.setBounds(200,230,150,25);
		frame.add(btn2);
	    
		btn2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				frame.dispose();
			}
		});
	    
		btn1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				JFrame frame2 = new JFrame("Bill");
				frame2.setSize(400,500);
				
				JLabel lbl1 = new JLabel("Employee ID");
			    lbl1.setBounds(30,30,250,25);
			    frame2.add(lbl1);
			    
			    JLabel lbl2 = new JLabel("Employee Name");
			    lbl2.setBounds(30,60,250,25);
			    frame2.add(lbl2);
			    
			    JLabel lbl3 = new JLabel("Address");
			    lbl3.setBounds(30,90,250,25);
			    frame2.add(lbl3);
			    
			    JLabel lbl4 = new JLabel("Phone Number");
			    lbl4.setBounds(30,120,250,25);
			    frame2.add(lbl4);
			    
			    JLabel lbl5 = new JLabel("Designation");
			    lbl5.setBounds(30,150,250,25);
			    frame2.add(lbl5);
			    
			    JLabel t6 = new JLabel();
		        t6.setBounds(150, 150, 150, 25);
		        frame2.add(t6);
			    
			  
			    String selectedItem = (String) drp.getSelectedItem();
			    if (selectedItem != null) {
                    if (selectedItem.equals("Professor")) {
                        t6.setText("Professor");
                    } else if (selectedItem.equals("Associate Professor")) {
                        t6.setText("Associate Professor");
                    } else if (selectedItem.equals("Assistant Professor")) {
                        t6.setText("Assistant Professor");
                    }
                }
			  
	
			    
			    JLabel lbl6 = new JLabel("Basic Pay");
			    lbl6.setBounds(30,180,250,25);
			    frame2.add(lbl6);
			    
			    JLabel lbl7 = new JLabel("================ BILL =================");
			    lbl7.setBounds(30,210,300,25);
			    frame2.add(lbl7);
			    
			    JLabel lbl8 = new JLabel("Dearness Allowance");
			    lbl8.setBounds(30,240,250,25);
			    frame2.add(lbl8);
			    
			    JLabel lbl9 = new JLabel("House Rent Allowance");
			    lbl9.setBounds(30,260,250,25);
			    frame2.add(lbl9);
			    
			    JLabel lbl10 = new JLabel("Provident Fund");
			    lbl10.setBounds(30,280,250,25);
			    frame2.add(lbl10);
			    
			    JLabel lbl11 = new JLabel("Staff Fund");
			    lbl11.setBounds(30,300,250,25);
			    frame2.add(lbl11);
			    
			    JLabel lbl12 = new JLabel("Gross Salary");
			    lbl12.setBounds(30,320,250,25);
			    frame2.add(lbl12);
			    
			    JLabel lbl13 = new JLabel("Net Salary");
			    lbl13.setBounds(30,340,250,25);
			    frame2.add(lbl13);
			    
			    double DA = 0;
			    double HRA = 0;
			    double PF = 0;
			    double SF = 0;
			    double GP = 0;
			    double NP = 0;
			    double BP= Double.parseDouble((txt5.getText()));
			    
			    String SelectedItem = (String) drp.getSelectedItem();
			    if(selectedItem.equals("Professor")) {
			    	DA = BP*0.97;
			    	HRA = BP*0.10;
			    	PF = BP*0.12;
			    	SF = BP*0.001;
			    	GP = BP+DA+HRA;
			    	NP = GP-PF-SF;
			    	
			    }
                else if(selectedItem.equals("Associate Professor")) {
                	DA = BP*0.70;
			    	HRA = BP*0.10;
			    	PF = BP*0.12;
			    	SF = BP*0.001;
			    	GP = BP+DA+HRA;
			    	NP = GP-PF-SF;
                }
                else {
                	DA = BP*0.60;
			    	HRA = BP*0.10;
			    	PF = BP*0.12;
			    	SF = BP*0.001;
			    	GP = BP+DA+HRA;
			    	NP = GP-PF-SF;
                }
			    JLabel t7 = new JLabel(String.format("%.2f", DA));
                t7.setBounds(180, 240, 250, 25);
                frame2.add(t7);
                
                JLabel t8 = new JLabel(String.format("%.2f", HRA));
                t8.setBounds(180, 260, 250, 25);
                frame2.add(t8);
                
                JLabel t9 = new JLabel(String.format("%.2f", PF));
                t9.setBounds(180, 280, 250, 25);
                frame2.add(t9);
                
                JLabel t10 = new JLabel(String.format("%.2f", SF));
                t10.setBounds(180, 300, 250, 25);
                frame2.add(t10);
                
                JLabel t11 = new JLabel(String.format("%.2f", GP));
                t11.setBounds(180, 320, 250, 25);
                frame2.add(t11);
                
                JLabel t12 = new JLabel(String.format("%.2f", NP));
                t12.setBounds(180, 340, 250, 25);
                frame2.add(t12);
			    
			    
			    
			    
			    
			    
			
				JLabel t1 = new JLabel(txt1.getText());
			    t1.setBounds(150,30,250,25);
			    frame2.add(t1);
			    
			    JLabel t2 = new JLabel(txt2.getText());
			    t2.setBounds(150,60,250,25);
			    frame2.add(t2);
			    
			    JLabel t3 = new JLabel(txt3.getText());
			    t3.setBounds(150,90,250,25);
			    frame2.add(t3);
			    
			    JLabel t4 = new JLabel(txt4.getText());
			    t4.setBounds(150,120,250,25);
			    frame2.add(t4);
			    
			    JLabel t5 = new JLabel(txt5.getText());
			    t5.setBounds(150,180,120,25);
			    frame2.add(t5);			
				
				
				frame2.setLayout(null);
				frame2.setVisible(true);
			}
		});
		
	    
		
		
		frame.setVisible(true);

		
			
			
		}
				public static void main(String[] args) {
					new salaryslip();
				}
	}
