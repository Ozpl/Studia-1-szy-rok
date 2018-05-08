namespace Sandbox {
    partial class Form1 {
        /// <summary>
        /// Wymagana zmienna projektanta.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Wyczyść wszystkie używane zasoby.
        /// </summary>
        /// <param name="disposing">prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.</param>
        protected override void Dispose(bool disposing) {
            if (disposing && (components != null)) {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Kod generowany przez Projektanta formularzy systemu Windows

        /// <summary>
        /// Metoda wymagana do obsługi projektanta — nie należy modyfikować
        /// jej zawartości w edytorze kodu.
        /// </summary>
        private void InitializeComponent() {
            this.imieTextBox = new System.Windows.Forms.TextBox();
            this.imielabel = new System.Windows.Forms.Label();
            this.zapiszButton = new System.Windows.Forms.Button();
            this.wybierzLabel = new System.Windows.Forms.Label();
            this.numericUpDown1 = new System.Windows.Forms.NumericUpDown();
            this.npcComboBox = new System.Windows.Forms.ComboBox();
            this.testLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown1)).BeginInit();
            this.SuspendLayout();
            // 
            // imieTextBox
            // 
            this.imieTextBox.Location = new System.Drawing.Point(12, 31);
            this.imieTextBox.Name = "imieTextBox";
            this.imieTextBox.Size = new System.Drawing.Size(181, 20);
            this.imieTextBox.TabIndex = 0;
            // 
            // imielabel
            // 
            this.imielabel.AutoSize = true;
            this.imielabel.Location = new System.Drawing.Point(12, 13);
            this.imielabel.Name = "imielabel";
            this.imielabel.Size = new System.Drawing.Size(26, 13);
            this.imielabel.TabIndex = 1;
            this.imielabel.Text = "Imię";
            // 
            // zapiszButton
            // 
            this.zapiszButton.Location = new System.Drawing.Point(643, 28);
            this.zapiszButton.Name = "zapiszButton";
            this.zapiszButton.Size = new System.Drawing.Size(163, 23);
            this.zapiszButton.TabIndex = 2;
            this.zapiszButton.Text = "Zapisz zmiany";
            this.zapiszButton.UseVisualStyleBackColor = true;
            this.zapiszButton.Click += new System.EventHandler(this.zapiszButton_Click);
            // 
            // wybierzLabel
            // 
            this.wybierzLabel.AutoSize = true;
            this.wybierzLabel.Location = new System.Drawing.Point(640, 70);
            this.wybierzLabel.Name = "wybierzLabel";
            this.wybierzLabel.Size = new System.Drawing.Size(124, 13);
            this.wybierzLabel.TabIndex = 3;
            this.wybierzLabel.Text = "Wybierz obecnego NPC:";
            // 
            // numericUpDown1
            // 
            this.numericUpDown1.Location = new System.Drawing.Point(15, 201);
            this.numericUpDown1.Name = "numericUpDown1";
            this.numericUpDown1.Size = new System.Drawing.Size(120, 20);
            this.numericUpDown1.TabIndex = 4;
            // 
            // npcComboBox
            // 
            this.npcComboBox.FormattingEnabled = true;
            this.npcComboBox.Location = new System.Drawing.Point(643, 86);
            this.npcComboBox.Name = "npcComboBox";
            this.npcComboBox.Size = new System.Drawing.Size(163, 21);
            this.npcComboBox.TabIndex = 5;
            // 
            // testLabel
            // 
            this.testLabel.AutoSize = true;
            this.testLabel.Location = new System.Drawing.Point(590, 571);
            this.testLabel.Name = "testLabel";
            this.testLabel.Size = new System.Drawing.Size(50, 13);
            this.testLabel.TabIndex = 6;
            this.testLabel.Text = "testLabel";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(834, 638);
            this.Controls.Add(this.testLabel);
            this.Controls.Add(this.npcComboBox);
            this.Controls.Add(this.numericUpDown1);
            this.Controls.Add(this.wybierzLabel);
            this.Controls.Add(this.zapiszButton);
            this.Controls.Add(this.imielabel);
            this.Controls.Add(this.imieTextBox);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDown1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox imieTextBox;
        private System.Windows.Forms.Label imielabel;
        private System.Windows.Forms.Button zapiszButton;
        private System.Windows.Forms.Label wybierzLabel;
        private System.Windows.Forms.NumericUpDown numericUpDown1;
        private System.Windows.Forms.ComboBox npcComboBox;
        private System.Windows.Forms.Label testLabel;
    }
}

